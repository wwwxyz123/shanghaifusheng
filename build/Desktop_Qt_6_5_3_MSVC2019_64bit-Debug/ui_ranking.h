/********************************************************************************
** Form generated from reading UI file 'ranking.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANKING_H
#define UI_RANKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ranking
{
public:
    QPushButton *startButton;
    QTreeWidget *ranktableWidget;

    void setupUi(QWidget *Ranking)
    {
        if (Ranking->objectName().isEmpty())
            Ranking->setObjectName("Ranking");
        Ranking->resize(832, 709);
<<<<<<< HEAD
        ranktreeWidget = new QTreeWidget(Ranking);
        new QTreeWidgetItem(ranktreeWidget);
        new QTreeWidgetItem(ranktreeWidget);
        new QTreeWidgetItem(ranktreeWidget);
        new QTreeWidgetItem(ranktreeWidget);
        new QTreeWidgetItem(ranktreeWidget);
        new QTreeWidgetItem(ranktreeWidget);
        new QTreeWidgetItem(ranktreeWidget);
        new QTreeWidgetItem(ranktreeWidget);
        new QTreeWidgetItem(ranktreeWidget);
        new QTreeWidgetItem(ranktreeWidget);
        new QTreeWidgetItem(ranktreeWidget);
        new QTreeWidgetItem(ranktreeWidget);
        new QTreeWidgetItem(ranktreeWidget);
        new QTreeWidgetItem(ranktreeWidget);
        new QTreeWidgetItem(ranktreeWidget);
        ranktreeWidget->setObjectName("ranktreeWidget");
        ranktreeWidget->setGeometry(QRect(10, 60, 801, 511));
        pushButton = new QPushButton(Ranking);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 610, 161, 51));
=======
        startButton = new QPushButton(Ranking);
        startButton->setObjectName("startButton");
        startButton->setGeometry(QRect(90, 40, 131, 51));
>>>>>>> 5a83a4a982070f6494aadf4a0929aef67b08de35
        QFont font;
        font.setPointSize(16);
        startButton->setFont(font);
        ranktableWidget = new QTreeWidget(Ranking);
        new QTreeWidgetItem(ranktableWidget);
        new QTreeWidgetItem(ranktableWidget);
        new QTreeWidgetItem(ranktableWidget);
        new QTreeWidgetItem(ranktableWidget);
        new QTreeWidgetItem(ranktableWidget);
        new QTreeWidgetItem(ranktableWidget);
        new QTreeWidgetItem(ranktableWidget);
        new QTreeWidgetItem(ranktableWidget);
        new QTreeWidgetItem(ranktableWidget);
        new QTreeWidgetItem(ranktableWidget);
        new QTreeWidgetItem(ranktableWidget);
        new QTreeWidgetItem(ranktableWidget);
        new QTreeWidgetItem(ranktableWidget);
        new QTreeWidgetItem(ranktableWidget);
        new QTreeWidgetItem(ranktableWidget);
        ranktableWidget->setObjectName("ranktableWidget");
        ranktableWidget->setGeometry(QRect(80, 100, 611, 511));

        retranslateUi(Ranking);

        QMetaObject::connectSlotsByName(Ranking);
    } // setupUi

    void retranslateUi(QWidget *Ranking)
    {
        Ranking->setWindowTitle(QCoreApplication::translate("Ranking", "Form", nullptr));
<<<<<<< HEAD
        QTreeWidgetItem *___qtreewidgetitem = ranktreeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("Ranking", "\347\247\260\345\217\267", nullptr));
=======
        startButton->setText(QCoreApplication::translate("Ranking", "\350\277\224\345\233\236", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = ranktableWidget->headerItem();
>>>>>>> 5a83a4a982070f6494aadf4a0929aef67b08de35
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("Ranking", "\345\201\245\345\272\267\347\212\266\345\206\265", nullptr));
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("Ranking", "\345\220\215\345\243\260", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("Ranking", "\351\207\221\351\222\261", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("Ranking", "\345\220\215\345\255\227", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("Ranking", "\346\216\222\345\220\215", nullptr));

        const bool __sortingEnabled = ranktableWidget->isSortingEnabled();
        ranktableWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = ranktableWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("Ranking", "1", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ranktableWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("Ranking", "2", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ranktableWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("Ranking", "3", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ranktableWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("Ranking", "4", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ranktableWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("Ranking", "5", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ranktableWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("Ranking", "6", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = ranktableWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("Ranking", "7", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ranktableWidget->topLevelItem(7);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("Ranking", "8", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ranktableWidget->topLevelItem(8);
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("Ranking", "9", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ranktableWidget->topLevelItem(9);
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("Ranking", "10", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = ranktableWidget->topLevelItem(10);
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("Ranking", "11", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = ranktableWidget->topLevelItem(11);
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("Ranking", "12", nullptr));
        QTreeWidgetItem *___qtreewidgetitem13 = ranktableWidget->topLevelItem(12);
        ___qtreewidgetitem13->setText(0, QCoreApplication::translate("Ranking", "13", nullptr));
        QTreeWidgetItem *___qtreewidgetitem14 = ranktableWidget->topLevelItem(13);
        ___qtreewidgetitem14->setText(0, QCoreApplication::translate("Ranking", "14", nullptr));
        QTreeWidgetItem *___qtreewidgetitem15 = ranktableWidget->topLevelItem(14);
        ___qtreewidgetitem15->setText(0, QCoreApplication::translate("Ranking", "15", nullptr));
        ranktableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Ranking: public Ui_Ranking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKING_H
