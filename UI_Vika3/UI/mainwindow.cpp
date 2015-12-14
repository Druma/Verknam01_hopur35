#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addscientistdialog.h"
#include "addcomputerdialog.h"
#include <QDebug>
#include <QMessageBox>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->dropdown_scientist_order->addItem("Name");
    ui->dropdown_scientist_order->addItem("Sex");
    ui->dropdown_scientist_order->addItem("Year of Birth");
    ui->dropdown_scientist_order->addItem("Year of Death");
    ui->dropdown_scientist_asc->addItem("Ascending");
    ui->dropdown_scientist_asc->addItem("Descending");

    ui->dropdown_computer_order->addItem("Name");
    ui->dropdown_computer_order->addItem("Type");
    ui->dropdown_computer_order->addItem("Year Built");
    ui->dropdown_computer_asc->addItem("Ascending");
    ui->dropdown_computer_asc->addItem("Descending");

    ui->dropdown_connection_order->addItem("Scientist");
    ui->dropdown_connection_order->addItem("Computer");
    ui->dropdown_connection_order->addItem("Year Built");
    ui->dropdown_connection_asc->addItem("Ascending");
    ui->dropdown_connection_asc->addItem("Descending");

    displayAllScientists();
    displayAllComputers();
    //displayAllConnections();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayAllScientists()
{
    vector<Scientist> scientists = scientistService.getAllScientists(orderBy(), getOrder());

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
    vector<Computer> computers = computerService.getAllComputers(orderByComputer(), getOrderByComputer());

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
    computer_list = computers;
}

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

void MainWindow::on_table_computer_clicked(const QModelIndex &index)
{
    ui->button_remove_computer->setEnabled(true);
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

void MainWindow::on_search_scientist_textChanged(const QString &arg1)
{
    string search = ui->search_scientist->text().toStdString();

    vector<Scientist> scientist = scientistService.searchForScientists(search, orderBy(), getOrder());
    displayScientists(scientist);
}

void MainWindow::on_dropdown_scientist_order_currentIndexChanged(int index)
{
    on_search_scientist_textChanged("");
}

void MainWindow::on_dropdown_scientist_asc_activated(const QString &arg1)
{
    on_search_scientist_textChanged("");
}

string MainWindow::orderBy()
{
    string currentOrderBy = ui->dropdown_scientist_order->currentText().toStdString();

    if(currentOrderBy == "Name")
    {
        return "name";
    }
    else if(currentOrderBy == "Sex")
    {
        return "sex";
    }
    else if(currentOrderBy == "Year of Birth")
    {
        return "yearBorn";
    }
    else if(currentOrderBy == "Year of Death")
    {
        return "yearDied";
    }
    else
        return "name";
}

bool MainWindow::getOrder()
{
    string order = ui->dropdown_scientist_asc->currentText().toStdString();

    if(order == "Ascending")
    {
        return true;
    }
    else
        return false;
}

string MainWindow::orderByComputer()
{
    string currentOrderBy = ui->dropdown_computer_order->currentText().toStdString();

    if(currentOrderBy == "Name")
    {
        return "name";
    }
    else if(currentOrderBy == "Type")
    {
        return "type";
    }
    else if(currentOrderBy == "Year Built")
    {
        return "yearBuilt";
    }
    else
        return "name";
}

bool MainWindow::getOrderByComputer()
{
    string order = ui->dropdown_computer_asc->currentText().toStdString();

    if(order == "Ascending")
    {
        return true;
    }
    else
        return false;
}

void MainWindow::on_search_computer_textChanged(const QString &arg1)
{
    string search = ui->search_computer->text().toStdString();

    vector<Computer> computer = computerService.searchForComputers(search, orderByComputer(), getOrderByComputer());
    displayComputers(computer);
}

void MainWindow::on_dropdown_computer_asc_activated(const QString &arg1)
{
    on_search_computer_textChanged("");
}

void MainWindow::on_dropdown_computer_order_currentIndexChanged(int index)
{
    on_search_computer_textChanged("");
}

void MainWindow::on_button_add_computer_clicked()
{
    addComputerDialog add_ComputerDialog;
    int addComputer = add_ComputerDialog.exec();

    if(addComputer == 0)
    {
        displayAllComputers();
    }
    else
    {
        //Error
    }
}
