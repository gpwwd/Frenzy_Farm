/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *startGameButton;
    QPushButton *startGameButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1600, 1058);
        Widget->setAutoFillBackground(true);
        startGameButton = new QPushButton(Widget);
        startGameButton->setObjectName("startGameButton");
        startGameButton->setGeometry(QRect(680, 580, 176, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8("resources/button.png"), QSize(), QIcon::Normal, QIcon::Off);
        startGameButton->setIcon(icon);
        startGameButton->setIconSize(QSize(225, 53));
        startGameButton->setCheckable(false);
        startGameButton->setAutoDefault(false);
        startGameButton->setFlat(false);
        startGameButton_2 = new QPushButton(Widget);
        startGameButton_2->setObjectName("startGameButton_2");
        startGameButton_2->setGeometry(QRect(680, 650, 176, 51));
        startGameButton_2->setIcon(icon);
        startGameButton_2->setIconSize(QSize(225, 53));
        startGameButton_2->setFlat(true);

        retranslateUi(Widget);

        startGameButton->setDefault(false);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Form", nullptr));
        startGameButton->setText(QString());
        startGameButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
