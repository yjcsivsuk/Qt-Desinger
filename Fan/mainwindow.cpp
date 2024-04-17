#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setStyleSheet("background-color: black;");
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(ctrlFan()));
    connect(this, SIGNAL(slierValueChanged(double)), ui->gaugepanel, SLOT(updateValue(double)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ctrlFan()
{
    int value = ui->horizontalSlider->value();
    emit slierValueChanged(1.0 * value);
    control_fan(value);
}


