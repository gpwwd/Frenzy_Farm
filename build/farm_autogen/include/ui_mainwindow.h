/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *buyWater;
    QLabel *winLabel;
    QPushButton *addHen;
    QLabel *eggsLabelPicture;
    QLabel *labeMoneyPicture;
    QLabel *collectedEggsLabel;
    QLabel *moneyAmountLabel;
    QLabel *labelForRemainedTime;
    QPushButton *openEggDialogButton;
    QLabel *pastTimeLabel;
    QLabel *clockPictureLabel;
    QLabel *collectedProductsLabel;
    QLabel *labelProductPicture;
    QPushButton *createFactoryButton;
    QLabel *labelBuyedHens;
    QLabel *amountOfBuyedHens;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1326, 885);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, -30, 1280, 855));
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        graphicsView->setForegroundBrush(brush);
        buyWater = new QPushButton(centralwidget);
        buyWater->setObjectName("buyWater");
        buyWater->setGeometry(QRect(600, 110, 141, 121));
        buyWater->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        buyWater->setCheckable(false);
        buyWater->setAutoDefault(false);
        buyWater->setFlat(false);
        winLabel = new QLabel(centralwidget);
        winLabel->setObjectName("winLabel");
        winLabel->setGeometry(QRect(430, 330, 481, 131));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        winLabel->setFont(font);
        winLabel->setAlignment(Qt::AlignCenter);
        addHen = new QPushButton(centralwidget);
        addHen->setObjectName("addHen");
        addHen->setGeometry(QRect(0, 0, 91, 91));
        QIcon icon;
        icon.addFile(QString::fromUtf8("resources/Hen-removebg-preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        addHen->setIcon(icon);
        addHen->setIconSize(QSize(100, 100));
        addHen->setCheckable(false);
        addHen->setFlat(true);
        eggsLabelPicture = new QLabel(centralwidget);
        eggsLabelPicture->setObjectName("eggsLabelPicture");
        eggsLabelPicture->setGeometry(QRect(1100, 700, 71, 71));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        eggsLabelPicture->setFont(font1);
        eggsLabelPicture->setPixmap(QPixmap(QString::fromUtf8("resources/egg.png")));
        eggsLabelPicture->setScaledContents(true);
        labeMoneyPicture = new QLabel(centralwidget);
        labeMoneyPicture->setObjectName("labeMoneyPicture");
        labeMoneyPicture->setGeometry(QRect(10, 720, 61, 61));
        labeMoneyPicture->setFont(font1);
        labeMoneyPicture->setPixmap(QPixmap(QString::fromUtf8("resources/MoneyPicture.png")));
        labeMoneyPicture->setScaledContents(true);
        labeMoneyPicture->setWordWrap(false);
        collectedEggsLabel = new QLabel(centralwidget);
        collectedEggsLabel->setObjectName("collectedEggsLabel");
        collectedEggsLabel->setGeometry(QRect(1110, 780, 61, 31));
        collectedEggsLabel->setFont(font1);
        collectedEggsLabel->setScaledContents(true);
        collectedEggsLabel->setWordWrap(false);
        moneyAmountLabel = new QLabel(centralwidget);
        moneyAmountLabel->setObjectName("moneyAmountLabel");
        moneyAmountLabel->setGeometry(QRect(10, 790, 51, 31));
        moneyAmountLabel->setFont(font1);
        labelForRemainedTime = new QLabel(centralwidget);
        labelForRemainedTime->setObjectName("labelForRemainedTime");
        labelForRemainedTime->setGeometry(QRect(840, 720, 61, 78));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        labelForRemainedTime->setFont(font2);
        openEggDialogButton = new QPushButton(centralwidget);
        openEggDialogButton->setObjectName("openEggDialogButton");
        openEggDialogButton->setGeometry(QRect(520, 670, 151, 121));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Noto Sans Adlam")});
        font3.setPointSize(14);
        font3.setBold(true);
        openEggDialogButton->setFont(font3);
        pastTimeLabel = new QLabel(centralwidget);
        pastTimeLabel->setObjectName("pastTimeLabel");
        pastTimeLabel->setGeometry(QRect(1010, 780, 91, 31));
        pastTimeLabel->setFont(font1);
        clockPictureLabel = new QLabel(centralwidget);
        clockPictureLabel->setObjectName("clockPictureLabel");
        clockPictureLabel->setGeometry(QRect(1020, 710, 51, 51));
        clockPictureLabel->setPixmap(QPixmap(QString::fromUtf8("resources/clock.png")));
        collectedProductsLabel = new QLabel(centralwidget);
        collectedProductsLabel->setObjectName("collectedProductsLabel");
        collectedProductsLabel->setGeometry(QRect(930, 780, 51, 31));
        collectedProductsLabel->setFont(font1);
        labelProductPicture = new QLabel(centralwidget);
        labelProductPicture->setObjectName("labelProductPicture");
        labelProductPicture->setGeometry(QRect(920, 690, 61, 81));
        labelProductPicture->setPixmap(QPixmap(QString::fromUtf8("resources/product.png")));
        labelProductPicture->setScaledContents(true);
        createFactoryButton = new QPushButton(centralwidget);
        createFactoryButton->setObjectName("createFactoryButton");
        createFactoryButton->setGeometry(QRect(127, 140, 101, 91));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        createFactoryButton->setFont(font4);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("resources/MoneyPicture.png"), QSize(), QIcon::Normal, QIcon::Off);
        createFactoryButton->setIcon(icon1);
        labelBuyedHens = new QLabel(centralwidget);
        labelBuyedHens->setObjectName("labelBuyedHens");
        labelBuyedHens->setGeometry(QRect(1197, 700, 71, 71));
        amountOfBuyedHens = new QLabel(centralwidget);
        amountOfBuyedHens->setObjectName("amountOfBuyedHens");
        amountOfBuyedHens->setGeometry(QRect(1200, 780, 58, 31));
        amountOfBuyedHens->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1326, 30));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        buyWater->setDefault(false);
        addHen->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        buyWater->setText(QString());
        winLabel->setText(QString());
        addHen->setText(QString());
        eggsLabelPicture->setText(QString());
        labeMoneyPicture->setText(QString());
        collectedEggsLabel->setText(QString());
        moneyAmountLabel->setText(QString());
        labelForRemainedTime->setText(QString());
        openEggDialogButton->setText(QString());
        pastTimeLabel->setText(QString());
        clockPictureLabel->setText(QString());
        collectedProductsLabel->setText(QString());
        labelProductPicture->setText(QString());
        createFactoryButton->setText(QCoreApplication::translate("MainWindow", "150", nullptr));
        labelBuyedHens->setText(QString());
        amountOfBuyedHens->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
