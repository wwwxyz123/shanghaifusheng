/********************************************************************************
** Form generated from reading UI file 'start.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_H
#define UI_START_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_start
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *start)
    {
        if (start->objectName().isEmpty())
            start->setObjectName("start");
        start->resize(279, 439);
        label = new QLabel(start);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 171, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(24);
        label->setFont(font);
        pushButton = new QPushButton(start);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 210, 91, 31));
        pushButton_2 = new QPushButton(start);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(90, 270, 91, 31));
        pushButton_3 = new QPushButton(start);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(90, 330, 91, 31));

        retranslateUi(start);

        QMetaObject::connectSlotsByName(start);
    } // setupUi

    void retranslateUi(QWidget *start)
    {
        start->setWindowTitle(QCoreApplication::translate("start", "Form", nullptr));
        label->setText(QCoreApplication::translate("start", "\344\270\212\346\265\267\346\265\256\347\224\237\350\256\260", nullptr));
        pushButton->setText(QCoreApplication::translate("start", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("start", "\346\216\222\350\241\214\346\246\234", nullptr));
        pushButton_3->setText(QCoreApplication::translate("start", "\350\201\224\347\263\273\346\210\221\344\273\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class start: public Ui_start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_H
