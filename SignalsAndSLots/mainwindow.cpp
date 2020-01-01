#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //just connect the slider and progress bar
    connect(ui -> horizontalSlider,SIGNAL(valueChanged(int)),
            ui -> progressBar, SLOT(setValue(int)));
    //just disconnect the slider and progress bar
    disconnect(ui -> horizontalSlider,SIGNAL(valueChanged(int)),
            ui -> progressBar, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

