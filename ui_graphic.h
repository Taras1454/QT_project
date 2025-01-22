/********************************************************************************
** Form generated from reading UI file 'graphic.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHIC_H
#define UI_GRAPHIC_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_graphic
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *getDate;
    QPushButton *sendDate;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *graphic)
    {
        if (graphic->objectName().isEmpty())
            graphic->setObjectName(QString::fromUtf8("graphic"));
        graphic->resize(313, 267);
        graphic->setStyleSheet(QString::fromUtf8("background-color: #EBE8E4;"));
        centralwidget = new QWidget(graphic);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 50, 191, 41));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("text-transform:uppercase;\n"
"text-align:center;"));
        getDate = new QLineEdit(centralwidget);
        getDate->setObjectName(QString::fromUtf8("getDate"));
        getDate->setGeometry(QRect(70, 90, 171, 31));
        sendDate = new QPushButton(centralwidget);
        sendDate->setObjectName(QString::fromUtf8("sendDate"));
        sendDate->setGeometry(QRect(70, 140, 171, 31));
        sendDate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"       padding: 2px;\n"
"      border-radius: 3px;\n"
"       line-height: 1.25;\n"
"       background-color: #FC6E51;\n"
"       color: white;\n"
"       font-size: 12px;\n"
"       text-transform: uppercase;\n"
"		\n"
"    }\n"
"    QPushButton:hover {\n"
"     background-color: #FF5A36;\n"
"    }"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background: transparent;\n"
"border: none;}\n"
"QPushButton:hover{\n"
"background-color:gray;\n"
"}\n"
"\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/prefix/img/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(30, 30));
        graphic->setCentralWidget(centralwidget);
        menubar = new QMenuBar(graphic);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 313, 26));
        graphic->setMenuBar(menubar);
        statusbar = new QStatusBar(graphic);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        graphic->setStatusBar(statusbar);

        retranslateUi(graphic);

        QMetaObject::connectSlotsByName(graphic);
    } // setupUi

    void retranslateUi(QMainWindow *graphic)
    {
        graphic->setWindowTitle(QCoreApplication::translate("graphic", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("graphic", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\272-\321\226\321\201\321\202\321\214 \320\263\320\276\320\264\321\203\320\262\320\260\320\275\321\214", nullptr));
        sendDate->setText(QCoreApplication::translate("graphic", "\320\222\320\206\320\224\320\237\320\240\320\220\320\222\320\230\320\242\320\230", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class graphic: public Ui_graphic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHIC_H
