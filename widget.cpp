#include "widget.h"
#include "ui_widget.h"
#include "mainwindow.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

//   QString imageButtonPath = "../resources/button.png";
//   QPixmap imageButton(imageButtonPath);
//   ui->startGameButton->setIcon(QIcon(imageButton));
//   ui->startGameButton_2->setIcon(QIcon(imageButton));
  ui->startGameButton->setStyleSheet("QPushButton { background-color: transparent; border: none; "
                         "background-image: url('../resources/button.png'); "
                         "color: white; font-weight: bold; font-size: 20px; font-family: 'Comic Sans MS'; }");
  ui->startGameButton->setFixedSize(225, 53);
  ui->startGameButton->setText("Начать игру");
  ui->startGameButton_2->setStyleSheet("QPushButton { background-color: transparent; border: none; "
                         "background-image: url('../resources/button.png'); "
                         "color: white; font-weight: bold; font-size: 20px; font-family: 'Comic Sans MS'; }");
  ui->startGameButton_2->setFixedSize(225, 53);
  ui->startGameButton_2->setText("Авторы");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startGameButton_clicked(){
    this->hide();

    MainWindow* mainGameWindow;
    if(mainGameWindowPtr != nullptr){
        delete mainGameWindowPtr;
        mainGameWindowPtr = nullptr;
    }
    if(mainGameWindowPtr == nullptr){
        mainGameWindow = new MainWindow(this);
        mainGameWindowPtr = dynamic_cast<QMainWindow* >(mainGameWindow);
    }
    mainGameWindow->show();
}

void Widget::execute(){
    this->show();
}

