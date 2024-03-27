#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //view
    ui->radioButton1->setChecked(true);
    connect(ui->radioButton1,&QRadioButton::clicked,[=](){
        ui->qglwidget->lightflag=1;
    });
    connect(ui->radioButton2,&QRadioButton::clicked,[=](){
        ui->qglwidget->lightflag=0;
    });
    ui->SliderRotate->setMinimum(-180);
        ui->SliderRotate->setMaximum(180);
        ui->SliderRotate->setSingleStep(1);
        ui->SliderRotate->setValue(0);
    connect(ui->SliderRotate,&QAbstractSlider::valueChanged,[=](){
        ui->qglwidget->m_rota=ui->SliderRotate->value();
    });

    ui->SliderScale->setMinimum(10);
    ui->SliderScale->setMaximum(100);
    ui->SliderScale->setSingleStep(1);
    ui->SliderScale->setValue(10);
    connect(ui->SliderScale,&QAbstractSlider::valueChanged,[=](){
        ui->qglwidget->m_scale=(float)ui->SliderScale->value()/20;
    });

    ui->SliderTrans->setMinimum(-180);
        ui->SliderTrans->setMaximum(90);
        ui->SliderTrans->setSingleStep(1);
        ui->SliderTrans->setValue(0);
        connect(ui->SliderTrans,&QAbstractSlider::valueChanged,[=](){
        ui->qglwidget->m_trans=ui->SliderTrans->value();
    });

    ui->SliderSpeed->setMinimum(0);
    ui->SliderSpeed->setMaximum(80);
    ui->SliderSpeed->setSingleStep(1);
    ui->SliderSpeed->setValue(1);
connect(ui->SliderSpeed,&QAbstractSlider::valueChanged,[=](){
    ui->qglwidget->cowSpeed=ui->SliderSpeed->value();
});
    ui->SliderRadius->setMinimum(20);
    ui->SliderRadius->setMaximum(60);
    ui->SliderRadius->setSingleStep(1);
    ui->SliderRadius->setValue(60);
connect(ui->SliderRadius,&QAbstractSlider::valueChanged,[=](){
    ui->qglwidget->cowRadius=ui->SliderRadius->value();
});


}

MainWindow::~MainWindow()
{
    delete ui;
}

