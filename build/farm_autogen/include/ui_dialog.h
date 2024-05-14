/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *loadBear;
    QPushButton *sellBear;
    QPushButton *loadSingleEggButton;
    QPushButton *loadAllEggsButton;
    QPushButton *sellEggsButton;
    QPushButton *closeButton;
    QLabel *label;
    QLabel *eggsAmountForSaleLabel;
    QLabel *label_2;
    QLabel *bearsForSaleLabel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->setEnabled(true);
        Dialog->resize(191, 365);
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 10, 185, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        loadBear = new QPushButton(verticalLayoutWidget);
        loadBear->setObjectName("loadBear");
        QFont font;
        font.setBold(true);
        loadBear->setFont(font);

        verticalLayout->addWidget(loadBear);

        sellBear = new QPushButton(verticalLayoutWidget);
        sellBear->setObjectName("sellBear");
        sellBear->setFont(font);

        verticalLayout->addWidget(sellBear);

        loadSingleEggButton = new QPushButton(verticalLayoutWidget);
        loadSingleEggButton->setObjectName("loadSingleEggButton");
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        loadSingleEggButton->setFont(font1);

        verticalLayout->addWidget(loadSingleEggButton);

        loadAllEggsButton = new QPushButton(verticalLayoutWidget);
        loadAllEggsButton->setObjectName("loadAllEggsButton");
        loadAllEggsButton->setFont(font1);

        verticalLayout->addWidget(loadAllEggsButton);

        sellEggsButton = new QPushButton(verticalLayoutWidget);
        sellEggsButton->setObjectName("sellEggsButton");
        sellEggsButton->setFont(font1);

        verticalLayout->addWidget(sellEggsButton);

        closeButton = new QPushButton(verticalLayoutWidget);
        closeButton->setObjectName("closeButton");
        closeButton->setFont(font1);

        verticalLayout->addWidget(closeButton);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        label->setFont(font2);

        verticalLayout->addWidget(label);

        eggsAmountForSaleLabel = new QLabel(verticalLayoutWidget);
        eggsAmountForSaleLabel->setObjectName("eggsAmountForSaleLabel");
        eggsAmountForSaleLabel->setFont(font2);

        verticalLayout->addWidget(eggsAmountForSaleLabel);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        bearsForSaleLabel = new QLabel(verticalLayoutWidget);
        bearsForSaleLabel->setObjectName("bearsForSaleLabel");
        bearsForSaleLabel->setFont(font);

        verticalLayout->addWidget(bearsForSaleLabel);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        loadBear->setText(QCoreApplication::translate("Dialog", "\320\267\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\274\320\265\320\264\320\262\320\265\320\264\321\217", nullptr));
        sellBear->setText(QCoreApplication::translate("Dialog", "\320\277\321\200\320\276\320\264\320\260\321\202\321\214 \320\274\320\265\320\264\320\262\320\265\320\264\321\217", nullptr));
        loadSingleEggButton->setText(QCoreApplication::translate("Dialog", "\320\267\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\276\320\264\320\275\320\276 \321\217\320\271\321\206\320\276", nullptr));
        loadAllEggsButton->setText(QCoreApplication::translate("Dialog", "\320\267\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\262\321\201\320\265 \321\217\320\271\321\206\320\260", nullptr));
        sellEggsButton->setText(QCoreApplication::translate("Dialog", "\320\277\321\200\320\276\320\264\320\260\321\202\321\214 \321\217\320\271\321\206\320\260", nullptr));
        closeButton->setText(QCoreApplication::translate("Dialog", "\320\267\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\320\257\320\271\321\206\320\260 \320\275\320\260 \320\277\321\200\320\276\320\264\321\203\320\260\320\266\321\203:", nullptr));
        eggsAmountForSaleLabel->setText(QString());
        label_2->setText(QCoreApplication::translate("Dialog", "\320\234\320\265\320\264\320\262\320\265\320\264\320\270 \320\275\320\260 \320\277\321\200\320\276\320\264\320\260\320\266\321\203", nullptr));
        bearsForSaleLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
