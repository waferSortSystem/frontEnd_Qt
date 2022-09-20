#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "QMessageBox"
#include <QCloseEvent>

QString path;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menu_viewer->setEnabled(0);
    ui->stackedWidget->setCurrentIndex(0);

    connect(ui->action_open,SIGNAL(triggered()),this,SLOT(on_pushButton_open_clicked()));
    connect(ui->action_create,SIGNAL(triggered()),this,SLOT(on_pushButton_create_clicked()));
    connect(ui->action_quit,SIGNAL(triggered()),this,SLOT(action_quit()));
    connect(ui->action2,SIGNAL(triggered()),this,SLOT(action2()));
    connect(ui->action4,SIGNAL(triggered()),this,SLOT(action4()));
    connect(ui->action8,SIGNAL(triggered()),this,SLOT(action8()));
    connect(ui->action16,SIGNAL(triggered()),this,SLOT(action16()));

}

void MainWindow::action_quit(){
    this->close();
}

void MainWindow::action2()
{
    emit setRatio(2);
}

void MainWindow::action4()
{
    emit setRatio(4);
}

void MainWindow::action8()
{
    emit setRatio(8);
}

void MainWindow::action16()
{
    emit setRatio(16);
}

void MainWindow::closeEvent(QCloseEvent *event){
    switch (QMessageBox::information(this, tr("exit tip"), tr("Do you really want exit?"), tr("Yes"), tr("no"), 0, 1)) {
    case 0:
       event->accept();
        break;
    case 1:
    default:
        event->ignore();
        break;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_open_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(
            this,
            tr("open a file."),
            "D:/",
            tr("images(*.png *.jpeg *.bmp *.jpg);;All files(*.*)"));
        if (fileName.isEmpty()) {
            QMessageBox::warning(this, "Warning!", "Failed to open the picture!");
        }
        else {
            refreshMainWindow();
            ui->menu_viewer->setEnabled(1);

            path = fileName;
            ui->stackedWidget->setVisible(0);
            pictureBroserPage = new PictureBroser(this);

            connect(ui->action_zoomIn,SIGNAL(triggered()),pictureBroserPage,SLOT(on_pushButton_zoomIn_clicked()));
            connect(ui->action_zoomOut,SIGNAL(triggered()),pictureBroserPage,SLOT(on_pushButton_zoomOut_clicked()));
            connect(ui->action_setStepSize,SIGNAL(triggered()),pictureBroserPage,SLOT(setStepSize()));

            connect(this,SIGNAL(setRatio(int)),pictureBroserPage,SLOT(setRatio(int)));
            connect(pictureBroserPage, SIGNAL(closePictureBroserPage()),this, SLOT(refreshMainWindow()));

            pictureBroserPage->move(0,30);
            pictureBroserPage->show();

        }
}

void MainWindow::refreshMainWindow()
{
    if(pictureBroserPage != nullptr){
        pictureBroserPage->close();
    }
    if(createProjectPage != nullptr){
        createProjectPage->close();
    }

    ui->action_create->setEnabled(1);
    ui->menu_viewer->setEnabled(0);
    ui->stackedWidget->setVisible(1);
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_create_clicked()
{
    refreshMainWindow();
    ui->action_create->setEnabled(0);
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_return_clicked()
{
    ui->action_create->setEnabled(1);
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButton_createFromFolder_clicked()
{
    ui->stackedWidget->setVisible(0);
    createProjectPage = new CreateProject(this);
    createProjectPage->move(0,30);
    createProjectPage->show();
    createProjectPage->setType(0);

    connect(createProjectPage, SIGNAL(closeCreateProjectPage()),this, SLOT(refreshMainWindow()));
}


void MainWindow::on_pushButton_createFromMicro_clicked()
{
    ui->stackedWidget->setVisible(0);
    createProjectPage = new CreateProject(this);
    createProjectPage->move(0,30);
    createProjectPage->show();
    createProjectPage->setType(1);

    connect(createProjectPage, SIGNAL(closeCreateProjectPage()),this, SLOT(refreshMainWindow()));
}

