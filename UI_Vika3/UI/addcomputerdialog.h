#ifndef ADDSCIENTISTDIALOG_H
#define ADDSCIENTISTDIALOG_H

#include <QDialog>
#include "scientistservice.h"

namespace Ui {
class addScientistDialog;
}

class addScientistDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addScientistDialog(QWidget *parent = 0);
    ~addScientistDialog();

private slots:
    void on_add_newScientist_button_clicked();

private:
    Ui::addScientistDialog *ui;

    ScientistService scientistService;
};

#endif // ADDSCIENTISTDIALOG_H