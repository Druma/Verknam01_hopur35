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
