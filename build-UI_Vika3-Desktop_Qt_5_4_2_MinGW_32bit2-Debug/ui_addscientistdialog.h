/********************************************************************************
** Form generated from reading UI file 'addscientistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSCIENTISTDIALOG_H
#define UI_ADDSCIENTISTDIALOG_H

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
    QLabel *scientist_gender_label;
    QLabel *scientist_yod_label;
    QLineEdit *input_scientist_gender;
    QLabel *label_error_sci_name;
    QLabel *add_new_scientist_label;
    QLabel *label_error_sci_gender;
    QLabel *label_error_sci_yob;
    QLineEdit *input_scientist_yod;
    QPushButton *cancel_add_newScientist_button;
    QLabel *label_error_sci_yod;
    QLineEdit *input_scientist_name;
    QLineEdit *input_scientist_yob;
    QLabel *scientist_yob_label;
    QPushButton *add_newScientist_button;
    QLabel *scientist_name_label;

    void setupUi(QDialog *addScientistDialog)
    {
        if (addScientistDialog->objectName().isEmpty())
            addScientistDialog->setObjectName(QStringLiteral("addScientistDialog"));
        addScientistDialog->resize(400, 300);
        scientist_gender_label = new QLabel(addScientistDialog);
        scientist_gender_label->setObjectName(QStringLiteral("scientist_gender_label"));
        scientist_gender_label->setGeometry(QRect(10, 90, 71, 16));
        scientist_yod_label = new QLabel(addScientistDialog);
        scientist_yod_label->setObjectName(QStringLiteral("scientist_yod_label"));
        scientist_yod_label->setGeometry(QRect(10, 190, 71, 16));
        input_scientist_gender = new QLineEdit(addScientistDialog);
        input_scientist_gender->setObjectName(QStringLiteral("input_scientist_gender"));
        input_scientist_gender->setGeometry(QRect(90, 90, 271, 20));
        label_error_sci_name = new QLabel(addScientistDialog);
        label_error_sci_name->setObjectName(QStringLiteral("label_error_sci_name"));
        label_error_sci_name->setGeometry(QRect(90, 60, 271, 31));
        add_new_scientist_label = new QLabel(addScientistDialog);
        add_new_scientist_label->setObjectName(QStringLiteral("add_new_scientist_label"));
        add_new_scientist_label->setGeometry(QRect(30, 10, 331, 21));
        label_error_sci_gender = new QLabel(addScientistDialog);
        label_error_sci_gender->setObjectName(QStringLiteral("label_error_sci_gender"));
        label_error_sci_gender->setGeometry(QRect(90, 115, 271, 21));
        label_error_sci_yob = new QLabel(addScientistDialog);
        label_error_sci_yob->setObjectName(QStringLiteral("label_error_sci_yob"));
        label_error_sci_yob->setGeometry(QRect(90, 165, 271, 21));
        input_scientist_yod = new QLineEdit(addScientistDialog);
        input_scientist_yod->setObjectName(QStringLiteral("input_scientist_yod"));
        input_scientist_yod->setGeometry(QRect(90, 190, 271, 20));
        cancel_add_newScientist_button = new QPushButton(addScientistDialog);
        cancel_add_newScientist_button->setObjectName(QStringLiteral("cancel_add_newScientist_button"));
        cancel_add_newScientist_button->setGeometry(QRect(290, 240, 75, 23));
        label_error_sci_yod = new QLabel(addScientistDialog);
        label_error_sci_yod->setObjectName(QStringLiteral("label_error_sci_yod"));
        label_error_sci_yod->setGeometry(QRect(90, 210, 271, 21));
        input_scientist_name = new QLineEdit(addScientistDialog);
        input_scientist_name->setObjectName(QStringLiteral("input_scientist_name"));
        input_scientist_name->setGeometry(QRect(90, 40, 271, 20));
        input_scientist_yob = new QLineEdit(addScientistDialog);
        input_scientist_yob->setObjectName(QStringLiteral("input_scientist_yob"));
        input_scientist_yob->setGeometry(QRect(90, 140, 271, 20));
        scientist_yob_label = new QLabel(addScientistDialog);
        scientist_yob_label->setObjectName(QStringLiteral("scientist_yob_label"));
        scientist_yob_label->setGeometry(QRect(10, 140, 71, 16));
        add_newScientist_button = new QPushButton(addScientistDialog);
        add_newScientist_button->setObjectName(QStringLiteral("add_newScientist_button"));
        add_newScientist_button->setGeometry(QRect(200, 240, 75, 23));
        scientist_name_label = new QLabel(addScientistDialog);
        scientist_name_label->setObjectName(QStringLiteral("scientist_name_label"));
        scientist_name_label->setGeometry(QRect(10, 40, 61, 20));

        retranslateUi(addScientistDialog);

        QMetaObject::connectSlotsByName(addScientistDialog);
    } // setupUi

    void retranslateUi(QDialog *addScientistDialog)
    {
        addScientistDialog->setWindowTitle(QApplication::translate("addScientistDialog", "Dialog", 0));
        scientist_gender_label->setText(QApplication::translate("addScientistDialog", "Gender - m/f:", 0));
        scientist_yod_label->setText(QApplication::translate("addScientistDialog", "Year of Death:", 0));
        label_error_sci_name->setText(QString());
        add_new_scientist_label->setText(QApplication::translate("addScientistDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#550000;\">Add a new scientist</span></p><p align=\"center\"><br/></p></body></html>", 0));
        label_error_sci_gender->setText(QString());
        label_error_sci_yob->setText(QString());
        cancel_add_newScientist_button->setText(QApplication::translate("addScientistDialog", "cancel", 0));
        label_error_sci_yod->setText(QString());
        scientist_yob_label->setText(QApplication::translate("addScientistDialog", "Year of Birth:", 0));
        add_newScientist_button->setText(QApplication::translate("addScientistDialog", "Add", 0));
        scientist_name_label->setText(QApplication::translate("addScientistDialog", "Name:", 0));
    } // retranslateUi

};

namespace Ui {
    class addScientistDialog: public Ui_addScientistDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSCIENTISTDIALOG_H
