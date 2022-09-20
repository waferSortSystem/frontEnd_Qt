#include "createproject.h"
#include "ui_createproject.h"

CreateProject::CreateProject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateProject)
{
    ui->setupUi(this);
}

CreateProject::~CreateProject()
{
    delete ui;
}

void CreateProject::setType(int index)
{
    ui->stackedWidget->setCurrentIndex(index);
}

void CreateProject::on_pushButton_folderRetrun_clicked()
{
    emit closeCreateProjectPage();
    this->close();
}

void CreateProject::on_pushButton_microReturn_clicked()
{
    emit closeCreateProjectPage();
    this->close();
}

void CreateProject::on_pushButton_folderCreate_clicked()
{
    ui->label_folderPic->setVisible(0);
    ui->stackedWidget->setCurrentIndex(2);
}

void CreateProject::on_pushButton_micreoCreate_clicked()
{
    ui->label_microPic->setVisible(0);
    ui->stackedWidget->setCurrentIndex(3);
}

void CreateProject::on_pushButton_folderProcessReturn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void CreateProject::on_pushButton_microProcessReturn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void CreateProject::mouseDoubleClickEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        if(ui->label_microPic->isVisible())
        ui->label_microPic->setVisible(0);
        if(ui->label_folderPic->isVisible())
        ui->label_folderPic->setVisible(0);
    }
}

void CreateProject::on_pushButton_microPic_clicked()
{
    ui->label_microPic->setVisible(1);
}


void CreateProject::on_pushButton_folderPic_clicked()
{
    ui->label_folderPic->setVisible(1);
}

