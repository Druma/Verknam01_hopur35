#include "addcomputerdialog.h"
#include "ui_addcomputerdialog.h"
#include "utilities/utils.h"
#include <QMessageBox>

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
        ui->label_error_computer_name->setText("<span style='color: #ED1C14'>Computer Name can not be empty</span>");
        error = true;
    }

    if(type.isEmpty())
    {
        ui->label_error_computer_type->setText("<span style='color: #ED1C14'>Computer Type can not be empty</span>");
        error = true;
    }

    if(wasBuilt.isEmpty())
    {
        ui->label_error_computer_wasbuilt->setText("<span style='color: #ED1C14'>Computer Was Built can not be empty</span>");
        error = true;
    }

    if(wasBuilt.toInt() == 1 && yearBuilt.isEmpty())
    {
        ui->label_error_computer_yearbuilt->setText("<span style='color: #ED1C14'>Computer Year Built can not be empty</span>");
        error = true;
    }

    if(error)
        return;

    int confirm = QMessageBox::question(this, "Add new computer", "Are you sure?");

    if(confirm == QMessageBox::No)
    {
        return;
    }

    bool add = computerService.addComputer(Computer(name.toStdString(), utils::intToComputerType(type.toInt()), yearBuilt.toInt()));

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

void addComputerDialog::on_cancel_add_newComputer_button_clicked()
{
    this->done(-1);
}
