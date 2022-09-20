#include "picturebroser.h"
#include "ui_picturebroser.h"
#include "QDebug"
#include "QPainter"
#include "QWheelEvent"
#include "QImage"


extern QString path;

PictureBroser::~PictureBroser()
{
    delete ui;
}

PictureBroser::PictureBroser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PictureBroser)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();

    setFocusPolicy(Qt::StrongFocus);//设置上下左右键不在界面组件上聚焦

    QImage qimg0, qimg;
    if(qimg.load(path)){
        printf("open picture successfully");
    }else{
        printf("open picture failed");
    }

    qimg0 = combinePictures(qimg);

    pix_src = pix_src.fromImage(qimg0);

    paint_rect.setRect(ui->label_paint->x()+1,ui->label_paint->y()+1,ui->label_paint->width()+1,ui->label_paint->height()+1);
    pix_fix = pix_src.scaled(paint_rect.width(),paint_rect.height(),Qt::KeepAspectRatio,Qt::FastTransformation);
    reset_para();
    update_para();
}


void PictureBroser::reset_para(void)
{
    ratio = 1.0;
    paint_xe = paint_x =paint_rect.x()  ;
    paint_ye = paint_y = paint_rect.y();
    paint_we = paint_w = paint_rect.width();
    paint_he = paint_h = paint_rect.height();
    pix_sx = 0;
    pix_sy = 0;
}

void PictureBroser::update_para(void)
{
    setRatioText();
    //*************** 0. 处理放大和缩小 **********************//
    // 放大缩小仅仅改变width和height，图像的起始点，不变
    int w,h;
    w = ratio*paint_rect.width();//放大或缩小，统一对标到画布尺寸
    h = ratio*paint_rect.height();
    pix_fix = pix_src.scaled(w,h,Qt::KeepAspectRatio,Qt::FastTransformation);//对输入的原图进行放大、缩小
    paint_we = pix_fix.width();//得到初始的图像w、h期望值
    paint_he = pix_fix.height();
    //*************** 1. 处理Y方向 **********************//
    //1.1 首先确定实际绘图的起点，绘图的起点应在画布的大小范围内 //
    // 若期望的起点超出画布上限，则设置截取图像的起始位置sy
    if(paint_ye + paint_he - paint_rect.y() < paint_rect.height() * 0.6){
        paint_ye = paint_rect.y() + paint_rect.height() * 0.6 - paint_he;
    }else if(paint_ye - paint_rect.y() > paint_rect.height() * 0.4){
        paint_ye = paint_rect.y() + paint_rect.height() * 0.4;
    }
    paint_y = paint_ye;
    if(paint_y < paint_rect.y())
    {
        pix_sy =  paint_rect.y() - paint_y;
        pix_sy = pix_sy>pix_fix.height()?pix_fix.height():pix_sy;
        paint_y = paint_rect.y();
    }
    else
    {
        pix_sy = 0;
    }
    //若期望的起点超出画布下限，不允许
    if(paint_y>=(paint_rect.y()+paint_rect.height()-1))
    {
        paint_y = (paint_rect.y()+paint_rect.height()-1);
    }
    //1.2 再确定终点，即高度
    //对于图片本身，减去sy，得到图片本身剩余的高度
    paint_he -= pix_sy;
    // 图片本身的高度，同样不可超过画图区域剩余的高度
    paint_he = paint_he>( paint_rect.height()+paint_rect.y()-paint_y )?(paint_rect.height()+paint_rect.y()-paint_y):paint_he;
    //*************** 2. 处理X方向 **********************//
    //1.1 首先确定实际绘图的起点，绘图的起点应在画布的大小范围内 //
    // 若期望的起点超出画布上限，则设置截取图像的起始位置sx

    if(paint_xe + paint_we - paint_rect.x() < paint_rect.width() * 0.6){
        paint_xe = paint_rect.x() + paint_rect.width() * 0.6 - paint_we;
    }else if(paint_xe - paint_rect.x() > paint_rect.width() * 0.4){
        paint_xe = paint_rect.x() + paint_rect.width() * 0.4;
    }

    paint_x = paint_xe;
    if(paint_x < paint_rect.x())
    {
        pix_sx =  paint_rect.x() - paint_x;
        pix_sx = pix_sx>pix_fix.width()?pix_fix.width():pix_sx;
        paint_x = paint_rect.x();
    }
    else
    {
        pix_sx = 0;
    }
    //若期望的起点超出画布下限，不允许
    if(paint_x>=(paint_rect.x()+paint_rect.width()-1))
    {
        paint_x = (paint_rect.x()+paint_rect.width()-1);
    }
    //1.2 再确定终点，即宽度
    //对于图片本身，减去sx，得到图片本身剩余的宽度
    paint_we -= pix_sx;
    // 图片本身的宽度，同样不可超过画图区域剩余的宽度
    paint_we = paint_we>( paint_rect.width()+paint_rect.x()-paint_x )?(paint_rect.width()+paint_rect.x()-paint_x):paint_we;

    paint_h = paint_he;
    paint_w = paint_we;

    //    qDebug()<<paint_rect;
    //    qDebug()<<paint_x<<paint_y<<paint_w<<paint_h<<pix_fix<<pix_sx<<pix_sy;

}

