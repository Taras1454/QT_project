/********************************************************************************
** Form generated from reading UI file 'diagramwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAGRAMWINDOW_H
#define UI_DIAGRAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DiagramWindow
{
public:

    void setupUi(QWidget *DiagramWindow)
    {
        if (DiagramWindow->objectName().isEmpty())
            DiagramWindow->setObjectName(QString::fromUtf8("DiagramWindow"));
        DiagramWindow->resize(569, 384);

        retranslateUi(DiagramWindow);

        QMetaObject::connectSlotsByName(DiagramWindow);
    } // setupUi

    void retranslateUi(QWidget *DiagramWindow)
    {
        DiagramWindow->setWindowTitle(QCoreApplication::translate("DiagramWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiagramWindow: public Ui_DiagramWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAGRAMWINDOW_H
