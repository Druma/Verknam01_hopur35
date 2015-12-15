#include "addscientistdialog.h"
#include "ui_addscientistdialog.h"
#include "utilities/utils.h"
#include <QMessageBox>
#include <cctype>
#include <QDate>

addScientistDialog::addScientistDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addScientistDialog)
{
    ui->setupUi(this);
}

addScientistDialog::~addScientistDialog()
{
    delete ui;
}

void addScientistDialog::on_add_newScientist_button_clicked()
{
    // variables
    bool error = false;
    int currentYear = QDate::currentDate().year();

    QButtonGroup gender;
    gender.addButton(ui->radioButton_female);
    gender.addButton(ui->radioButton_male);

    // reset error messages
    ui->label_error_sci_name->setText("");
    ui->label_error_sci_yob->setText("");
    ui->label_error_sci_yod->setText("");

    QString name = ui->input_scientist_name->text();
    if(checkForInt(name.toStdString().c_str()))
    {
        ui->label_error_sci_name->setText("<span style='color: #ED1C14'>Name can not be digits</span>");
        error = true;
    }
    //QString sex = ui->input_scientist_gender->text();
    QString sex;
    QString yearBorn = ui->input_scientist_yob->text();
    QString yearDeath;

    if(name.isEmpty())
    {
        ui->label_error_sci_name->setText("<span style='color: #ED1C14'>Name can not be empty</span>");
        error = true;
    }

    if(gender.checkedButton() == ui->radioButton_female)
    {
        sex = "0";
    }else{
        sex = "1";
    }
    if(yearBorn.isEmpty())
    {
        ui->label_error_sci_yob->setText("<span style='color: #ED1C14'>Year of birth can not be empty</span>");
        error = true;
    } else if(!checkForAllInt(yearBorn.toStdString()))
    {
        ui->label_error_sci_yob->setText("<span style='color: #ED1C14'>Year of birth has to be numbers</span>");
        error = true;
    }else if(yearBorn.toInt() > currentYear)
    {
        ui->label_error_sci_yob->setText("<span style='color: #ED1C14'>this is not the future (future date inserted)</span>");
        error = true;
    }


    if(ui->checkBox_isAlive->isChecked())
    {
        yearDeath = ui->input_scientist_yod->text();
    }
    if(ui->checkBox_isAlive->isChecked())
    {
        if(yearDeath.isEmpty())
        {
            ui->label_error_sci_yod->setText("<span style='color: #ED1C14'>Scientist is still alive</span>");
            error = true;

        } else if(!checkForAllInt(yearDeath.toStdString()))
        {
            ui->label_error_sci_yod->setText("<span style='color: #ED1C14'>Year of death has to be numbers</span>");
            error = true;

        } else if(yearBorn.toInt() >= yearDeath.toInt())
        {
            ui->label_error_sci_yod->setText("<span style='color: #ED1C14'>Year of death cannot be lower than year of birth</span>");
            error = true;

        } else if(yearDeath.toInt() > currentYear)
        {
            ui->label_error_sci_yod->setText("<span style='color: #ED1C14'>this is not the future (future date inserted)</span>");
            error = true;
        }
    }

    if(error){
        return;
    }

    int confirm = QMessageBox::question(this, "Add new scientist", "Are you sure?");

    if(confirm == QMessageBox::No)
    {
        return;
    }

    bool add = scientistService.addScientist(Scientist(name.toStdString(), utils::stringToSex(sex.toStdString()), yearBorn.toInt(), yearDeath.toInt()));

    if(add)
    {
        ui->input_scientist_name->setText("");
        ui->input_scientist_yob->setText("");
        ui->input_scientist_yod->setText("");

        this->done(0);
    }
    else
    {
        this->done(-1);
    }

}

void addScientistDialog::on_cancel_add_newScientist_button_clicked()
{
    this->done(-1);
}

void addScientistDialog::on_checkBox_isAlive_stateChanged(int state)
{
    if(state == Qt::Checked)
    {
        ui->input_scientist_yod->setEnabled(true);
    }
    else{
        ui->input_scientist_yod->setEnabled(false);
    }
}
