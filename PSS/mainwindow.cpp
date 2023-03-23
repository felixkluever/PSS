#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QPixmap map = QPixmap("/Users/felixkluver/Desktop/Virgin A330-900 G-VTOM LHR (5).JPG");

    ui->pictureTestLabel->setPixmap(map);
    ui->pictureTestLabel->setScaledContents(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

