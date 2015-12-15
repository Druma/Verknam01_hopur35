/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget_choose_table;
    QWidget *tab_scientist;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *dropbox_output_scientist_column;
    QLineEdit *search_scientist;
    QTableWidget *table_scientist;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_add_scientist;
    QPushButton *button_edit_scientist;
    QPushButton *button_remove_scientist;
    QWidget *tab_computer;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *dropbox_output_computer_column;
    QLineEdit *search_computer;
    QTableWidget *table_computer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button_add_computer;
    QPushButton *button_edit_computer;
    QPushButton *button_remove_computer;
    QWidget *tab_connection;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *dropbox_output_computer_column_2;
    QLineEdit *search_computer_2;
    QTableWidget *table_connection;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *button_add_computer_2;
    QPushButton *button_edit_computer_2;
    QPushButton *button_remove_computer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(556, 371);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget_choose_table = new QTabWidget(centralWidget);
        tabWidget_choose_table->setObjectName(QStringLiteral("tabWidget_choose_table"));
        tab_scientist = new QWidget();
        tab_scientist->setObjectName(QStringLiteral("tab_scientist"));
        verticalLayout_2 = new QVBoxLayout(tab_scientist);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        dropbox_output_scientist_column = new QComboBox(tab_scientist);
        dropbox_output_scientist_column->setObjectName(QStringLiteral("dropbox_output_scientist_column"));

        horizontalLayout_3->addWidget(dropbox_output_scientist_column);

        search_scientist = new QLineEdit(tab_scientist);
        search_scientist->setObjectName(QStringLiteral("search_scientist"));

        horizontalLayout_3->addWidget(search_scientist);


        verticalLayout_7->addLayout(horizontalLayout_3);

        table_scientist = new QTableWidget(tab_scientist);
        if (table_scientist->columnCount() < 4)
            table_scientist->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_scientist->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_scientist->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_scientist->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_scientist->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table_scientist->setObjectName(QStringLiteral("table_scientist"));
        table_scientist->setSortingEnabled(true);
        table_scientist->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_7->addWidget(table_scientist);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        button_add_scientist = new QPushButton(tab_scientist);
        button_add_scientist->setObjectName(QStringLiteral("button_add_scientist"));

        horizontalLayout->addWidget(button_add_scientist);

        button_edit_scientist = new QPushButton(tab_scientist);
        button_edit_scientist->setObjectName(QStringLiteral("button_edit_scientist"));

        horizontalLayout->addWidget(button_edit_scientist);

        button_remove_scientist = new QPushButton(tab_scientist);
        button_remove_scientist->setObjectName(QStringLiteral("button_remove_scientist"));

        horizontalLayout->addWidget(button_remove_scientist);


        verticalLayout_7->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout_7);

        tabWidget_choose_table->addTab(tab_scientist, QString());
        tab_computer = new QWidget();
        tab_computer->setObjectName(QStringLiteral("tab_computer"));
        verticalLayout_3 = new QVBoxLayout(tab_computer);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        dropbox_output_computer_column = new QComboBox(tab_computer);
        dropbox_output_computer_column->setObjectName(QStringLiteral("dropbox_output_computer_column"));

        horizontalLayout_4->addWidget(dropbox_output_computer_column);

        search_computer = new QLineEdit(tab_computer);
        search_computer->setObjectName(QStringLiteral("search_computer"));

        horizontalLayout_4->addWidget(search_computer);


        verticalLayout_6->addLayout(horizontalLayout_4);

        table_computer = new QTableWidget(tab_computer);
        if (table_computer->columnCount() < 4)
            table_computer->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_computer->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_computer->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_computer->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_computer->setHorizontalHeaderItem(3, __qtablewidgetitem7);
        table_computer->setObjectName(QStringLiteral("table_computer"));
        table_computer->setSortingEnabled(true);
        table_computer->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_computer->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_6->addWidget(table_computer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        button_add_computer = new QPushButton(tab_computer);
        button_add_computer->setObjectName(QStringLiteral("button_add_computer"));

        horizontalLayout_2->addWidget(button_add_computer);

        button_edit_computer = new QPushButton(tab_computer);
        button_edit_computer->setObjectName(QStringLiteral("button_edit_computer"));

        horizontalLayout_2->addWidget(button_edit_computer);

        button_remove_computer = new QPushButton(tab_computer);
        button_remove_computer->setObjectName(QStringLiteral("button_remove_computer"));

        horizontalLayout_2->addWidget(button_remove_computer);


        verticalLayout_6->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_6);

        tabWidget_choose_table->addTab(tab_computer, QString());
        tab_connection = new QWidget();
        tab_connection->setObjectName(QStringLiteral("tab_connection"));
        verticalLayout_5 = new QVBoxLayout(tab_connection);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        dropbox_output_computer_column_2 = new QComboBox(tab_connection);
        dropbox_output_computer_column_2->setObjectName(QStringLiteral("dropbox_output_computer_column_2"));

        horizontalLayout_5->addWidget(dropbox_output_computer_column_2);

        search_computer_2 = new QLineEdit(tab_connection);
        search_computer_2->setObjectName(QStringLiteral("search_computer_2"));

        horizontalLayout_5->addWidget(search_computer_2);


        verticalLayout_4->addLayout(horizontalLayout_5);

        table_connection = new QTableWidget(tab_connection);
        if (table_connection->columnCount() < 3)
            table_connection->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_connection->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table_connection->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table_connection->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        table_connection->setObjectName(QStringLiteral("table_connection"));
        table_connection->setAutoFillBackground(false);
        table_connection->setSortingEnabled(true);
        table_connection->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_4->addWidget(table_connection);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        button_add_computer_2 = new QPushButton(tab_connection);
        button_add_computer_2->setObjectName(QStringLiteral("button_add_computer_2"));

        horizontalLayout_6->addWidget(button_add_computer_2);

        button_edit_computer_2 = new QPushButton(tab_connection);
        button_edit_computer_2->setObjectName(QStringLiteral("button_edit_computer_2"));

        horizontalLayout_6->addWidget(button_edit_computer_2);

        button_remove_computer_2 = new QPushButton(tab_connection);
        button_remove_computer_2->setObjectName(QStringLiteral("button_remove_computer_2"));

        horizontalLayout_6->addWidget(button_remove_computer_2);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_5->addLayout(verticalLayout_4);

        tabWidget_choose_table->addTab(tab_connection, QString());

        verticalLayout->addWidget(tabWidget_choose_table);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 556, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        MainWindow->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget_choose_table->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Scientists and Computers", 0));
        dropbox_output_scientist_column->clear();
        dropbox_output_scientist_column->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Name", 0)
         << QApplication::translate("MainWindow", "Sex", 0)
         << QApplication::translate("MainWindow", "Year of Birth", 0)
         << QApplication::translate("MainWindow", "Year of Death", 0)
        );
        search_scientist->setPlaceholderText(QApplication::translate("MainWindow", "Search...", 0));
        QTableWidgetItem *___qtablewidgetitem = table_scientist->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_scientist->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Sex", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_scientist->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Year of Birth", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_scientist->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Year of Death", 0));
        button_add_scientist->setText(QApplication::translate("MainWindow", "Add", 0));
        button_edit_scientist->setText(QApplication::translate("MainWindow", "Edit", 0));
        button_remove_scientist->setText(QApplication::translate("MainWindow", "Remove", 0));
        tabWidget_choose_table->setTabText(tabWidget_choose_table->indexOf(tab_scientist), QApplication::translate("MainWindow", "Scientists", 0));
        dropbox_output_computer_column->clear();
        dropbox_output_computer_column->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Name", 0)
         << QApplication::translate("MainWindow", "Type", 0)
         << QApplication::translate("MainWindow", "Year built", 0)
         << QApplication::translate("MainWindow", "Was built", 0)
        );
        search_computer->setPlaceholderText(QApplication::translate("MainWindow", "Search...", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table_computer->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem5 = table_computer->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem6 = table_computer->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Year built", 0));
        QTableWidgetItem *___qtablewidgetitem7 = table_computer->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Was built", 0));
        button_add_computer->setText(QApplication::translate("MainWindow", "Add", 0));
        button_edit_computer->setText(QApplication::translate("MainWindow", "Edit", 0));
        button_remove_computer->setText(QApplication::translate("MainWindow", "Remove", 0));
        tabWidget_choose_table->setTabText(tabWidget_choose_table->indexOf(tab_computer), QApplication::translate("MainWindow", "Computers", 0));
        dropbox_output_computer_column_2->clear();
        dropbox_output_computer_column_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Scientist", 0)
         << QApplication::translate("MainWindow", "Computer", 0)
         << QApplication::translate("MainWindow", "Year built", 0)
        );
        search_computer_2->setPlaceholderText(QApplication::translate("MainWindow", "Search...", 0));
        QTableWidgetItem *___qtablewidgetitem8 = table_connection->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Scientist", 0));
        QTableWidgetItem *___qtablewidgetitem9 = table_connection->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Computer", 0));
        QTableWidgetItem *___qtablewidgetitem10 = table_connection->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Year Built", 0));
        button_add_computer_2->setText(QApplication::translate("MainWindow", "Add", 0));
        button_edit_computer_2->setText(QApplication::translate("MainWindow", "Edit", 0));
        button_remove_computer_2->setText(QApplication::translate("MainWindow", "Remove", 0));
        tabWidget_choose_table->setTabText(tabWidget_choose_table->indexOf(tab_connection), QApplication::translate("MainWindow", "Connections", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
