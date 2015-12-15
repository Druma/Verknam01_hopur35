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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addComputerDialog
{
public:
    QLabel *label_error_computer_name;
    QLabel *add_new_computer_label;
    QPushButton *cancel_add_newComputer_button;
    QLabel *label_error_computer_yearbuilt;
    QPushButton *add_newComputer_button;
    QCheckBox *checkBox_wasBuilt;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *computer_label_yearbuilt;
    QLineEdit *input_computer_yearbuilt;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *computer_label_type;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_mechatron;
    QRadioButton *radioButton_electronic;
    QRadioButton *radioButton_transistor;
    QRadioButton *radioButton_other;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *computer_labe_name;
    QLineEdit *input_computer_name;

    void setupUi(QDialog *addComputerDialog)
    {
        if (addComputerDialog->objectName().isEmpty())
            addComputerDialog->setObjectName(QStringLiteral("addComputerDialog"));
        addComputerDialog->resize(400, 338);
        label_error_computer_name = new QLabel(addComputerDialog);
        label_error_computer_name->setObjectName(QStringLiteral("label_error_computer_name"));
        label_error_computer_name->setGeometry(QRect(90, 80, 271, 31));
        add_new_computer_label = new QLabel(addComputerDialog);
        add_new_computer_label->setObjectName(QStringLiteral("add_new_computer_label"));
        add_new_computer_label->setGeometry(QRect(30, 10, 331, 21));
        cancel_add_newComputer_button = new QPushButton(addComputerDialog);
        cancel_add_newComputer_button->setObjectName(QStringLiteral("cancel_add_newComputer_button"));
        cancel_add_newComputer_button->setGeometry(QRect(280, 290, 75, 23));
        label_error_computer_yearbuilt = new QLabel(addComputerDialog);
        label_error_computer_yearbuilt->setObjectName(QStringLiteral("label_error_computer_yearbuilt"));
        label_error_computer_yearbuilt->setGeometry(QRect(90, 250, 271, 21));
        add_newComputer_button = new QPushButton(addComputerDialog);
        add_newComputer_button->setObjectName(QStringLiteral("add_newComputer_button"));
        add_newComputer_button->setGeometry(QRect(180, 290, 75, 23));
        checkBox_wasBuilt = new QCheckBox(addComputerDialog);
        checkBox_wasBuilt->setObjectName(QStringLiteral("checkBox_wasBuilt"));
        checkBox_wasBuilt->setGeometry(QRect(20, 190, 171, 17));
        checkBox_wasBuilt->setChecked(true);
        horizontalLayoutWidget = new QWidget(addComputerDialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 220, 351, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        computer_label_yearbuilt = new QLabel(horizontalLayoutWidget);
        computer_label_yearbuilt->setObjectName(QStringLiteral("computer_label_yearbuilt"));

        horizontalLayout_5->addWidget(computer_label_yearbuilt);

        input_computer_yearbuilt = new QLineEdit(horizontalLayoutWidget);
        input_computer_yearbuilt->setObjectName(QStringLiteral("input_computer_yearbuilt"));

        horizontalLayout_5->addWidget(input_computer_yearbuilt);

        horizontalLayoutWidget_2 = new QWidget(addComputerDialog);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 100, 231, 71));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        computer_label_type = new QLabel(horizontalLayoutWidget_2);
        computer_label_type->setObjectName(QStringLiteral("computer_label_type"));

        horizontalLayout_6->addWidget(computer_label_type);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        radioButton_mechatron = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_mechatron->setObjectName(QStringLiteral("radioButton_mechatron"));

        gridLayout->addWidget(radioButton_mechatron, 1, 0, 1, 1);

        radioButton_electronic = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_electronic->setObjectName(QStringLiteral("radioButton_electronic"));
        radioButton_electronic->setChecked(true);

        gridLayout->addWidget(radioButton_electronic, 0, 0, 1, 1);

        radioButton_transistor = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_transistor->setObjectName(QStringLiteral("radioButton_transistor"));

        gridLayout->addWidget(radioButton_transistor, 0, 1, 1, 1);

        radioButton_other = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_other->setObjectName(QStringLiteral("radioButton_other"));

        gridLayout->addWidget(radioButton_other, 1, 1, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);

        horizontalLayoutWidget_3 = new QWidget(addComputerDialog);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 60, 361, 21));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        computer_labe_name = new QLabel(horizontalLayoutWidget_3);
        computer_labe_name->setObjectName(QStringLiteral("computer_labe_name"));

        horizontalLayout_7->addWidget(computer_labe_name);

        input_computer_name = new QLineEdit(horizontalLayoutWidget_3);
        input_computer_name->setObjectName(QStringLiteral("input_computer_name"));

        horizontalLayout_7->addWidget(input_computer_name);

        QWidget::setTabOrder(input_computer_name, input_computer_yearbuilt);
        QWidget::setTabOrder(input_computer_yearbuilt, add_newComputer_button);
        QWidget::setTabOrder(add_newComputer_button, cancel_add_newComputer_button);

        retranslateUi(addComputerDialog);

        QMetaObject::connectSlotsByName(addComputerDialog);
    } // setupUi

    void retranslateUi(QDialog *addComputerDialog)
    {
        addComputerDialog->setWindowTitle(QApplication::translate("addComputerDialog", "Add a new computer", 0));
        label_error_computer_name->setText(QString());
        add_new_computer_label->setText(QApplication::translate("addComputerDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#550000;\">Add a new computer</span></p><p align=\"center\"><br/></p></body></html>", 0));
        cancel_add_newComputer_button->setText(QApplication::translate("addComputerDialog", "cancel", 0));
        label_error_computer_yearbuilt->setText(QString());
        add_newComputer_button->setText(QApplication::translate("addComputerDialog", "Add", 0));
        checkBox_wasBuilt->setText(QApplication::translate("addComputerDialog", "Was Built", 0));
        computer_label_yearbuilt->setText(QApplication::translate("addComputerDialog", "Year Built:", 0));
        computer_label_type->setText(QApplication::translate("addComputerDialog", "Type:", 0));
        radioButton_mechatron->setText(QApplication::translate("addComputerDialog", "Mechatron", 0));
        radioButton_electronic->setText(QApplication::translate("addComputerDialog", "Electronic", 0));
        radioButton_transistor->setText(QApplication::translate("addComputerDialog", "Transistor", 0));
        radioButton_other->setText(QApplication::translate("addComputerDialog", "Other", 0));
        computer_labe_name->setText(QApplication::translate("addComputerDialog", "Name:", 0));
    } // retranslateUi

};

namespace Ui {
    class addComputerDialog: public Ui_addComputerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCOMPUTERDIALOG_H
