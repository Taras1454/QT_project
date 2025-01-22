/********************************************************************************
** Form generated from reading UI file 'autorization.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTORIZATION_H
#define UI_AUTORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Autorization
{
public:
    QWidget *centralwidget;
    QLabel *label_text;
    QPushButton *pushData;
    QLineEdit *getEmail;
    QLineEdit *getPass;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Autorization)
    {
        if (Autorization->objectName().isEmpty())
            Autorization->setObjectName(QString::fromUtf8("Autorization"));
        Autorization->resize(475, 332);
        QFont font;
        font.setPointSize(12);
        Autorization->setFont(font);
        Autorization->setStyleSheet(QString::fromUtf8("background-color:#1DF6A6;"));
        centralwidget = new QWidget(Autorization);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_text = new QLabel(centralwidget);
        label_text->setObjectName(QString::fromUtf8("label_text"));
        label_text->setGeometry(QRect(90, 10, 301, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Trebuchet MS"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_text->setFont(font1);
        label_text->setStyleSheet(QString::fromUtf8("color:#404E51;"));
        label_text->setAlignment(Qt::AlignCenter);
        pushData = new QPushButton(centralwidget);
        pushData->setObjectName(QString::fromUtf8("pushData"));
        pushData->setGeometry(QRect(140, 190, 191, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Mongolian Baiti"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        pushData->setFont(font2);
        pushData->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"       padding: 2px;\n"
"      border-radius: 3px;\n"
"       line-height: 1.25;\n"
"       background-color: #A6A6A6;\n"
"       color: white;\n"
"       text-transform: uppercase;\n"
"		\n"
"    \n"
"		border-radius:6px;\n"
"\n"
"    }\n"
"    QPushButton:hover {\n"
"     background-color: #858786;\n"
"    }"));
        getEmail = new QLineEdit(centralwidget);
        getEmail->setObjectName(QString::fromUtf8("getEmail"));
        getEmail->setGeometry(QRect(140, 100, 191, 31));
        getEmail->setStyleSheet(QString::fromUtf8("background-color:#F5F5F5;"));
        getPass = new QLineEdit(centralwidget);
        getPass->setObjectName(QString::fromUtf8("getPass"));
        getPass->setGeometry(QRect(140, 140, 191, 31));
        getPass->setStyleSheet(QString::fromUtf8("background-color:#F5F5F5;"));
        Autorization->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Autorization);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Autorization->setStatusBar(statusbar);

        retranslateUi(Autorization);

        QMetaObject::connectSlotsByName(Autorization);
    } // setupUi

    void retranslateUi(QMainWindow *Autorization)
    {
        Autorization->setWindowTitle(QCoreApplication::translate("Autorization", "MainWindow", nullptr));
        label_text->setText(QCoreApplication::translate("Autorization", "\320\222\320\222\320\206\320\231\320\224\320\206\320\242\320\254 \320\222 \320\241\320\230\320\241\320\242\320\225\320\234\320\243", nullptr));
        pushData->setText(QCoreApplication::translate("Autorization", "\320\220\320\222\320\242\320\236\320\240\320\230\320\227\320\243\320\222\320\220\320\242\320\230\320\241\320\254", nullptr));
        getEmail->setPlaceholderText(QCoreApplication::translate("Autorization", "Email", nullptr));
        getPass->setPlaceholderText(QCoreApplication::translate("Autorization", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Autorization: public Ui_Autorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTORIZATION_H
