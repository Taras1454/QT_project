/********************************************************************************
** Form generated from reading UI file 'products_add.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTS_ADD_H
#define UI_PRODUCTS_ADD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_products_Add
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLineEdit *getName;
    QLineEdit *getDesc;
    QSpinBox *getQuant;
    QComboBox *category_combo;
    QLabel *label;
    QDoubleSpinBox *getPrice;
    QPushButton *pushData;
    QRadioButton *choseC;
    QRadioButton *addC;
    QLineEdit *getCategoryName;
    QLineEdit *getCategoryDesc;
    QPushButton *sendC;
    QLabel *label_price;
    QLabel *label_quant;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *products_Add)
    {
        if (products_Add->objectName().isEmpty())
            products_Add->setObjectName(QString::fromUtf8("products_Add"));
        products_Add->resize(360, 377);
        centralwidget = new QWidget(products_Add);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 336, 302));
        getName = new QLineEdit(scrollAreaWidgetContents);
        getName->setObjectName(QString::fromUtf8("getName"));
        getName->setGeometry(QRect(110, 60, 131, 21));
        getDesc = new QLineEdit(scrollAreaWidgetContents);
        getDesc->setObjectName(QString::fromUtf8("getDesc"));
        getDesc->setGeometry(QRect(110, 90, 131, 31));
        getQuant = new QSpinBox(scrollAreaWidgetContents);
        getQuant->setObjectName(QString::fromUtf8("getQuant"));
        getQuant->setGeometry(QRect(180, 260, 41, 22));
        category_combo = new QComboBox(scrollAreaWidgetContents);
        category_combo->setObjectName(QString::fromUtf8("category_combo"));
        category_combo->setGeometry(QRect(120, 190, 91, 22));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 331, 51));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background:none;"));
        label->setAlignment(Qt::AlignCenter);
        getPrice = new QDoubleSpinBox(scrollAreaWidgetContents);
        getPrice->setObjectName(QString::fromUtf8("getPrice"));
        getPrice->setGeometry(QRect(180, 130, 62, 22));
        pushData = new QPushButton(scrollAreaWidgetContents);
        pushData->setObjectName(QString::fromUtf8("pushData"));
        pushData->setGeometry(QRect(242, 270, 81, 28));
        pushData->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        choseC = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup = new QButtonGroup(products_Add);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(choseC);
        choseC->setObjectName(QString::fromUtf8("choseC"));
        choseC->setGeometry(QRect(40, 160, 141, 20));
        addC = new QRadioButton(scrollAreaWidgetContents);
        buttonGroup->addButton(addC);
        addC->setObjectName(QString::fromUtf8("addC"));
        addC->setGeometry(QRect(190, 160, 101, 20));
        getCategoryName = new QLineEdit(scrollAreaWidgetContents);
        getCategoryName->setObjectName(QString::fromUtf8("getCategoryName"));
        getCategoryName->setGeometry(QRect(40, 190, 131, 21));
        getCategoryDesc = new QLineEdit(scrollAreaWidgetContents);
        getCategoryDesc->setObjectName(QString::fromUtf8("getCategoryDesc"));
        getCategoryDesc->setGeometry(QRect(190, 190, 131, 21));
        sendC = new QPushButton(scrollAreaWidgetContents);
        sendC->setObjectName(QString::fromUtf8("sendC"));
        sendC->setGeometry(QRect(160, 220, 31, 31));
        sendC->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/prefix/img/gal.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendC->setIcon(icon);
        label_price = new QLabel(scrollAreaWidgetContents);
        label_price->setObjectName(QString::fromUtf8("label_price"));
        label_price->setGeometry(QRect(110, 130, 55, 16));
        label_quant = new QLabel(scrollAreaWidgetContents);
        label_quant->setObjectName(QString::fromUtf8("label_quant"));
        label_quant->setGeometry(QRect(110, 260, 61, 20));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        products_Add->setCentralWidget(centralwidget);
        menubar = new QMenuBar(products_Add);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 360, 26));
        products_Add->setMenuBar(menubar);
        statusbar = new QStatusBar(products_Add);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        products_Add->setStatusBar(statusbar);

        retranslateUi(products_Add);

        QMetaObject::connectSlotsByName(products_Add);
    } // setupUi

    void retranslateUi(QMainWindow *products_Add)
    {
        products_Add->setWindowTitle(QCoreApplication::translate("products_Add", "MainWindow", nullptr));
        getName->setText(QString());
        getName->setPlaceholderText(QCoreApplication::translate("products_Add", "\320\235\320\260\320\267\320\262\320\260", nullptr));
        getDesc->setPlaceholderText(QCoreApplication::translate("products_Add", "\320\236\320\277\320\270\321\201", nullptr));
        label->setText(QCoreApplication::translate("products_Add", "\320\222\320\222\320\225\320\224\320\206\320\242\320\254 \320\224\320\220\320\235\320\206 \320\237\320\240\320\236 \320\237\320\240\320\236\320\224\320\243\320\232\320\242", nullptr));
        pushData->setText(QCoreApplication::translate("products_Add", "\320\224\320\236\320\224\320\220\320\242\320\230", nullptr));
        choseC->setText(QCoreApplication::translate("products_Add", "\320\222\320\270\320\261\321\200\320\260\321\202\320\270 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\321\226\321\216", nullptr));
        addC->setText(QCoreApplication::translate("products_Add", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\275\320\276\320\262\321\203", nullptr));
        getCategoryName->setPlaceholderText(QCoreApplication::translate("products_Add", "\320\235\320\260\320\267\320\262\320\260", nullptr));
        getCategoryDesc->setText(QString());
        getCategoryDesc->setPlaceholderText(QCoreApplication::translate("products_Add", "\320\236\320\277\320\270\321\201", nullptr));
#if QT_CONFIG(tooltip)
        sendC->setToolTip(QCoreApplication::translate("products_Add", " \320\224\320\276\320\264\320\260\321\202\320\270 \320\272\320\260\321\202\320\265\320\263\320\276\321\200\321\226\321\216", nullptr));
#endif // QT_CONFIG(tooltip)
        sendC->setText(QString());
        label_price->setText(QCoreApplication::translate("products_Add", "\320\222\320\260\321\200\321\202\321\226\321\201\321\202\321\214", nullptr));
        label_quant->setText(QCoreApplication::translate("products_Add", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class products_Add: public Ui_products_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTS_ADD_H
