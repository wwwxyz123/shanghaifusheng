/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_6;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_6;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_13;
    QPushButton *pushButton_11;
    QPushButton *pushButton_16;
    QPushButton *pushButton_15;
    QPushButton *pushButton_14;
    QPushButton *pushButton_12;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(618, 450);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 20, 231, 171));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(360, 20, 231, 171));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(270, 50, 81, 24));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(270, 150, 81, 24));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 380, 601, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout->addWidget(pushButton_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout->addWidget(pushButton_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        horizontalLayout->setStretch(2, 5);
        horizontalLayout->setStretch(4, 5);
        horizontalLayout->setStretch(6, 5);
        horizontalLayout->setStretch(8, 5);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(70, 200, 191, 31));
        lcdNumber_2 = new QLCDNumber(centralwidget);
        lcdNumber_2->setObjectName("lcdNumber_2");
        lcdNumber_2->setGeometry(QRect(70, 240, 191, 31));
        lcdNumber_3 = new QLCDNumber(centralwidget);
        lcdNumber_3->setObjectName("lcdNumber_3");
        lcdNumber_3->setGeometry(QRect(70, 280, 191, 31));
        lcdNumber_4 = new QLCDNumber(centralwidget);
        lcdNumber_4->setObjectName("lcdNumber_4");
        lcdNumber_4->setGeometry(QRect(70, 320, 81, 31));
        lcdNumber_6 = new QLCDNumber(centralwidget);
        lcdNumber_6->setObjectName("lcdNumber_6");
        lcdNumber_6->setGeometry(QRect(180, 320, 81, 31));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(360, 170, 239, 221));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName("pushButton_8");

        gridLayout->addWidget(pushButton_8, 0, 0, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName("pushButton_9");

        gridLayout->addWidget(pushButton_9, 0, 1, 1, 1);

        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName("pushButton_10");

        gridLayout->addWidget(pushButton_10, 0, 2, 1, 1);

        pushButton_13 = new QPushButton(widget);
        pushButton_13->setObjectName("pushButton_13");

        gridLayout->addWidget(pushButton_13, 1, 0, 1, 1);

        pushButton_11 = new QPushButton(widget);
        pushButton_11->setObjectName("pushButton_11");

        gridLayout->addWidget(pushButton_11, 1, 2, 1, 1);

        pushButton_16 = new QPushButton(widget);
        pushButton_16->setObjectName("pushButton_16");

        gridLayout->addWidget(pushButton_16, 2, 0, 1, 1);

        pushButton_15 = new QPushButton(widget);
        pushButton_15->setObjectName("pushButton_15");

        gridLayout->addWidget(pushButton_15, 2, 1, 1, 1);

        pushButton_14 = new QPushButton(widget);
        pushButton_14->setObjectName("pushButton_14");

        gridLayout->addWidget(pushButton_14, 2, 2, 1, 1);

        pushButton_12 = new QPushButton(widget);
        pushButton_12->setObjectName("pushButton_12");

        gridLayout->addWidget(pushButton_12, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 618, 22));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\346\216\222\350\241\214\346\246\234", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\270\202\345\234\272", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\350\203\214\345\214\205", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\344\271\260\345\205\245=>", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "<=\345\215\226\345\207\272", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\351\223\266\350\241\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\214\273\351\231\242", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\351\202\256\345\261\200", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\347\247\237\346\210\277\344\270\255\344\273\213", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\347\275\221\345\220\247", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\345\230\211\345\256\232", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\350\231\271\345\217\243", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\345\256\235\345\261\261", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "\351\235\222\346\265\246", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\346\265\246\344\270\234", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "\346\235\276\346\261\237", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "\351\207\221\345\261\261", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "\344\270\264\346\270\257", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "\351\231\206\345\256\266\345\230\264", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
