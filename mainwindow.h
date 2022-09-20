#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "picturebroser.h"
#include "createproject.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void closeEvent(QCloseEvent *event);


    PictureBroser *pictureBroserPage = nullptr;
    CreateProject *createProjectPage = nullptr;

public slots:
    void on_pushButton_open_clicked();
    void action_quit();
    void action2();
    void action4();
    void action8();
    void action16();

    void refreshMainWindow();

signals:
    void setRatio(int ratio);
private slots:
    void on_pushButton_create_clicked();

    void on_pushButton_return_clicked();

    void on_pushButton_createFromFolder_clicked();

    void on_pushButton_createFromMicro_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
