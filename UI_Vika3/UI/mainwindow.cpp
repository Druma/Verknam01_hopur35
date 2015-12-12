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
    displayAllComputers();
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

void MainWindow::displayAllComputers()
{
    vector<Computer> computers = computerService.getAllComputers("name", true);

    displayComputers(computers);
}

void MainWindow::displayComputers(vector<Computer> computers)
{
    ui->table_computer->clearContents();
    ui->table_computer->setRowCount(computers.size());

    for (unsigned int row = 0; row < computers.size(); row++)
    {
        Computer currentComputer = computers.at(row);
        QString name = QString::fromStdString(currentComputer.getName());
        QString type = QString::fromStdString(currentComputer.getTypeName());
        QString yearBuilt = QString::number(currentComputer.getYearBuilt());
        QString wasBuilt;
        if(currentComputer.wasBuilt() == true) {
            wasBuilt = "Yes";
        }
        else {
            wasBuilt = "No";
        }

        ui->table_computer->setItem(row, 0, new QTableWidgetItem(name));
        ui->table_computer->setItem(row, 1, new QTableWidgetItem(type));
        if(currentComputer.wasBuilt()) {
            ui->table_computer->setItem(row, 2, new QTableWidgetItem(yearBuilt));
        }
        ui->table_computer->setItem(row, 3, new QTableWidgetItem(wasBuilt));
    }
}

void MainWindow::on_button_add_scientist_clicked()
{

}
