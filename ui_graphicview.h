/********************************************************************************
** Form generated from reading UI file 'graphicview.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICVIEW_H
#define UI_GRAPHICVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_graphicView
{
public:

    void setupUi(QWidget *graphicView)
    {
        if (graphicView->objectName().isEmpty())
            graphicView->setObjectName(QString::fromUtf8("graphicView"));
        graphicView->resize(661, 364);

        retranslateUi(graphicView);

        QMetaObject::connectSlotsByName(graphicView);
    } // setupUi

    void retranslateUi(QWidget *graphicView)
    {
        graphicView->setWindowTitle(QCoreApplication::translate("graphicView", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graphicView: public Ui_graphicView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICVIEW_H
