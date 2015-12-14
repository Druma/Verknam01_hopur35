#include "addscientistdialog.h"
#include "ui_addscientistdialog.h"
#include "utilities/utils.h"
#include <QMessageBox>
#include <cctype>

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
    bool error = false;

    ui->label_error_sci_name->setText("");
    ui->label_error_sci_gender->setText("");
    ui->label_error_sci_yob->setText("");
    ui->label_error_sci_yod->setText("");

    QString name = ui->input_scientist_name->text();
    /*if(isalpha(name[0]))
    {
        ui->label_error_sci_name->setText("<span style='color: #ED1C14'>Name can not be digits</span>");
        error = true;
    }*/
    QString sex = ui->input_scientist_gender->text();
    QString yearBorn = ui->input_scientist_yob->text();
    QString yearDeath = ui->input_scientist_yod->text();

    if(name.isEmpty())
    {
        ui->label_error_sci_name->setText("<span style='color: #ED1C14'>Name can not be empty</span>");
        error = true;
    }

    if(sex.isEmpty())
    {
        ui->label_error_sci_gender->setText("<span style='color: #ED1C14'>Gender can not be empty</span>");
        error = true;
    }

    if(yearBorn.isEmpty())
    {
        ui->label_error_sci_yob->setText("<span style='color: #ED1C14'>Year of birth can not be empty</span>");
        error = true;
    }

    if(yearBorn.isEmpty() == false && yearDeath.isEmpty())
    {
        ui->label_error_sci_yod->setText("<span style='color: #ED1C14'>Scientist is still alive</span>");
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
        ui->input_scientist_gender->setText("");
        ui->input_scientist_yob->setText("");
        ui->input_scientist_yod->setText("");

        this->done(0);
    }
    else
    {
        this->done(-1);
    }

}
