#ifndef CREATEPROJECT_H
#define CREATEPROJECT_H

#include <QWidget>
#include <QKeyEvent>

namespace Ui {
class CreateProject;
}

class CreateProject : public QWidget
{
    Q_OBJECT

public:
    explicit CreateProject(QWidget *parent = nullptr);
    ~CreateProject();
    void setType(int index);

private slots:
    void on_pushButton_folderRetrun_clicked();

    void on_pushButton_microReturn_clicked();

    void on_pushButton_micreoCreate_clicked();

    void on_pushButton_folderCreate_clicked();

    void on_pushButton_folderProcessReturn_clicked();

    void on_pushButton_microProcessReturn_clicked();

    void on_pushButton_microPic_clicked();

    void on_pushButton_folderPic_clicked();

public slots:
    void mouseDoubleClickEvent(QMouseEvent *event);

private:
    Ui::CreateProject *ui;

signals:
    void closeCreateProjectPage();
};

#endif // CREATEPROJECT_H
