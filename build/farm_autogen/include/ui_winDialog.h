/********************************************************************************
** Form generated from reading UI file 'winDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDIALOG_H
#define UI_WINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WinDialog
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *WinDialog)
    {
        if (WinDialog->objectName().isEmpty())
            WinDialog->setObjectName("WinDialog");
        WinDialog->resize(310, 384);
        pushButton = new QPushButton(WinDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 290, 225, 53));
        pushButton->setIconSize(QSize(93, 99));
        label = new QLabel(WinDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 70, 211, 161));
        label->setPixmap(QPixmap(QString::fromUtf8("resources/backEggDialog.jpg")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(WinDialog);

        QMetaObject::connectSlotsByName(WinDialog);
    } // setupUi

    void retranslateUi(QDialog *WinDialog)
    {
        WinDialog->setWindowTitle(QCoreApplication::translate("WinDialog", "Dialog", nullptr));
        pushButton->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WinDialog: public Ui_WinDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDIALOG_H
