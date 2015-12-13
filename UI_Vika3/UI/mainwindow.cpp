#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addscientistdialog.h"
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
    scientist_list = scientists;
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
/*
void MainWindow::on_button_add_scientist_clicked()
{
    addScientistDialog add_ScientistDialog;
    int addScientist = add_ScientistDialog.exec();

    if(addScientist == 0)
    {
        displayAllScientists();
    }
    else
    {
        //Error
    }
}
*/

void MainWindow::on_table_scientist_clicked(const QModelIndex &index)
{
    ui->button_remove_scientist->setEnabled(true);
}

void MainWindow::on_button_remove_scientist_clicked()
{
    int selected_scientist = ui->table_scientist->currentIndex().row();
    Scientist scientist_select = scientist_list.at(selected_scientist);

    if (scientistService.removeScientist(scientist_select))
    {
        ui->search_scientist->setText("");
        displayAllScientists();

        ui->button_remove_scientist->setEnabled(false);
    }
    else
    {
        //Error
    }

}

void MainWindow::on_button_remove_computer_clicked()
{
    int selected_computer = ui->table_computer->currentIndex().row();
    Computer computer_select = computer_list.at(selected_computer);

    if (computerService.removeComputer(computer_select))
    {
        ui->search_computer->setText("");
        displayAllComputers();

        ui->button_remove_computer->setEnabled(false);
    }
    else
    {
        //Error
    }
}
