/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *getDate;
    QPushButton *sendDate;
    QPushButton *pushButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(233, 349);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #EBE8E4;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(34, 60, 171, 28));
        QFont font;
        font.setPointSize(7);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("text-transform:uppercase;\n"
"text-align:center;"));
        getDate = new QLineEdit(centralWidget);
        getDate->setObjectName(QString::fromUtf8("getDate"));
        getDate->setGeometry(QRect(40, 110, 151, 41));
        getDate->setStyleSheet(QString::fromUtf8(""));
        sendDate = new QPushButton(centralWidget);
        sendDate->setObjectName(QString::fromUtf8("sendDate"));
        sendDate->setGeometry(QRect(40, 170, 151, 41));
        QFont font1;
        sendDate->setFont(font1);
        sendDate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"       padding: 2px;\n"
"      border-radius: 3px;\n"
"       line-height: 1.25;\n"
"       background-color: #FC6E51;\n"
"       color: white;\n"
"       font-size: 12px;\n"
"       text-transform: uppercase;\n"
"\n"
"    }\n"
"    QPushButton:hover {\n"
"     background-color: #FF5A36;\n"
"    }"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 31, 31));
        pushButton->setCursor(QCursor(Qt::ArrowCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background: transparent;\n"
"border: none;}\n"
"QPushButton:hover{\n"
"background-color:gray;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/prefix/img/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(30, 30));
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \321\200\321\226\320\262\320\265\320\275\321\214 PH \320\262\320\276\320\264\320\270", nullptr));
        sendDate->setText(QCoreApplication::translate("MainWindow", "\320\222\321\226\320\264\320\277\321\200\320\260\320\262\320\270\321\202\320\270", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