QImage PictureBroser::combinePictures(QImage pic)
{
    QImage result;
    result = QImage(pic.width() * 4, pic.height() * 4, QImage::Format_RGB888);
    QPainter p(&result);
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            p.drawPixmap(pic.width()*i,pic.height()*j,pic.width(),pic.height(),QPixmap::fromImage(pic));
        }
    }
    return result;
}

void PictureBroser::setRatioText()
{
    ui->label_ratio->setText(QString("%1").arg(ratio));
}

void PictureBroser::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Up:
        on_pushButton_Up_clicked();
        break;
    case Qt::Key_Down:
        on_pushButton_Down_clicked();
        break;
    case Qt::Key_Left:
        on_pushButton_Left_clicked();
        break;
    case Qt::Key_Right:
        on_pushButton_Right_clicked();
        break;
    case Qt::Key_R:
        on_pushButton_Reset_clicked();
        break;
    default:
        break;
    }
}

void PictureBroser::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::SmoothPixmapTransform|QPainter::Antialiasing|QPainter::TextAntialiasing);
    painter.drawRect(paint_rect.x()-1,paint_rect.y()-1,paint_rect.width()+1,paint_rect.height()+1); //画框
    painter.drawTiledPixmap(paint_x,paint_y,paint_w,paint_h,pix_fix,pix_sx,pix_sy);//绘图
}

void PictureBroser::on_pushButton_zoomIn_clicked()
{
    ratio = ratio + 0.1*ratio;
    update_para();
    this->update();
}

void PictureBroser::on_pushButton_zoomOut_clicked()
{
    ratio = ratio - 0.1*ratio;
    update_para();
    this->update();
}

void PictureBroser::on_pushButton_Up_clicked()
{
    paint_ye -= step_val;
    update_para();
    this->update();
}

void PictureBroser::on_pushButton_Down_clicked()
{
    paint_ye += step_val;
    update_para();
    this->update();

}

void PictureBroser::on_pushButton_Left_clicked()
{
    paint_xe -= step_val;
    update_para();
    this->update();

}

void PictureBroser::on_pushButton_Right_clicked()
{
    paint_xe += step_val;
    update_para();
    this->update();

}

void PictureBroser::on_pushButton_Reset_clicked()
{
    reset_para();
    update_para();
    this->update();
}

void PictureBroser::setStepSize()
{
    bool confirmFlag;

    QString content = "请输入修改后的移动步长，当前移动步长为：" + QString::number(step_val,10);
    std::string str = content.toStdString();
    const char *s = str.c_str();

    QString text = QInputDialog::getText(this, tr("移动步长修改"), tr(s), QLineEdit::Normal, "请输入1-500的数字", &confirmFlag);
    if(confirmFlag && !text.isEmpty()){
        step_val = text.toInt();
    }
}

void PictureBroser::setRatio(int _ratio)
{
    ratio = _ratio;
    update_para();
    this->update();
}

void PictureBroser::mouseDoubleClickEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton && paint_rect.contains(event->pos()))
    {
        reset_para();
        update_para();
        this->update();
    }
}
bool PictureBroser::event(QEvent *event)
{

    if(event->type() == QEvent::MouseButtonPress )
    {
        QMouseEvent *mouse = dynamic_cast<QMouseEvent* >(event);
        if(mouse->button()==Qt::LeftButton && paint_rect.contains(mouse->pos()))
        {
            mouse_press_flag = true;
            QApplication::setOverrideCursor(Qt::OpenHandCursor);
            mouse_pos_pre = mouse->pos();
        }
    }
    else if(event->type() == QEvent::MouseButtonRelease)
    {
        QMouseEvent *mouse = dynamic_cast<QMouseEvent* >(event);

        //判断鼠标是否是左键释放,且之前是在绘画区域
        if(mouse->button()==Qt::LeftButton && mouse_press_flag )
        {
            QApplication::setOverrideCursor(Qt::ArrowCursor); //改回鼠标样式
            mouse_press_flag=false;
        }
    }

    if(event->type() == QEvent::MouseMove)              //移动图片
    {
        if(mouse_press_flag)
        {
            QMouseEvent *mouse = dynamic_cast<QMouseEvent* >(event);
            mouse_pos_cur = mouse->pos();
            int dx = mouse_pos_cur.x() - mouse_pos_pre.x();
            int dy = mouse_pos_cur.y() - mouse_pos_pre.y();
            mouse_pos_pre = mouse_pos_cur;
            paint_xe += dx;
            paint_ye += dy;

            update_para();
            this->update();
        }
    }
    return QWidget::event(event);
}

void PictureBroser::wheelEvent(QWheelEvent *event)
{

    if (event->angleDelta().y()>0) //上滑,缩小
    {
        on_pushButton_zoomIn_clicked();
    }
    else //下滑,放大
    {
        on_pushButton_zoomOut_clicked();
    }
    event->accept();
}

void PictureBroser::on_pushButton_Return_clicked()
{
    emit closePictureBroserPage();
    this->close();
}

