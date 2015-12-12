#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    displayAllScientists();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayAllScientists()
{
    vector<Scientist> scientists = scientistService.getAllScientists("name", true);

    displayScientists(scientists);
}

void MainWindow::displayScientists(vector<Scientist> scientists)
{
    ui->table_scientist->clearContents();
    ui->table_scientist->setRowCount(scientists.size());

    for (unsigned int row = 0; row < scientists.size(); row++)
    {
        Scientist currentScientist = scientists.at(row);
        QString name = QString::fromStdString(currentScientist.getName());
        QString sex;
        if(currentScientist.getSex() == female) {
            sex = "Female";
        }
        else {
            sex = "Male";
        }
        QString yearBorn = QString::number(currentScientist.getYearBorn());
        QString yearDied = QString::number(currentScientist.getYearDied());

        ui->table_scientist->setItem(row, 0, new QTableWidgetItem(name));
        ui->table_scientist->setItem(row, 1, new QTableWidgetItem(sex));
        ui->table_scientist->setItem(row, 2, new QTableWidgetItem(yearBorn));
        ui->table_scientist->setItem(row, 3, new QTableWidgetItem(yearDied));
    }
}

void MainWindow::on_button_add_scientist_clicked()
{

}
