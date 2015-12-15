/********************************************************************************
** Form generated from reading UI file 'addcomputerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCOMPUTERDIALOG_H
#define UI_ADDCOMPUTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addScientistDialog
{
public:
    QLabel *computer_label_type;
    QLabel *computer_label_yearbuilt;
    QLineEdit *input_computer_type;
    QLabel *label_error_computer_name;
    QLabel *add_new_computer_label;
    QLabel *label_error_computer_type;
    QLabel *label_error_computer_wasbuilt;
    QLineEdit *input_computer_yearbuilt;
    QPushButton *cancel_add_newComputer_button;
    QLabel *label_error_computer_yearbuilt;
    QLineEdit *input_computer_name;
    QLineEdit *input_computer_wasbuilt;
    QLabel *computer_label_wasbuilt;
    QPushButton *add_newComputer_button;
    QLabel *computer_labe_name;

    void setupUi(QDialog *addScientistDialog)
    {
        if (addScientistDialog->objectName().isEmpty())
            addScientistDialog->setObjectName(QStringLiteral("addScientistDialog"));
        addScientistDialog->resize(400, 300);
        computer_label_type = new QLabel(addScientistDialog);
        computer_label_type->setObjectName(QStringLiteral("computer_label_type"));
        computer_label_type->setGeometry(QRect(10, 90, 71, 16));
        computer_label_yearbuilt = new QLabel(addScientistDialog);
        computer_label_yearbuilt->setObjectName(QStringLiteral("computer_label_yearbuilt"));
        computer_label_yearbuilt->setGeometry(QRect(10, 190, 71, 16));
        input_computer_type = new QLineEdit(addScientistDialog);
        input_computer_type->setObjectName(QStringLiteral("input_computer_type"));
        input_computer_type->setGeometry(QRect(90, 90, 271, 20));
        label_error_computer_name = new QLabel(addScientistDialog);
        label_error_computer_name->setObjectName(QStringLiteral("label_error_computer_name"));
        label_error_computer_name->setGeometry(QRect(90, 60, 271, 31));
        add_new_computer_label = new QLabel(addScientistDialog);
        add_new_computer_label->setObjectName(QStringLiteral("add_new_computer_label"));
        add_new_computer_label->setGeometry(QRect(30, 10, 331, 21));
        label_error_computer_type = new QLabel(addScientistDialog);
        label_error_computer_type->setObjectName(QStringLiteral("label_error_computer_type"));
        label_error_computer_type->setGeometry(QRect(90, 115, 271, 21));
        label_error_computer_wasbuilt = new QLabel(addScientistDialog);
        label_error_computer_wasbuilt->setObjectName(QStringLiteral("label_error_computer_wasbuilt"));
        label_error_computer_wasbuilt->setGeometry(QRect(90, 165, 271, 21));
        input_computer_yearbuilt = new QLineEdit(addScientistDialog);
        input_computer_yearbuilt->setObjectName(QStringLiteral("input_computer_yearbuilt"));
        input_computer_yearbuilt->setGeometry(QRect(90, 190, 271, 20));
        cancel_add_newComputer_button = new QPushButton(addScientistDialog);
        cancel_add_newComputer_button->setObjectName(QStringLiteral("cancel_add_newComputer_button"));
        cancel_add_newComputer_button->setGeometry(QRect(290, 240, 75, 23));
        label_error_computer_yearbuilt = new QLabel(addScientistDialog);
        label_error_computer_yearbuilt->setObjectName(QStringLiteral("label_error_computer_yearbuilt"));
        label_error_computer_yearbuilt->setGeometry(QRect(90, 210, 271, 21));
        input_computer_name = new QLineEdit(addScientistDialog);
        input_computer_name->setObjectName(QStringLiteral("input_computer_name"));
        input_computer_name->setGeometry(QRect(90, 40, 271, 20));
        input_computer_wasbuilt = new QLineEdit(addScientistDialog);
        input_computer_wasbuilt->setObjectName(QStringLiteral("input_computer_wasbuilt"));
        input_computer_wasbuilt->setGeometry(QRect(90, 140, 271, 20));
        computer_label_wasbuilt = new QLabel(addScientistDialog);
        computer_label_wasbuilt->setObjectName(QStringLiteral("computer_label_wasbuilt"));
        computer_label_wasbuilt->setGeometry(QRect(10, 140, 71, 16));
        add_newComputer_button = new QPushButton(addScientistDialog);
        add_newComputer_button->setObjectName(QStringLiteral("add_newComputer_button"));
        add_newComputer_button->setGeometry(QRect(200, 240, 75, 23));
        computer_labe_name = new QLabel(addScientistDialog);
        computer_labe_name->setObjectName(QStringLiteral("computer_labe_name"));
        computer_labe_name->setGeometry(QRect(10, 40, 61, 20));

        retranslateUi(addScientistDialog);

        QMetaObject::connectSlotsByName(addScientistDialog);
    } // setupUi

    void retranslateUi(QDialog *addScientistDialog)
    {
        addScientistDialog->setWindowTitle(QApplication::translate("addScientistDialog", "Dialog", 0));
        computer_label_type->setText(QApplication::translate("addScientistDialog", "Type:", 0));
        computer_label_yearbuilt->setText(QApplication::translate("addScientistDialog", "Year Built", 0));
        label_error_computer_name->setText(QString());
        add_new_computer_label->setText(QApplication::translate("addScientistDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#550000;\">Add a new computer</span></p><p align=\"center\"><br/></p></body></html>", 0));
        label_error_computer_type->setText(QString());
        label_error_computer_wasbuilt->setText(QString());
        cancel_add_newComputer_button->setText(QApplication::translate("addScientistDialog", "cancel", 0));
        label_error_computer_yearbuilt->setText(QString());
        computer_label_wasbuilt->setText(QApplication::translate("addScientistDialog", "Was Built: y/n", 0));
        add_newComputer_button->setText(QApplication::translate("addScientistDialog", "Add", 0));
        computer_labe_name->setText(QApplication::translate("addScientistDialog", "Name:", 0));
    } // retranslateUi

};

namespace Ui {
    class addScientistDialog: public Ui_addScientistDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMPUTERDIALOG_H
