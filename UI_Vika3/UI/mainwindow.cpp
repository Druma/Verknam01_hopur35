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
    vector<Scientist> scientists = ScientistService().getAllScientists("Ascending", true);

    displayScientists(scientists);
}

void MainWindow::displayScientists(vector<Scientist> scientists)
{

    ui->table_scientist->clearContents();
    ui->table_scientist->setRowCount(scientists.size());

    for (unsigned int row = 0; row < scientists.size(); row++) {
        Scientist currentScientist = scientists.at(row);
        QString name = QString::fromStdString(currentScientist.getName());
        ui->table_scientist->setItem(row, 0, new QTableWidgetItem(name));
    }

}
