#ifndef ADDCOMPUTERDIALOG_H
#define ADDCOMPUTERDIALOG_H

#include <QDialog>
#include "computerservice.h"

namespace Ui {
class addComputerDialog;
}

class addComputerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addComputerDialog(QWidget *parent = 0);
    ~addComputerDialog();

private slots:
    //Gives user access to confirm adding new computer and adding computers to the database
    void on_add_newComputer_button_clicked();

    void on_cancel_add_newComputer_button_clicked();

    void on_checkBox_wasBuilt_stateChanged(int arg1);

private:
    Ui::addComputerDialog *ui;

    ComputerService computerService;
};

#endif // ADDCOMPUTERDIALOG_H
