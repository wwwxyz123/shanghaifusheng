/********************************************************************************
** Form generated from reading UI file 'uitest.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UITEST_H
#define UI_UITEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uitest
{
public:
    QTreeWidget *treeWidget;

    void setupUi(QWidget *uitest)
    {
        if (uitest->objectName().isEmpty())
            uitest->setObjectName("uitest");
        uitest->resize(400, 300);
        treeWidget = new QTreeWidget(uitest);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setGeometry(QRect(70, 60, 221, 192));
        treeWidget->setRootIsDecorated(false);
        treeWidget->header()->setDefaultSectionSize(100);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(false));
        treeWidget->header()->setStretchLastSection(true);

        retranslateUi(uitest);

        QMetaObject::connectSlotsByName(uitest);
    } // setupUi

    void retranslateUi(QWidget *uitest)
    {
        uitest->setWindowTitle(QCoreApplication::translate("uitest", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("uitest", "\346\226\260\345\273\272\345\210\227", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("uitest", "\346\226\260\345\273\272\345\210\227", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("uitest", "1", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("uitest", "1", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("uitest", "2", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("uitest", "2", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(1, QCoreApplication::translate("uitest", "3", nullptr));
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("uitest", "33", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(1, QCoreApplication::translate("uitest", "4", nullptr));
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("uitest", "444", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(1, QCoreApplication::translate("uitest", "5", nullptr));
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("uitest", "555", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(1, QCoreApplication::translate("uitest", "6", nullptr));
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("uitest", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("uitest", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class uitest: public Ui_uitest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UITEST_H
