/********************************************************************************
** Form generated from reading UI file 'products.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTS_H
#define UI_PRODUCTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Products
{
public:
    QAction *add;
    QAction *update;
    QAction *back;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Products)
    {
        if (Products->objectName().isEmpty())
            Products->setObjectName(QString::fromUtf8("Products"));
        Products->resize(804, 353);
        Products->setStyleSheet(QString::fromUtf8("background-color: #EBE8E4;"));
        add = new QAction(Products);
        add->setObjectName(QString::fromUtf8("add"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/prefix/img/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        add->setIcon(icon);
        update = new QAction(Products);
        update->setObjectName(QString::fromUtf8("update"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/prefix/img/obnova.png"), QSize(), QIcon::Normal, QIcon::Off);
        update->setIcon(icon1);
        back = new QAction(Products);
        back->setObjectName(QString::fromUtf8("back"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/prefix/img/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon2);
        centralwidget = new QWidget(Products);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Products->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Products);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 804, 26));
        Products->setMenuBar(menubar);
        statusbar = new QStatusBar(Products);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Products->setStatusBar(statusbar);
        toolBar = new QToolBar(Products);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Products->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(back);
        toolBar->addAction(add);
        toolBar->addAction(update);

        retranslateUi(Products);

        QMetaObject::connectSlotsByName(Products);
    } // setupUi

    void retranslateUi(QMainWindow *Products)
    {
        Products->setWindowTitle(QCoreApplication::translate("Products", "MainWindow", nullptr));
        add->setText(QCoreApplication::translate("Products", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\275\320\276\320\262\320\270\320\271 \321\202\320\276\320\262\320\260\321\200", nullptr));
#if QT_CONFIG(tooltip)
        add->setToolTip(QCoreApplication::translate("Products", "\320\224\320\276\320\264\320\260\320\262\320\260\320\275\320\275\321\217 \320\275\320\276\320\262\320\276\320\263\320\276 \321\202\320\276\320\262\320\260\321\200\321\203 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\321\216", nullptr));
#endif // QT_CONFIG(tooltip)
        update->setText(QCoreApplication::translate("Products", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270", nullptr));
#if QT_CONFIG(tooltip)
        update->setToolTip(QCoreApplication::translate("Products", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270 \321\201\321\202\320\276\321\200\321\226\320\275\320\272\321\203", nullptr));
#endif // QT_CONFIG(tooltip)
        back->setText(QCoreApplication::translate("Products", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\320\270\321\201\321\214", nullptr));
#if QT_CONFIG(tooltip)
        back->setToolTip(QCoreApplication::translate("Products", "\320\237\320\276\320\262\321\200\320\275\321\203\321\202\320\270\321\201\321\214 \320\264\320\276 \320\274\320\265\320\275\321\216", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("Products", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Products: public Ui_Products {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTS_H
