#ifndef PICTUREBROSER_H
#define PICTUREBROSER_H

#include <QDialog>
#include <QKeyEvent>
#include <QInputDialog>

namespace Ui {
class PictureBroser;
}

class PictureBroser : public QDialog
{
    Q_OBJECT

public:
    explicit PictureBroser(QWidget *parent = nullptr);
    ~PictureBroser();
    void reset_para(void);
    void update_para(void);

    int step_val = 20;          //单次移动步长


private:
    Ui::PictureBroser *ui;

    QPixmap  pix_src,pix_fix;//原始图片及缩放图片
    float ratio=1.0;        //缩放比
    QRect paint_rect;           //绘画限制区域
    int paint_xe,paint_ye,paint_we,paint_he;//期望绘画区域
    int paint_x,paint_y,paint_w,paint_h;//实际绘画区域
    int pix_sx,pix_sy;          //选择图片的起始x、y开始绘画

    bool mouse_press_flag = false;//鼠标是否按下
    QPoint mouse_pos_pre,mouse_pos_cur;//记录鼠标位置

    QImage combinePictures(QImage pic);

    void setRatioText();

protected:
    void keyPressEvent(QKeyEvent *event);
//    void keyReleaseEvent(QKeyEvent *event);

public slots:
    void paintEvent(QPaintEvent *event);
    void wheelEvent(QWheelEvent *event);
    bool event(QEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);
    void on_pushButton_Up_clicked();
    void on_pushButton_Down_clicked();
    void on_pushButton_Left_clicked();
    void on_pushButton_Right_clicked();
    void on_pushButton_zoomIn_clicked();
    void on_pushButton_zoomOut_clicked();
    void on_pushButton_Reset_clicked();

    void setStepSize();
    void setRatio(int _ratio);

private slots:
    void on_pushButton_Return_clicked();

signals:
    void closePictureBroserPage();
};

#endif // PICTUREBROSER_H
