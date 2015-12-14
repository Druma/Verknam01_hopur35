#include "addcomputerdialog.h"
#include "ui_addcomputerdialog.h"
#include "utilities/utils.h"

addComputerDialog::addComputerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addComputerDialog)
{
    ui->setupUi(this);
}

addComputerDialog::~addComputerDialog()
{
    delete ui;
}

//function does not work correctly to add scientists
void addComputerDialog::on_add_newComputer_button_clicked()
{
    bool error = false;

    ui->label_error_computer_name->setText("");
    ui->label_error_computer_type->setText("");
    ui->label_error_computer_wasbuilt->setText("");
    ui->label_error_computer_yearbuilt->setText("");

    QString name = ui->input_computer_name->text();
    QString type = ui->input_computer_type->text();
    QString wasBuilt = ui->input_computer_wasbuilt->text();
    QString yearBuilt = ui->input_computer_yearbuilt->text();

    if(name.isEmpty())
    {
        ui->label_error_computer_name->setText("Error, please input a name");
        error = true;
    }

    if(type.isEmpty())
    {
        ui->label_error_computer_type->setText("Error, please input a type");
        error = true;
    }

    if(wasBuilt.isEmpty())
    {
        ui->label_error_computer_wasbuilt->setText("Error");
        error = true;
    }

    if(yearBuilt.isEmpty())
    {
        ui->label_error_computer_yearbuilt->setText("Error, please input year of creation");
        error = false;
    }

    if(error){
        return;
    }
    //veit ekki alveg hvad eg eigi ad setja inn sem parameter i scientist( , sex, , , ); hvada typu tha fyrst sex er enum!!
    //qDebug() << sex;
    bool add = computerService.addComputer(Computer(name.toStdString(), utils::intToComputerType(type.toInt()), yearBuilt.toInt()));
    //bool add = false;
    if(add)
    {
        ui->input_computer_name->setText("");
        ui->input_computer_type->setText("");
        ui->input_computer_wasbuilt->setText("");
        ui->input_computer_yearbuilt->setText("");

        this->done(0);
    }
    else
    {
        this->done(-1);
    }

}

