/********************************************************************************
** Form generated from reading UI file 'addconnectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONNECTIONDIALOG_H
#define UI_ADDCONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addconnectiondialog
{
public:
    QLabel *connection_sci_name_label;
    QLabel *connection_com_name_label;
    QLabel *connection_label;
    QPushButton *link_sci_and_com;
    QLabel *label_error_computer_yearbuilt;
    QLabel *label_error_sci_connection;
    QPushButton *cancel_link_scicom_button;
    QLabel *label_error_com_connection;
    QComboBox *dropdown_sci_connection;
    QComboBox *dropdown_com_connection;

    void setupUi(QDialog *addconnectiondialog)
    {
        if (addconnectiondialog->objectName().isEmpty())
            addconnectiondialog->setObjectName(QStringLiteral("addconnectiondialog"));
        addconnectiondialog->resize(396, 238);
        connection_sci_name_label = new QLabel(addconnectiondialog);
        connection_sci_name_label->setObjectName(QStringLiteral("connection_sci_name_label"));
        connection_sci_name_label->setGeometry(QRect(20, 50, 81, 20));
        connection_com_name_label = new QLabel(addconnectiondialog);
        connection_com_name_label->setObjectName(QStringLiteral("connection_com_name_label"));
        connection_com_name_label->setGeometry(QRect(20, 100, 91, 41));
        connection_label = new QLabel(addconnectiondialog);
        connection_label->setObjectName(QStringLiteral("connection_label"));
        connection_label->setGeometry(QRect(10, 10, 371, 21));
        link_sci_and_com = new QPushButton(addconnectiondialog);
        link_sci_and_com->setObjectName(QStringLiteral("link_sci_and_com"));
        link_sci_and_com->setGeometry(QRect(190, 190, 75, 23));
        label_error_computer_yearbuilt = new QLabel(addconnectiondialog);
        label_error_computer_yearbuilt->setObjectName(QStringLiteral("label_error_computer_yearbuilt"));
        label_error_computer_yearbuilt->setGeometry(QRect(130, 290, 271, 21));
        label_error_sci_connection = new QLabel(addconnectiondialog);
        label_error_sci_connection->setObjectName(QStringLiteral("label_error_sci_connection"));
        label_error_sci_connection->setGeometry(QRect(120, 70, 251, 31));
        cancel_link_scicom_button = new QPushButton(addconnectiondialog);
        cancel_link_scicom_button->setObjectName(QStringLiteral("cancel_link_scicom_button"));
        cancel_link_scicom_button->setGeometry(QRect(300, 190, 75, 23));
        label_error_com_connection = new QLabel(addconnectiondialog);
        label_error_com_connection->setObjectName(QStringLiteral("label_error_com_connection"));
        label_error_com_connection->setGeometry(QRect(120, 130, 261, 31));
        dropdown_sci_connection = new QComboBox(addconnectiondialog);
        dropdown_sci_connection->setObjectName(QStringLiteral("dropdown_sci_connection"));
        dropdown_sci_connection->setGeometry(QRect(120, 50, 251, 22));
        dropdown_com_connection = new QComboBox(addconnectiondialog);
        dropdown_com_connection->setObjectName(QStringLiteral("dropdown_com_connection"));
        dropdown_com_connection->setGeometry(QRect(120, 110, 251, 22));

        retranslateUi(addconnectiondialog);

        QMetaObject::connectSlotsByName(addconnectiondialog);
    } // setupUi

    void retranslateUi(QDialog *addconnectiondialog)
    {
        addconnectiondialog->setWindowTitle(QApplication::translate("addconnectiondialog", "Dialog", 0));
        connection_sci_name_label->setText(QApplication::translate("addconnectiondialog", "Scientist name:", 0));
        connection_com_name_label->setText(QApplication::translate("addconnectiondialog", "Computer name:", 0));
        connection_label->setText(QApplication::translate("addconnectiondialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#550000;\">Link scientist with computer</span><br/></p></body></html>", 0));
        link_sci_and_com->setText(QApplication::translate("addconnectiondialog", "Link", 0));
        label_error_computer_yearbuilt->setText(QString());
        label_error_sci_connection->setText(QApplication::translate("addconnectiondialog", "sgsdgs", 0));
        cancel_link_scicom_button->setText(QApplication::translate("addconnectiondialog", "cancel", 0));
        label_error_com_connection->setText(QApplication::translate("addconnectiondialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class addconnectiondialog: public Ui_addconnectiondialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONNECTIONDIALOG_H
