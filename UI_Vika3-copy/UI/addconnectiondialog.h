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

private:
    Ui::addconnectiondialog *ui;
};

#endif // ADDCONNECTIONDIALOG_H
