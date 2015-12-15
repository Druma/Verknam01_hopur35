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
    // variables
    bool error = false;

    QButtonGroup typeGroup;
    typeGroup.addButton(ui->radioButton_electronic);
    typeGroup.addButton(ui->radioButton_mechatron);
    typeGroup.addButton(ui->radioButton_transistor);
    typeGroup.addButton(ui->radioButton_other);

    // reset error messages
    ui->label_error_computer_name->setText("");
    ui->label_error_computer_yearbuilt->setText("");

    QString name = ui->input_computer_name->text();
    QString type;
    QString yearBuilt;

    if(name.isEmpty())
    {
        ui->label_error_computer_name->setText("<span style='color: #ED1C14'>Computer Name can not be empty</span>");
        error = true;
    }

    if(typeGroup.checkedButton() == ui->radioButton_electronic)
    {
        type = "0";
    }else if (typeGroup.checkedButton() == ui->radioButton_mechatron){
        type = "1";
    } else if (typeGroup.checkedButton() == ui->radioButton_transistor){
        type = "2";
    } else{
        type = "3";
    }

    if(ui->checkBox_wasBuilt->isChecked())
    {
        yearBuilt = ui->input_computer_yearbuilt->text();
    }

    if(ui->checkBox_wasBuilt->isChecked() && yearBuilt.isEmpty())
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

void addComputerDialog::on_checkBox_wasBuilt_stateChanged(int state)
{
    if(state == Qt::Checked)
    {
        ui->input_computer_yearbuilt->setEnabled(true);
    }
    else{
        ui->input_computer_yearbuilt->setEnabled(false);
    }
}
