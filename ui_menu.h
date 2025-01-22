/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QAction *diagram;
    QAction *graph;
    QAction *exit;
    QAction *table;
    QAction *back;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *icon;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(377, 287);
        Menu->setStyleSheet(QString::fromUtf8("background-color:#FFCCCC;"));
        diagram = new QAction(Menu);
        diagram->setObjectName(QString::fromUtf8("diagram"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/prefix/img/diag.png"), QSize(), QIcon::Normal, QIcon::Off);
        diagram->setIcon(icon1);
        graph = new QAction(Menu);
        graph->setObjectName(QString::fromUtf8("graph"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/prefix/img/graph.png"), QSize(), QIcon::Normal, QIcon::Off);
        graph->setIcon(icon2);
        exit = new QAction(Menu);
        exit->setObjectName(QString::fromUtf8("exit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/prefix/img/log_out.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon3);
        table = new QAction(Menu);
        table->setObjectName(QString::fromUtf8("table"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/prefix/img/table_products.png"), QSize(), QIcon::Normal, QIcon::Off);
        table->setIcon(icon4);
        back = new QAction(Menu);
        back->setObjectName(QString::fromUtf8("back"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/prefix/img/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon5);
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 50, 211, 91));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);
        icon = new QLabel(centralwidget);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setGeometry(QRect(-10, 20, 111, 141));
        icon->setPixmap(QPixmap(QString::fromUtf8(":/prefix/img/hello.png")));
        Menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 377, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        Menu->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Menu->setStatusBar(statusbar);
        toolBar = new QToolBar(Menu);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Menu->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menu->addAction(diagram);
        menu->addAction(table);
        menu->addAction(graph);
        menu->addAction(exit);
        menu->addAction(back);
        toolBar->addAction(back);
        toolBar->addAction(diagram);
        toolBar->addAction(table);
        toolBar->addAction(graph);
        toolBar->addAction(exit);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "MainWindow", nullptr));
        diagram->setText(QCoreApplication::translate("Menu", "\320\224\321\226\320\260\320\263\321\200\320\260\320\274\320\260", nullptr));
#if QT_CONFIG(tooltip)
        diagram->setToolTip(QCoreApplication::translate("Menu", "\320\223\320\265\320\275\320\265\321\200\320\260\321\206\321\226\321\217 \320\264\321\226\320\260\320\263\321\200\320\260\320\274\320\270 \320\277\320\276\320\272\320\260\320\267\320\275\320\270\320\272\321\226\320\262", nullptr));
#endif // QT_CONFIG(tooltip)
        graph->setText(QCoreApplication::translate("Menu", "\320\223\321\200\320\260\321\204\321\226\320\272", nullptr));
#if QT_CONFIG(tooltip)
        graph->setToolTip(QCoreApplication::translate("Menu", "\320\223\320\265\320\275\320\265\321\200\320\260\321\206\321\226\321\217 \320\263\321\200\320\260\321\204\321\226\320\272\321\203 \320\263\320\276\320\264\321\203\320\262\320\260\320\275\320\275\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        exit->setText(QCoreApplication::translate("Menu", "\320\222\320\270\321\205\321\226\320\264", nullptr));
#if QT_CONFIG(tooltip)
        exit->setToolTip(QCoreApplication::translate("Menu", "\320\222\320\270\320\271\321\202\320\270 \320\267 \320\277\321\200\320\276\320\265\320\272\321\202\321\203", nullptr));
#endif // QT_CONFIG(tooltip)
        table->setText(QCoreApplication::translate("Menu", "\320\242\320\260\320\261\320\273\320\270\321\206\321\217 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\321\226\320\262", nullptr));
#if QT_CONFIG(tooltip)
        table->setToolTip(QCoreApplication::translate("Menu", "\320\237\320\265\321\200\320\265\320\263\320\273\321\217\320\275\321\203\321\202\320\270 \321\202\320\260\320\261\320\273\320\270\321\206\321\216 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\321\226\320\262", nullptr));
#endif // QT_CONFIG(tooltip)
        back->setText(QCoreApplication::translate("Menu", "\320\235\320\260\320\267\320\260\320\264 \320\264\320\276 \320\262\321\205\320\276\320\264\321\203", nullptr));
#if QT_CONFIG(tooltip)
        back->setToolTip(QCoreApplication::translate("Menu", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\320\270\321\201\321\217 \320\264\320\276 \320\262\321\205\320\276\320\264\321\203", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("Menu", "TextLabel", nullptr));
        icon->setText(QString());
        menu->setTitle(QCoreApplication::translate("Menu", "\320\232\320\265\321\200\321\203\320\262\320\260\320\275\320\275\321\217", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Menu", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
