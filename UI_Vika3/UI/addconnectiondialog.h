#ifndef ADDCONNECTIONDIALOG_H
#define ADDCONNECTIONDIALOG_H

#include <QDialog>

namespace Ui {
class addconnectiondialog;
}

class addconnectiondialog : public QDialog
{
    Q_OBJECT

public:
    explicit addconnectiondialog(QWidget *parent = 0);
    ~addconnectiondialog();

private slots:
    //Gives user access to confirm adding new links and adding links to the database
    void on_add_newConnection_button_clicked();

    void on_cancel_add_newConnection_button_clicked();

private:
    Ui::addconnectiondialog *ui;
};

#endif // ADDCONNECTIONDIALOG_H
