/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
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
    QVBoxLayout *main_scientist;
    QHBoxLayout *header_scientist;
    QComboBox *dropdown_scientist_order;
    QComboBox *dropdown_scientist_asc;
    QLineEdit *search_scientist;
    QTableWidget *table_scientist;
    QHBoxLayout *footer_scientist;
    QPushButton *button_add_scientist;
    QPushButton *button_remove_scientist;
    QWidget *tab_computer;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *main_computer;
    QHBoxLayout *header_computer;
    QComboBox *dropdown_computer_order;
    QComboBox *dropdown_computer_asc;
    QLineEdit *search_computer;
    QTableWidget *table_computer;
    QHBoxLayout *footer_computer;
    QPushButton *button_add_computer;
    QPushButton *button_remove_computer;
    QWidget *tab_connection;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *main_connection;
    QHBoxLayout *header_connection;
    QComboBox *dropdown_connection_order;
    QComboBox *dropdown_connection_asc;
    QLineEdit *search_connection;
    QTableWidget *table_connection;
    QHBoxLayout *footer_connection;
    QPushButton *button_add_connection;
    QPushButton *button_remove_connection;
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
        tabWidget_choose_table->setEnabled(true);
        tabWidget_choose_table->setLocale(QLocale(QLocale::Icelandic, QLocale::Iceland));
        tab_scientist = new QWidget();
        tab_scientist->setObjectName(QStringLiteral("tab_scientist"));
        verticalLayout_2 = new QVBoxLayout(tab_scientist);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        main_scientist = new QVBoxLayout();
        main_scientist->setSpacing(6);
        main_scientist->setObjectName(QStringLiteral("main_scientist"));
        header_scientist = new QHBoxLayout();
        header_scientist->setSpacing(6);
        header_scientist->setObjectName(QStringLiteral("header_scientist"));
        dropdown_scientist_order = new QComboBox(tab_scientist);
        dropdown_scientist_order->setObjectName(QStringLiteral("dropdown_scientist_order"));

        header_scientist->addWidget(dropdown_scientist_order);

        dropdown_scientist_asc = new QComboBox(tab_scientist);
        dropdown_scientist_asc->setObjectName(QStringLiteral("dropdown_scientist_asc"));

        header_scientist->addWidget(dropdown_scientist_asc);

        search_scientist = new QLineEdit(tab_scientist);
        search_scientist->setObjectName(QStringLiteral("search_scientist"));
        search_scientist->setLocale(QLocale(QLocale::Icelandic, QLocale::Iceland));

        header_scientist->addWidget(search_scientist);


        main_scientist->addLayout(header_scientist);

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
        table_scientist->setEnabled(true);
        table_scientist->setMouseTracking(false);
        table_scientist->setLocale(QLocale(QLocale::Icelandic, QLocale::Iceland));
        table_scientist->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_scientist->setAlternatingRowColors(false);
        table_scientist->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_scientist->setShowGrid(true);
        table_scientist->setSortingEnabled(false);
        table_scientist->horizontalHeader()->setStretchLastSection(true);
        table_scientist->verticalHeader()->setVisible(false);

        main_scientist->addWidget(table_scientist);

        footer_scientist = new QHBoxLayout();
        footer_scientist->setSpacing(6);
        footer_scientist->setObjectName(QStringLiteral("footer_scientist"));
        button_add_scientist = new QPushButton(tab_scientist);
        button_add_scientist->setObjectName(QStringLiteral("button_add_scientist"));

        footer_scientist->addWidget(button_add_scientist);

        button_remove_scientist = new QPushButton(tab_scientist);
        button_remove_scientist->setObjectName(QStringLiteral("button_remove_scientist"));
        button_remove_scientist->setEnabled(false);

        footer_scientist->addWidget(button_remove_scientist);


        main_scientist->addLayout(footer_scientist);


        verticalLayout_2->addLayout(main_scientist);

        tabWidget_choose_table->addTab(tab_scientist, QString());
        tab_computer = new QWidget();
        tab_computer->setObjectName(QStringLiteral("tab_computer"));
        verticalLayout_3 = new QVBoxLayout(tab_computer);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        main_computer = new QVBoxLayout();
        main_computer->setSpacing(6);
        main_computer->setObjectName(QStringLiteral("main_computer"));
        header_computer = new QHBoxLayout();
        header_computer->setSpacing(6);
        header_computer->setObjectName(QStringLiteral("header_computer"));
        dropdown_computer_order = new QComboBox(tab_computer);
        dropdown_computer_order->setObjectName(QStringLiteral("dropdown_computer_order"));

        header_computer->addWidget(dropdown_computer_order);

        dropdown_computer_asc = new QComboBox(tab_computer);
        dropdown_computer_asc->setObjectName(QStringLiteral("dropdown_computer_asc"));

        header_computer->addWidget(dropdown_computer_asc);

        search_computer = new QLineEdit(tab_computer);
        search_computer->setObjectName(QStringLiteral("search_computer"));
        search_computer->setEchoMode(QLineEdit::Normal);

        header_computer->addWidget(search_computer);


        main_computer->addLayout(header_computer);

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
        table_computer->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_computer->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_computer->setSortingEnabled(false);
        table_computer->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        table_computer->horizontalHeader()->setStretchLastSection(true);

        main_computer->addWidget(table_computer);

        footer_computer = new QHBoxLayout();
        footer_computer->setSpacing(6);
        footer_computer->setObjectName(QStringLiteral("footer_computer"));
        button_add_computer = new QPushButton(tab_computer);
        button_add_computer->setObjectName(QStringLiteral("button_add_computer"));

        footer_computer->addWidget(button_add_computer);

        button_remove_computer = new QPushButton(tab_computer);
        button_remove_computer->setObjectName(QStringLiteral("button_remove_computer"));
        button_remove_computer->setEnabled(false);

        footer_computer->addWidget(button_remove_computer);


        main_computer->addLayout(footer_computer);


        verticalLayout_3->addLayout(main_computer);

        tabWidget_choose_table->addTab(tab_computer, QString());
        tab_connection = new QWidget();
        tab_connection->setObjectName(QStringLiteral("tab_connection"));
        verticalLayout_5 = new QVBoxLayout(tab_connection);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        main_connection = new QVBoxLayout();
        main_connection->setSpacing(6);
        main_connection->setObjectName(QStringLiteral("main_connection"));
        header_connection = new QHBoxLayout();
        header_connection->setSpacing(6);
        header_connection->setObjectName(QStringLiteral("header_connection"));
        dropdown_connection_order = new QComboBox(tab_connection);
        dropdown_connection_order->setObjectName(QStringLiteral("dropdown_connection_order"));

        header_connection->addWidget(dropdown_connection_order);

        dropdown_connection_asc = new QComboBox(tab_connection);
        dropdown_connection_asc->setObjectName(QStringLiteral("dropdown_connection_asc"));

        header_connection->addWidget(dropdown_connection_asc);

        search_connection = new QLineEdit(tab_connection);
        search_connection->setObjectName(QStringLiteral("search_connection"));

        header_connection->addWidget(search_connection);


        main_connection->addLayout(header_connection);

        table_connection = new QTableWidget(tab_connection);
        if (table_connection->columnCount() < 2)
            table_connection->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table_connection->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table_connection->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        table_connection->setObjectName(QStringLiteral("table_connection"));
        table_connection->setAutoFillBackground(false);
        table_connection->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_connection->setSelectionBehavior(QAbstractItemView::SelectRows);
        table_connection->setSortingEnabled(true);
        table_connection->horizontalHeader()->setStretchLastSection(true);

        main_connection->addWidget(table_connection);

        footer_connection = new QHBoxLayout();
        footer_connection->setSpacing(6);
        footer_connection->setObjectName(QStringLiteral("footer_connection"));
        button_add_connection = new QPushButton(tab_connection);
        button_add_connection->setObjectName(QStringLiteral("button_add_connection"));
        button_add_connection->setEnabled(false);

        footer_connection->addWidget(button_add_connection);

        button_remove_connection = new QPushButton(tab_connection);
        button_remove_connection->setObjectName(QStringLiteral("button_remove_connection"));
        button_remove_connection->setEnabled(false);

        footer_connection->addWidget(button_remove_connection);


        main_connection->addLayout(footer_connection);


        verticalLayout_5->addLayout(main_connection);

        tabWidget_choose_table->addTab(tab_connection, QString());

        verticalLayout->addWidget(tabWidget_choose_table);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 556, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(tabWidget_choose_table, dropdown_scientist_order);
        QWidget::setTabOrder(dropdown_scientist_order, dropdown_scientist_asc);
        QWidget::setTabOrder(dropdown_scientist_asc, search_scientist);
        QWidget::setTabOrder(search_scientist, table_scientist);
        QWidget::setTabOrder(table_scientist, button_add_scientist);
        QWidget::setTabOrder(button_add_scientist, button_remove_scientist);
        QWidget::setTabOrder(button_remove_scientist, dropdown_computer_order);
        QWidget::setTabOrder(dropdown_computer_order, dropdown_computer_asc);
        QWidget::setTabOrder(dropdown_computer_asc, search_computer);
        QWidget::setTabOrder(search_computer, table_computer);
        QWidget::setTabOrder(table_computer, button_add_computer);
        QWidget::setTabOrder(button_add_computer, button_remove_computer);
        QWidget::setTabOrder(button_remove_computer, dropdown_connection_order);
        QWidget::setTabOrder(dropdown_connection_order, dropdown_connection_asc);
        QWidget::setTabOrder(dropdown_connection_asc, search_connection);
        QWidget::setTabOrder(search_connection, table_connection);
        QWidget::setTabOrder(table_connection, button_add_connection);
        QWidget::setTabOrder(button_add_connection, button_remove_connection);

        retranslateUi(MainWindow);

        tabWidget_choose_table->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Scientists and Computers", 0));
        search_scientist->setText(QString());
        search_scientist->setPlaceholderText(QApplication::translate("MainWindow", "Search name...", 0));
        QTableWidgetItem *___qtablewidgetitem = table_scientist->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = table_scientist->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Sex", 0));
        QTableWidgetItem *___qtablewidgetitem2 = table_scientist->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Year of Birth", 0));
        QTableWidgetItem *___qtablewidgetitem3 = table_scientist->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Year of Death", 0));
        button_add_scientist->setText(QApplication::translate("MainWindow", "Add", 0));
        button_remove_scientist->setText(QApplication::translate("MainWindow", "Remove", 0));
        tabWidget_choose_table->setTabText(tabWidget_choose_table->indexOf(tab_scientist), QApplication::translate("MainWindow", "Scientists", 0));
        search_computer->setText(QString());
        search_computer->setPlaceholderText(QApplication::translate("MainWindow", "Search name...", 0));
        QTableWidgetItem *___qtablewidgetitem4 = table_computer->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem5 = table_computer->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Type", 0));
        QTableWidgetItem *___qtablewidgetitem6 = table_computer->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Year built", 0));
        QTableWidgetItem *___qtablewidgetitem7 = table_computer->horizontalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Was built", 0));
        button_add_computer->setText(QApplication::translate("MainWindow", "Add", 0));
        button_remove_computer->setText(QApplication::translate("MainWindow", "Remove", 0));
        tabWidget_choose_table->setTabText(tabWidget_choose_table->indexOf(tab_computer), QApplication::translate("MainWindow", "Computers", 0));
        search_connection->setPlaceholderText(QApplication::translate("MainWindow", "Search name...", 0));
        QTableWidgetItem *___qtablewidgetitem8 = table_connection->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Scientist", 0));
        QTableWidgetItem *___qtablewidgetitem9 = table_connection->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Computer", 0));
        button_add_connection->setText(QApplication::translate("MainWindow", "Add", 0));
        button_remove_connection->setText(QApplication::translate("MainWindow", "Remove", 0));
        tabWidget_choose_table->setTabText(tabWidget_choose_table->indexOf(tab_connection), QApplication::translate("MainWindow", "Connections", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
