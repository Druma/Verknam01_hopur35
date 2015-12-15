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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_addComputerDialog
{
public:
    QLabel *computer_label_type;
    QLabel *computer_label_yearbuilt;
    QLabel *label_error_computer_name;
    QLabel *add_new_computer_label;
    QLineEdit *input_computer_yearbuilt;
    QPushButton *cancel_add_newComputer_button;
    QLabel *label_error_computer_yearbuilt;
    QLineEdit *input_computer_name;
    QPushButton *add_newComputer_button;
    QLabel *computer_labe_name;
    QRadioButton *radioButton_electronic;
    QRadioButton *radioButton_mechatron;
    QRadioButton *radioButton_transistor;
    QRadioButton *radioButton_other;
    QCheckBox *checkBox_wasBuilt;

    void setupUi(QDialog *addComputerDialog)
    {
        if (addComputerDialog->objectName().isEmpty())
            addComputerDialog->setObjectName(QStringLiteral("addComputerDialog"));
        addComputerDialog->resize(400, 338);
        computer_label_type = new QLabel(addComputerDialog);
        computer_label_type->setObjectName(QStringLiteral("computer_label_type"));
        computer_label_type->setGeometry(QRect(10, 100, 31, 31));
        computer_label_yearbuilt = new QLabel(addComputerDialog);
        computer_label_yearbuilt->setObjectName(QStringLiteral("computer_label_yearbuilt"));
        computer_label_yearbuilt->setGeometry(QRect(90, 250, 51, 16));
        label_error_computer_name = new QLabel(addComputerDialog);
        label_error_computer_name->setObjectName(QStringLiteral("label_error_computer_name"));
        label_error_computer_name->setGeometry(QRect(90, 60, 271, 31));
        add_new_computer_label = new QLabel(addComputerDialog);
        add_new_computer_label->setObjectName(QStringLiteral("add_new_computer_label"));
        add_new_computer_label->setGeometry(QRect(30, 10, 331, 21));
        input_computer_yearbuilt = new QLineEdit(addComputerDialog);
        input_computer_yearbuilt->setObjectName(QStringLiteral("input_computer_yearbuilt"));
        input_computer_yearbuilt->setGeometry(QRect(150, 250, 211, 20));
        cancel_add_newComputer_button = new QPushButton(addComputerDialog);
        cancel_add_newComputer_button->setObjectName(QStringLiteral("cancel_add_newComputer_button"));
        cancel_add_newComputer_button->setGeometry(QRect(290, 310, 75, 23));
        label_error_computer_yearbuilt = new QLabel(addComputerDialog);
        label_error_computer_yearbuilt->setObjectName(QStringLiteral("label_error_computer_yearbuilt"));
        label_error_computer_yearbuilt->setGeometry(QRect(90, 270, 271, 21));
        input_computer_name = new QLineEdit(addComputerDialog);
        input_computer_name->setObjectName(QStringLiteral("input_computer_name"));
        input_computer_name->setGeometry(QRect(90, 40, 271, 20));
        add_newComputer_button = new QPushButton(addComputerDialog);
        add_newComputer_button->setObjectName(QStringLiteral("add_newComputer_button"));
        add_newComputer_button->setGeometry(QRect(180, 310, 75, 23));
        computer_labe_name = new QLabel(addComputerDialog);
        computer_labe_name->setObjectName(QStringLiteral("computer_labe_name"));
        computer_labe_name->setGeometry(QRect(10, 40, 61, 20));
        radioButton_electronic = new QRadioButton(addComputerDialog);
        radioButton_electronic->setObjectName(QStringLiteral("radioButton_electronic"));
        radioButton_electronic->setGeometry(QRect(60, 110, 82, 17));
        radioButton_electronic->setChecked(true);
        radioButton_mechatron = new QRadioButton(addComputerDialog);
        radioButton_mechatron->setObjectName(QStringLiteral("radioButton_mechatron"));
        radioButton_mechatron->setGeometry(QRect(140, 110, 82, 17));
        radioButton_transistor = new QRadioButton(addComputerDialog);
        radioButton_transistor->setObjectName(QStringLiteral("radioButton_transistor"));
        radioButton_transistor->setGeometry(QRect(230, 110, 82, 17));
        radioButton_other = new QRadioButton(addComputerDialog);
        radioButton_other->setObjectName(QStringLiteral("radioButton_other"));
        radioButton_other->setGeometry(QRect(310, 110, 82, 17));
        checkBox_wasBuilt = new QCheckBox(addComputerDialog);
        checkBox_wasBuilt->setObjectName(QStringLiteral("checkBox_wasBuilt"));
        checkBox_wasBuilt->setGeometry(QRect(60, 220, 70, 17));
        checkBox_wasBuilt->setChecked(true);
        QWidget::setTabOrder(input_computer_name, input_computer_yearbuilt);
        QWidget::setTabOrder(input_computer_yearbuilt, add_newComputer_button);
        QWidget::setTabOrder(add_newComputer_button, cancel_add_newComputer_button);

        retranslateUi(addComputerDialog);

        QMetaObject::connectSlotsByName(addComputerDialog);
    } // setupUi

    void retranslateUi(QDialog *addComputerDialog)
    {
        addComputerDialog->setWindowTitle(QApplication::translate("addComputerDialog", "Dialog", 0));
        computer_label_type->setText(QApplication::translate("addComputerDialog", "Type:", 0));
        computer_label_yearbuilt->setText(QApplication::translate("addComputerDialog", "Year Built", 0));
        label_error_computer_name->setText(QString());
        add_new_computer_label->setText(QApplication::translate("addComputerDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#550000;\">Add a new computer</span></p><p align=\"center\"><br/></p></body></html>", 0));
        cancel_add_newComputer_button->setText(QApplication::translate("addComputerDialog", "cancel", 0));
        label_error_computer_yearbuilt->setText(QString());
        add_newComputer_button->setText(QApplication::translate("addComputerDialog", "Add", 0));
        computer_labe_name->setText(QApplication::translate("addComputerDialog", "Name:", 0));
        radioButton_electronic->setText(QApplication::translate("addComputerDialog", "Electronic", 0));
        radioButton_mechatron->setText(QApplication::translate("addComputerDialog", "Mechatron", 0));
        radioButton_transistor->setText(QApplication::translate("addComputerDialog", "Transistor", 0));
        radioButton_other->setText(QApplication::translate("addComputerDialog", "Other", 0));
        checkBox_wasBuilt->setText(QApplication::translate("addComputerDialog", "Was Built", 0));
    } // retranslateUi

};

namespace Ui {
    class addComputerDialog: public Ui_addComputerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMPUTERDIALOG_H
