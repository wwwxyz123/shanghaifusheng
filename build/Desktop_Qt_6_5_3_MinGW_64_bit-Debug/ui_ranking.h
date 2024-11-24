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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ranking
{
public:
    QTableWidget *tableWidget;
    QPushButton *backButton;

    void setupUi(QWidget *Ranking)
    {
        if (Ranking->objectName().isEmpty())
            Ranking->setObjectName("Ranking");
        Ranking->resize(772, 697);
        tableWidget = new QTableWidget(Ranking);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 20)
            tableWidget->setRowCount(20);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(16, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(17, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(18, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(19, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(2, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(3, 0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(4, 0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(5, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(6, 0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(7, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(8, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(9, 0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(10, 0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(11, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(12, 0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(13, 0, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(14, 0, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(15, 0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(16, 0, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(17, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(18, 0, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(19, 0, __qtablewidgetitem44);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 110, 660, 521));
        tableWidget->setMinimumSize(QSize(660, 0));
        tableWidget->setMaximumSize(QSize(660, 16777215));
        backButton = new QPushButton(Ranking);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(40, 30, 131, 51));

        retranslateUi(Ranking);

        QMetaObject::connectSlotsByName(Ranking);
    } // setupUi

    void retranslateUi(QWidget *Ranking)
    {
        Ranking->setWindowTitle(QCoreApplication::translate("Ranking", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Ranking", "\346\216\222\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Ranking", "\345\220\215\345\255\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Ranking", "\351\207\221\351\222\261", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Ranking", "\345\220\215\345\243\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Ranking", "\345\201\245\345\272\267\346\260\264\345\271\263", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Ranking", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(1, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Ranking", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(2, 0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Ranking", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(3, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Ranking", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(4, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Ranking", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(5, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Ranking", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(6, 0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Ranking", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(7, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Ranking", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(8, 0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Ranking", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(9, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Ranking", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(10, 0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Ranking", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(11, 0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("Ranking", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(12, 0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("Ranking", "13", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(13, 0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("Ranking", "14", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(14, 0);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("Ranking", "15", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(15, 0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("Ranking", "16", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(16, 0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("Ranking", "17", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(17, 0);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("Ranking", "18", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(18, 0);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("Ranking", "19", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(19, 0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("Ranking", "20", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        backButton->setText(QCoreApplication::translate("Ranking", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ranking: public Ui_Ranking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKING_H
