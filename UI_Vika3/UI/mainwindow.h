#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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

    void on_button_add_scientist_clicked();

private:
    void displayAllScientists();
    void displayScientists(std::vector<Scientist>);

    ScientistService scientistService;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
