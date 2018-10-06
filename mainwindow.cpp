#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QImage qrImage;
    qrImage.load(":/screenshot.png");
    const QString & decodeText = zxing.decodeImage( qrImage );
    qDebug()<<decodeText;
}

MainWindow::~MainWindow()
{
    delete ui;
}
