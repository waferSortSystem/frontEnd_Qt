/********************************************************************************
** Form generated from reading UI file 'picturebroser.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICTUREBROSER_H
#define UI_PICTUREBROSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PictureBroser
{
public:
    QPushButton *pushButton_Right;
    QPushButton *pushButton_Left;
    QPushButton *pushButton_Up;
    QPushButton *pushButton_Reset;
    QPushButton *pushButton_Down;
    QPushButton *pushButton_zoomIn;
    QLabel *label_paint;
    QPushButton *pushButton_zoomOut;
    QPushButton *pushButton_Return;
    QLabel *label_text;
    QLabel *label_ratio;

    void setupUi(QDialog *PictureBroser)
    {
        if (PictureBroser->objectName().isEmpty())
            PictureBroser->setObjectName(QString::fromUtf8("PictureBroser"));
        PictureBroser->resize(700, 370);
        pushButton_Right = new QPushButton(PictureBroser);
        pushButton_Right->setObjectName(QString::fromUtf8("pushButton_Right"));
        pushButton_Right->setGeometry(QRect(670, 140, 20, 20));
        pushButton_Left = new QPushButton(PictureBroser);
        pushButton_Left->setObjectName(QString::fromUtf8("pushButton_Left"));
        pushButton_Left->setGeometry(QRect(630, 140, 20, 20));
        pushButton_Up = new QPushButton(PictureBroser);
        pushButton_Up->setObjectName(QString::fromUtf8("pushButton_Up"));
        pushButton_Up->setGeometry(QRect(650, 120, 20, 20));
        pushButton_Reset = new QPushButton(PictureBroser);
        pushButton_Reset->setObjectName(QString::fromUtf8("pushButton_Reset"));
        pushButton_Reset->setGeometry(QRect(630, 220, 60, 20));
        pushButton_Down = new QPushButton(PictureBroser);
        pushButton_Down->setObjectName(QString::fromUtf8("pushButton_Down"));
        pushButton_Down->setGeometry(QRect(650, 160, 20, 20));
        pushButton_zoomIn = new QPushButton(PictureBroser);
        pushButton_zoomIn->setObjectName(QString::fromUtf8("pushButton_zoomIn"));
        pushButton_zoomIn->setGeometry(QRect(630, 190, 30, 20));
        label_paint = new QLabel(PictureBroser);
        label_paint->setObjectName(QString::fromUtf8("label_paint"));
        label_paint->setGeometry(QRect(20, 10, 591, 351));
        pushButton_zoomOut = new QPushButton(PictureBroser);
        pushButton_zoomOut->setObjectName(QString::fromUtf8("pushButton_zoomOut"));
        pushButton_zoomOut->setGeometry(QRect(660, 190, 30, 20));
        pushButton_Return = new QPushButton(PictureBroser);
        pushButton_Return->setObjectName(QString::fromUtf8("pushButton_Return"));
        pushButton_Return->setGeometry(QRect(630, 10, 60, 20));
        label_text = new QLabel(PictureBroser);
        label_text->setObjectName(QString::fromUtf8("label_text"));
        label_text->setGeometry(QRect(630, 250, 60, 20));
        QFont font;
        font.setPointSize(9);
        label_text->setFont(font);
        label_ratio = new QLabel(PictureBroser);
        label_ratio->setObjectName(QString::fromUtf8("label_ratio"));
        label_ratio->setGeometry(QRect(630, 280, 60, 20));

        retranslateUi(PictureBroser);

        QMetaObject::connectSlotsByName(PictureBroser);
    } // setupUi

    void retranslateUi(QDialog *PictureBroser)
    {
        PictureBroser->setWindowTitle(QCoreApplication::translate("PictureBroser", "Dialog", nullptr));
        pushButton_Right->setText(QCoreApplication::translate("PictureBroser", "\345\217\263", nullptr));
        pushButton_Left->setText(QCoreApplication::translate("PictureBroser", "\345\267\246", nullptr));
        pushButton_Up->setText(QCoreApplication::translate("PictureBroser", "\344\270\212", nullptr));
        pushButton_Reset->setText(QCoreApplication::translate("PictureBroser", "\351\207\215\347\275\256(R)", nullptr));
        pushButton_Down->setText(QCoreApplication::translate("PictureBroser", "\344\270\213", nullptr));
        pushButton_zoomIn->setText(QCoreApplication::translate("PictureBroser", "\346\224\276\345\244\247", nullptr));
        label_paint->setText(QString());
        pushButton_zoomOut->setText(QCoreApplication::translate("PictureBroser", "\347\274\251\345\260\217", nullptr));
        pushButton_Return->setText(QCoreApplication::translate("PictureBroser", "\350\277\224\345\233\236", nullptr));
        label_text->setText(QCoreApplication::translate("PictureBroser", "\345\275\223\345\211\215\345\200\215\346\225\260\357\274\232", nullptr));
        label_ratio->setText(QCoreApplication::translate("PictureBroser", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PictureBroser: public Ui_PictureBroser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICTUREBROSER_H
