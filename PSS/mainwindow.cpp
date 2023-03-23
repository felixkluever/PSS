#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QImage image = QImage("/Users/felixkluver/Desktop/Virgin A330-900 G-VTOM LHR (5).JPG");
    QPixmap map = QPixmap();
    map.convertFromImage(image);

    ui->pictureTestLabel->setPixmap(map);
    ui->pictureTestLabel->setScaledContents(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

