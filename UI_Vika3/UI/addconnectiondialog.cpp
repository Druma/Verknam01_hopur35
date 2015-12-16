#include "addconnectiondialog.h"
#include "ui_addconnectiondialog.h"

addconnectiondialog::addconnectiondialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addconnectiondialog)
{
    ui->setupUi(this);
}

addconnectiondialog::~addconnectiondialog()
{
    delete ui;
}

void addconnectiondialog::on_cancel_add_newConnection_button_clicked()
{
    this->done(-1);
}
