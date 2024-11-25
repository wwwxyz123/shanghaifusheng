/********************************************************************************
** Form generated from reading UI file 'loading.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADING_H
#define UI_LOADING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loading
{
public:
    QLabel *label;
    QPushButton *begin;

    void setupUi(QWidget *loading)
    {
        if (loading->objectName().isEmpty())
            loading->setObjectName("loading");
        loading->resize(289, 402);
        label = new QLabel(loading);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 90, 271, 121));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        begin = new QPushButton(loading);
        begin->setObjectName("begin");
        begin->setGeometry(QRect(100, 310, 75, 24));

        retranslateUi(loading);

        QMetaObject::connectSlotsByName(loading);
    } // setupUi

    void retranslateUi(QWidget *loading)
    {
        loading->setWindowTitle(QCoreApplication::translate("loading", "Form", nullptr));
        label->setText(QCoreApplication::translate("loading", "\346\225\205\344\272\213\350\203\214\346\231\257\344\273\213\347\273\215\357\274\214\345\276\205\345\241\253\345\205\205", nullptr));
        begin->setText(QCoreApplication::translate("loading", "\345\207\272\345\217\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loading: public Ui_loading {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADING_H
