/********************************************************************************
** Form generated from reading UI file 'uitest.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UITEST_H
#define UI_UITEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uitest
{
public:
    QTreeWidget *testitemWidget;
    QTreeWidget *bagWidget;
    QLCDNumber *playerfame;
    QLabel *label_5;
    QLabel *label;
    QLCDNumber *playerhealth;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *lujiazuiplace;
    QPushButton *pushButton_14;
    QPushButton *pushButton_11;
    QPushButton *pushButton_9;
    QPushButton *pushButton_13;
    QPushButton *pushButton_15;
    QPushButton *pushButton_10;
    QPushButton *pushButton_8;
    QPushButton *pushButton_16;
    QLabel *label_4;
    QPushButton *buy;
    QLCDNumber *playergiveupmoney;
    QTreeWidget *bagWidget_2;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox;
    QTreeWidget *itemWidget;
    QPushButton *sell;
    QLabel *daylabel;
    QLabel *label_3;
    QLabel *label_2;
    QLCDNumber *playermoney;
    QLCDNumber *playerbankmoney;
    QPushButton *moneyaddplus;

    void setupUi(QWidget *uitest)
    {
        if (uitest->objectName().isEmpty())
            uitest->setObjectName("uitest");
        uitest->resize(689, 652);
        testitemWidget = new QTreeWidget(uitest);
        testitemWidget->setObjectName("testitemWidget");
        testitemWidget->setGeometry(QRect(75, 35, 226, 192));
        testitemWidget->setRootIsDecorated(false);
        testitemWidget->header()->setDefaultSectionSize(100);
        testitemWidget->header()->setProperty("showSortIndicator", QVariant(false));
        testitemWidget->header()->setStretchLastSection(true);
        bagWidget = new QTreeWidget(uitest);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("\345\225\206\345\223\201"));
        bagWidget->setHeaderItem(__qtreewidgetitem);
        bagWidget->setObjectName("bagWidget");
        bagWidget->setGeometry(QRect(415, 45, 241, 161));
        bagWidget->setRootIsDecorated(false);
        bagWidget->header()->setMinimumSectionSize(18);
        bagWidget->header()->setDefaultSectionSize(71);
        bagWidget->header()->setStretchLastSection(false);
        playerfame = new QLCDNumber(uitest);
        playerfame->setObjectName("playerfame");
        playerfame->setGeometry(QRect(235, 555, 71, 31));
        playerfame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 255, 0);"));
        label_5 = new QLabel(uitest);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(205, 560, 31, 21));
        label = new QLabel(uitest);
        label->setObjectName("label");
        label->setGeometry(QRect(85, 440, 31, 21));
        playerhealth = new QLCDNumber(uitest);
        playerhealth->setObjectName("playerhealth");
        playerhealth->setGeometry(QRect(115, 555, 71, 31));
        playerhealth->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 255, 0);"));
        layoutWidget = new QWidget(uitest);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(405, 405, 241, 211));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lujiazuiplace = new QPushButton(layoutWidget);
        lujiazuiplace->setObjectName("lujiazuiplace");

        gridLayout->addWidget(lujiazuiplace, 1, 1, 1, 1);

        pushButton_14 = new QPushButton(layoutWidget);
        pushButton_14->setObjectName("pushButton_14");

        gridLayout->addWidget(pushButton_14, 2, 2, 1, 1);

        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName("pushButton_11");

        gridLayout->addWidget(pushButton_11, 1, 2, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName("pushButton_9");

        gridLayout->addWidget(pushButton_9, 0, 1, 1, 1);

        pushButton_13 = new QPushButton(layoutWidget);
        pushButton_13->setObjectName("pushButton_13");

        gridLayout->addWidget(pushButton_13, 1, 0, 1, 1);

        pushButton_15 = new QPushButton(layoutWidget);
        pushButton_15->setObjectName("pushButton_15");

        gridLayout->addWidget(pushButton_15, 2, 1, 1, 1);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName("pushButton_10");

        gridLayout->addWidget(pushButton_10, 0, 2, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName("pushButton_8");

        gridLayout->addWidget(pushButton_8, 0, 0, 1, 1);

        pushButton_16 = new QPushButton(layoutWidget);
        pushButton_16->setObjectName("pushButton_16");

        gridLayout->addWidget(pushButton_16, 2, 0, 1, 1);

        label_4 = new QLabel(uitest);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(85, 560, 31, 21));
        buy = new QPushButton(uitest);
        buy->setObjectName("buy");
        buy->setGeometry(QRect(315, 290, 81, 24));
        playergiveupmoney = new QLCDNumber(uitest);
        playergiveupmoney->setObjectName("playergiveupmoney");
        playergiveupmoney->setGeometry(QRect(115, 515, 191, 31));
        playergiveupmoney->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 0, 0);"));
        bagWidget_2 = new QTreeWidget(uitest);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QString::fromUtf8("\345\225\206\345\223\201"));
        bagWidget_2->setHeaderItem(__qtreewidgetitem1);
        new QTreeWidgetItem(bagWidget_2);
        new QTreeWidgetItem(bagWidget_2);
        new QTreeWidgetItem(bagWidget_2);
        new QTreeWidgetItem(bagWidget_2);
        bagWidget_2->setObjectName("bagWidget_2");
        bagWidget_2->setGeometry(QRect(405, 250, 241, 161));
        bagWidget_2->setRootIsDecorated(false);
        bagWidget_2->header()->setMinimumSectionSize(18);
        bagWidget_2->header()->setDefaultSectionSize(71);
        bagWidget_2->header()->setStretchLastSection(false);
        groupBox_2 = new QGroupBox(uitest);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(395, 415, 261, 176));
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        groupBox = new QGroupBox(uitest);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 415, 246, 176));
        itemWidget = new QTreeWidget(uitest);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem();
        __qtreewidgetitem2->setTextAlignment(0, Qt::AlignLeading|Qt::AlignVCenter);
        itemWidget->setHeaderItem(__qtreewidgetitem2);
        new QTreeWidgetItem(itemWidget);
        new QTreeWidgetItem(itemWidget);
        new QTreeWidgetItem(itemWidget);
        new QTreeWidgetItem(itemWidget);
        itemWidget->setObjectName("itemWidget");
        itemWidget->setGeometry(QRect(75, 250, 231, 161));
        itemWidget->setRootIsDecorated(false);
        itemWidget->header()->setDefaultSectionSize(115);
        sell = new QPushButton(uitest);
        sell->setObjectName("sell");
        sell->setGeometry(QRect(315, 340, 81, 24));
        daylabel = new QLabel(uitest);
        daylabel->setObjectName("daylabel");
        daylabel->setGeometry(QRect(325, 225, 71, 31));
        label_3 = new QLabel(uitest);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(85, 520, 31, 21));
        label_2 = new QLabel(uitest);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(85, 480, 31, 21));
        playermoney = new QLCDNumber(uitest);
        playermoney->setObjectName("playermoney");
        playermoney->setGeometry(QRect(115, 435, 191, 31));
        playermoney->setAutoFillBackground(false);
        playermoney->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 255, 0);"));
        playerbankmoney = new QLCDNumber(uitest);
        playerbankmoney->setObjectName("playerbankmoney");
        playerbankmoney->setGeometry(QRect(115, 475, 191, 31));
        playerbankmoney->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 255, 0);"));
        moneyaddplus = new QPushButton(uitest);
        moneyaddplus->setObjectName("moneyaddplus");
        moneyaddplus->setGeometry(QRect(325, 180, 75, 24));
        groupBox_2->raise();
        testitemWidget->raise();
        bagWidget->raise();
        playerfame->raise();
        label_5->raise();
        label->raise();
        playerhealth->raise();
        layoutWidget->raise();
        label_4->raise();
        buy->raise();
        playergiveupmoney->raise();
        bagWidget_2->raise();
        groupBox->raise();
        itemWidget->raise();
        sell->raise();
        daylabel->raise();
        label_3->raise();
        label_2->raise();
        playermoney->raise();
        playerbankmoney->raise();
        moneyaddplus->raise();

        retranslateUi(uitest);

        QMetaObject::connectSlotsByName(uitest);
    } // setupUi

    void retranslateUi(QWidget *uitest)
    {
        uitest->setWindowTitle(QCoreApplication::translate("uitest", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = testitemWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("uitest", "\344\273\267\346\240\274", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("uitest", "\345\225\206\345\223\201", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = bagWidget->headerItem();
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("uitest", "\346\225\260\351\207\217", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("uitest", "\344\271\260\350\277\233\344\273\267\346\240\274", nullptr));
        label_5->setText(QCoreApplication::translate("uitest", "\345\220\215\345\243\260:", nullptr));
        label->setText(QCoreApplication::translate("uitest", "\347\216\260\351\207\221:", nullptr));
        lujiazuiplace->setText(QCoreApplication::translate("uitest", "\351\231\206\345\256\266\345\230\264", nullptr));
        pushButton_14->setText(QCoreApplication::translate("uitest", "\344\270\264\346\270\257", nullptr));
        pushButton_11->setText(QCoreApplication::translate("uitest", "\346\265\246\344\270\234", nullptr));
        pushButton_9->setText(QCoreApplication::translate("uitest", "\350\231\271\345\217\243", nullptr));
        pushButton_13->setText(QCoreApplication::translate("uitest", "\351\235\222\346\265\246", nullptr));
        pushButton_15->setText(QCoreApplication::translate("uitest", "\351\207\221\345\261\261", nullptr));
        pushButton_10->setText(QCoreApplication::translate("uitest", "\345\256\235\345\261\261", nullptr));
        pushButton_8->setText(QCoreApplication::translate("uitest", "\345\230\211\345\256\232", nullptr));
        pushButton_16->setText(QCoreApplication::translate("uitest", "\346\235\276\346\261\237", nullptr));
        label_4->setText(QCoreApplication::translate("uitest", "\345\201\245\345\272\267:", nullptr));
        buy->setText(QCoreApplication::translate("uitest", "\344\271\260\345\205\245=>", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = bagWidget_2->headerItem();
        ___qtreewidgetitem2->setText(2, QCoreApplication::translate("uitest", "\346\225\260\351\207\217", nullptr));
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("uitest", "\344\271\260\350\277\233\344\273\267\346\240\274", nullptr));

        const bool __sortingEnabled = bagWidget_2->isSortingEnabled();
        bagWidget_2->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem3 = bagWidget_2->topLevelItem(0);
        ___qtreewidgetitem3->setText(2, QCoreApplication::translate("uitest", "6", nullptr));
        ___qtreewidgetitem3->setText(1, QCoreApplication::translate("uitest", "2", nullptr));
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("uitest", "1", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = bagWidget_2->topLevelItem(1);
        ___qtreewidgetitem4->setText(2, QCoreApplication::translate("uitest", "7", nullptr));
        ___qtreewidgetitem4->setText(1, QCoreApplication::translate("uitest", "3", nullptr));
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("uitest", "1", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = bagWidget_2->topLevelItem(2);
        ___qtreewidgetitem5->setText(2, QCoreApplication::translate("uitest", "8", nullptr));
        ___qtreewidgetitem5->setText(1, QCoreApplication::translate("uitest", "4", nullptr));
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("uitest", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = bagWidget_2->topLevelItem(3);
        ___qtreewidgetitem6->setText(2, QCoreApplication::translate("uitest", "9", nullptr));
        ___qtreewidgetitem6->setText(1, QCoreApplication::translate("uitest", "5", nullptr));
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("uitest", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        bagWidget_2->setSortingEnabled(__sortingEnabled);

        groupBox_2->setTitle(QCoreApplication::translate("uitest", "\344\270\212\346\265\267\345\234\260\351\223\201", nullptr));
        groupBox->setTitle(QCoreApplication::translate("uitest", "\347\216\251\345\256\266\347\212\266\346\200\201", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = itemWidget->headerItem();
        ___qtreewidgetitem7->setText(1, QCoreApplication::translate("uitest", "\344\273\267\346\240\274", nullptr));
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("uitest", "\345\225\206\345\223\201", nullptr));

        const bool __sortingEnabled1 = itemWidget->isSortingEnabled();
        itemWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem8 = itemWidget->topLevelItem(0);
        ___qtreewidgetitem8->setText(1, QCoreApplication::translate("uitest", "1", nullptr));
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("uitest", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = itemWidget->topLevelItem(1);
        ___qtreewidgetitem9->setText(1, QCoreApplication::translate("uitest", "2", nullptr));
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("uitest", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = itemWidget->topLevelItem(2);
        ___qtreewidgetitem10->setText(1, QCoreApplication::translate("uitest", "3", nullptr));
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("uitest", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = itemWidget->topLevelItem(3);
        ___qtreewidgetitem11->setText(1, QCoreApplication::translate("uitest", "4", nullptr));
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("uitest", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        itemWidget->setSortingEnabled(__sortingEnabled1);

        sell->setText(QCoreApplication::translate("uitest", "<=\345\215\226\345\207\272", nullptr));
        daylabel->setText(QCoreApplication::translate("uitest", "\345\275\223\345\211\215\346\230\257\347\254\254x\345\244\251", nullptr));
        label_3->setText(QCoreApplication::translate("uitest", "\346\254\240\346\254\276:", nullptr));
        label_2->setText(QCoreApplication::translate("uitest", "\345\255\230\346\254\276:", nullptr));
        moneyaddplus->setText(QCoreApplication::translate("uitest", "\346\211\223\351\222\261\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uitest: public Ui_uitest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UITEST_H
