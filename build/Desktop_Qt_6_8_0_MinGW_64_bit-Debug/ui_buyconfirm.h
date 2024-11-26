/********************************************************************************
** Form generated from reading UI file 'buyconfirm.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYCONFIRM_H
#define UI_BUYCONFIRM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buyconfirm
{
public:
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *buyconfirm)
    {
        if (buyconfirm->objectName().isEmpty())
            buyconfirm->setObjectName("buyconfirm");
        buyconfirm->resize(357, 269);
        label = new QLabel(buyconfirm);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 40, 211, 31));
        label_2 = new QLabel(buyconfirm);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 110, 51, 21));
        spinBox = new QSpinBox(buyconfirm);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(130, 110, 42, 22));
        label_3 = new QLabel(buyconfirm);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(180, 110, 71, 21));
        pushButton = new QPushButton(buyconfirm);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 200, 56, 18));
        pushButton_2 = new QPushButton(buyconfirm);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(180, 200, 56, 18));

        retranslateUi(buyconfirm);

        QMetaObject::connectSlotsByName(buyconfirm);
    } // setupUi

    void retranslateUi(QWidget *buyconfirm)
    {
        buyconfirm->setWindowTitle(QCoreApplication::translate("buyconfirm", "Form", nullptr));
        label->setText(QCoreApplication::translate("buyconfirm", "\346\202\250\347\232\204\347\216\260\351\207\221\346\230\257___\345\205\203\357\274\214\346\234\200\345\244\232\345\217\257\344\273\245\350\264\255\344\271\260___\344\270\252___", nullptr));
        label_2->setText(QCoreApplication::translate("buyconfirm", "\346\202\250\350\246\201\350\264\255\344\271\260", nullptr));
        label_3->setText(QCoreApplication::translate("buyconfirm", "\344\270\252____", nullptr));
        pushButton->setText(QCoreApplication::translate("buyconfirm", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("buyconfirm", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buyconfirm: public Ui_buyconfirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYCONFIRM_H
