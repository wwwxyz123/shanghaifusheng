/********************************************************************************
** Form generated from reading UI file 'buylose.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYLOSE_H
#define UI_BUYLOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buylose
{
public:

    void setupUi(QWidget *buylose)
    {
        if (buylose->objectName().isEmpty())
            buylose->setObjectName("buylose");
        buylose->resize(400, 300);

        retranslateUi(buylose);

        QMetaObject::connectSlotsByName(buylose);
    } // setupUi

    void retranslateUi(QWidget *buylose)
    {
        buylose->setWindowTitle(QCoreApplication::translate("buylose", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buylose: public Ui_buylose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYLOSE_H
