#include "winDialog.h"
#include "ui_winDialog.h"
#include "mainwindow.h"

WinDialog::WinDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WinDialog)
{
    ui->setupUi(this);

    QPixmap backgroundImage("../resources/winDialogBack.png");  
    QPalette palette;
    QSize newSize(281, 353); 
    backgroundImage = backgroundImage.scaled(newSize, Qt::KeepAspectRatio);
    palette.setBrush(QPalette::Window, backgroundImage);
    setPalette(palette);
    setFixedSize(281, 353);

    QString imageLabelPath = "../resources/backEggDialog.png";
    QPixmap imageLabel(imageLabelPath);
    ui->label->setScaledContents(true);
    ui->label->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->label->setPixmap(imageLabel);

    ui->pushButton->setStyleSheet("QPushButton { background-color: transparent; border: none; "
                            "background-image: url('../resources/button.png'); "
                            "color: white; font-weight: bold; font-size: 20px; font-family: 'Comic Sans MS'; }");
    ui->pushButton->setFixedSize(225, 53);
    ui->pushButton->setText("Закрыть");

    MainWindow* mainWindowParent = dynamic_cast<MainWindow* >(parent);
    connect(this, &WinDialog::closedEvent, mainWindowParent, &MainWindow::closedSlot);
}

WinDialog::~WinDialog()
{
    delete ui;
}

void WinDialog::on_pushButton_clicked(){
    emit closedEvent();
}

void WinDialog::closeEvent(QCloseEvent *event) {
    closedEvent();
    QWidget::closeEvent(event);
}