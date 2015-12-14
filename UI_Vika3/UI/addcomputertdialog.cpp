#include "addscientistdialog.h"
#include "ui_addscientistdialog.h"
#include "utilities/utils.h"

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

//function does not work correctly to add scientists
void addScientistDialog::on_add_newScientist_button_clicked()
{
    bool error = false;

    ui->label_error_sci_name->setText("");
    ui->label_error_sci_gender->setText("");
    ui->label_error_sci_yob->setText("");
    ui->label_error_sci_yod->setText("");

    QString name = ui->input_scientist_name->text();
    QString sex = ui->input_scientist_gender->text();
    QString yearBorn = ui->input_scientist_yob->text();
    QString yearDeath = ui->input_scientist_yod->text();

    if(name.isEmpty())
    {
        ui->label_error_sci_name->setText("Error, please input a name");
        error = true;
    }

    if(sex.isEmpty())
    {
        ui->label_error_sci_gender->setText("Error, please input a gender");
        error = true;
    }

    if(yearBorn.isEmpty())
    {
        ui->label_error_sci_yob->setText("Error, please input year of birth");
        error = true;
    }

    if(yearDeath.isEmpty())
    {
        ui->label_error_sci_yod->setText("Scientist is still alive");
        error = false;
    }

    if(error){
        return;
    }
    //veit ekki alveg hvad eg eigi ad setja inn sem parameter i scientist( , sex, , , ); hvada typu tha fyrst sex er enum!!
    //qDebug() << sex;
    bool add = scientistService.addScientist(Scientist(name.toStdString(), utils::stringToSex(sex.toStdString()), yearBorn.toInt(), yearDeath.toInt()));
    //bool add = false;
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

