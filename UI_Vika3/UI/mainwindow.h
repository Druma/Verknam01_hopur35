#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "scientist.h"
#include <QMainWindow>
#include <vector>
#include "scientistservice.h"
#include "computerservice.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //void on_button_add_scientist_clicked();

    void on_table_scientist_clicked(const QModelIndex &index);

    void on_button_remove_scientist_clicked();

    void on_button_remove_computer_clicked();

    void on_search_scientist_textChanged(const QString &arg1);

    void on_dropdown_scientist_order_currentIndexChanged(int index);

    void on_dropdown_scientist_asc_activated(const QString &arg1);

    void on_search_computer_textChanged(const QString &arg1);

    void on_dropdown_computer_asc_activated(const QString &arg1);

    void on_dropdown_computer_order_currentIndexChanged(int index);

    void on_table_computer_clicked(const QModelIndex &index);

private:
    std::string orderBy(); //current order for Scientists
    bool getOrder();        //ascending or descending order for Scientists
    std::string orderByComputer(); //current order for Computers
    bool getOrderByComputer();     //ascending or descending order for Computers
    void displayAllScientists();
    void displayScientists(std::vector<Scientist>);
    void displayAllComputers();
    void displayComputers(std::vector<Computer>);

    ScientistService scientistService;
    ComputerService computerService;
    Ui::MainWindow *ui;

    std::vector<Scientist> scientist_list;
    std::vector<Computer> computer_list;
};

#endif // MAINWINDOW_H
