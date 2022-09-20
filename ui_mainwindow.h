/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_create;
    QAction *action_open;
    QAction *action_save;
    QAction *action_quit;
    QAction *action_zoomIn;
    QAction *action_zoomOut;
    QAction *action_setStepSize;
    QAction *action_viewAccount;
    QAction *action_login;
    QAction *action_logout;
    QAction *action_userManual;
    QAction *action2;
    QAction *action4;
    QAction *action8;
    QAction *action16;
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_open;
    QPushButton *pushButton_create;
    QWidget *page_2;
    QPushButton *pushButton_createFromMicro;
    QPushButton *pushButton_createFromFolder;
    QPushButton *pushButton_return;
    QMenuBar *menubar;
    QMenu *menu_project;
    QMenu *menu_viewer;
    QMenu *menu;
    QMenu *menu_account;
    QMenu *menu_help;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 410);
        action_create = new QAction(MainWindow);
        action_create->setObjectName(QString::fromUtf8("action_create"));
        action_open = new QAction(MainWindow);
        action_open->setObjectName(QString::fromUtf8("action_open"));
        action_save = new QAction(MainWindow);
        action_save->setObjectName(QString::fromUtf8("action_save"));
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName(QString::fromUtf8("action_quit"));
        action_quit->setEnabled(true);
        action_zoomIn = new QAction(MainWindow);
        action_zoomIn->setObjectName(QString::fromUtf8("action_zoomIn"));
        action_zoomIn->setEnabled(true);
        action_zoomOut = new QAction(MainWindow);
        action_zoomOut->setObjectName(QString::fromUtf8("action_zoomOut"));
        action_setStepSize = new QAction(MainWindow);
        action_setStepSize->setObjectName(QString::fromUtf8("action_setStepSize"));
        action_viewAccount = new QAction(MainWindow);
        action_viewAccount->setObjectName(QString::fromUtf8("action_viewAccount"));
        action_login = new QAction(MainWindow);
        action_login->setObjectName(QString::fromUtf8("action_login"));
        action_logout = new QAction(MainWindow);
        action_logout->setObjectName(QString::fromUtf8("action_logout"));
        action_userManual = new QAction(MainWindow);
        action_userManual->setObjectName(QString::fromUtf8("action_userManual"));
        action2 = new QAction(MainWindow);
        action2->setObjectName(QString::fromUtf8("action2"));
        action4 = new QAction(MainWindow);
        action4->setObjectName(QString::fromUtf8("action4"));
        action8 = new QAction(MainWindow);
        action8->setObjectName(QString::fromUtf8("action8"));
        action16 = new QAction(MainWindow);
        action16->setObjectName(QString::fromUtf8("action16"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(90, 70, 511, 221));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        pushButton_open = new QPushButton(page);
        pushButton_open->setObjectName(QString::fromUtf8("pushButton_open"));
        pushButton_open->setGeometry(QRect(70, 60, 130, 80));
        QFont font;
        font.setPointSize(20);
        pushButton_open->setFont(font);
        pushButton_open->setIconSize(QSize(12, 12));
        pushButton_create = new QPushButton(page);
        pushButton_create->setObjectName(QString::fromUtf8("pushButton_create"));
        pushButton_create->setGeometry(QRect(320, 60, 130, 80));
        pushButton_create->setFont(font);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        pushButton_createFromMicro = new QPushButton(page_2);
        pushButton_createFromMicro->setObjectName(QString::fromUtf8("pushButton_createFromMicro"));
        pushButton_createFromMicro->setGeometry(QRect(100, 40, 300, 50));
        pushButton_createFromFolder = new QPushButton(page_2);
        pushButton_createFromFolder->setObjectName(QString::fromUtf8("pushButton_createFromFolder"));
        pushButton_createFromFolder->setGeometry(QRect(100, 110, 300, 50));
        pushButton_return = new QPushButton(page_2);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));
        pushButton_return->setGeometry(QRect(440, 0, 40, 20));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 25));
        QFont font1;
        font1.setPointSize(15);
        menubar->setFont(font1);
        menu_project = new QMenu(menubar);
        menu_project->setObjectName(QString::fromUtf8("menu_project"));
        menu_project->setFont(font1);
        menu_viewer = new QMenu(menubar);
        menu_viewer->setObjectName(QString::fromUtf8("menu_viewer"));
        menu_viewer->setFont(font1);
        menu = new QMenu(menu_viewer);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_account = new QMenu(menubar);
        menu_account->setObjectName(QString::fromUtf8("menu_account"));
        menu_account->setFont(font1);
        menu_help = new QMenu(menubar);
        menu_help->setObjectName(QString::fromUtf8("menu_help"));
        menu_help->setFont(font1);
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu_project->menuAction());
        menubar->addAction(menu_viewer->menuAction());
        menubar->addAction(menu_account->menuAction());
        menubar->addAction(menu_help->menuAction());
        menu_project->addAction(action_create);
        menu_project->addAction(action_open);
        menu_project->addAction(action_quit);
        menu_viewer->addAction(action_zoomIn);
        menu_viewer->addAction(action_zoomOut);
        menu_viewer->addAction(action_setStepSize);
        menu_viewer->addAction(menu->menuAction());
        menu->addAction(action2);
        menu->addAction(action4);
        menu->addAction(action8);
        menu->addAction(action16);
        menu_account->addAction(action_viewAccount);
        menu_account->addAction(action_login);
        menu_account->addAction(action_logout);
        menu_help->addAction(action_userManual);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\231\266\345\234\206\345\233\276\345\203\217\346\213\274\346\216\245\346\216\247\345\210\266\345\231\250", nullptr));
        action_create->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
        action_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        action_save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        action_zoomIn->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
        action_zoomOut->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
        action_setStepSize->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\255\245\351\225\277", nullptr));
        action_viewAccount->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\264\246\346\210\267", nullptr));
        action_login->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225/\346\263\250\345\206\214", nullptr));
        action_logout->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\207\272", nullptr));
        action_userManual->setText(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250\350\257\264\346\230\216", nullptr));
        action2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        action4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        action8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        action16->setText(QCoreApplication::translate("MainWindow", "16", nullptr));
        pushButton_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\351\241\271\347\233\256", nullptr));
        pushButton_create->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        pushButton_createFromMicro->setText(QCoreApplication::translate("MainWindow", "\344\273\216\346\230\276\345\276\256\351\225\234\351\207\207\351\233\206\346\231\266\345\234\206\345\233\276\345\203\217", nullptr));
        pushButton_createFromFolder->setText(QCoreApplication::translate("MainWindow", "\344\273\216\346\226\207\344\273\266\345\244\271\345\257\274\345\205\245\346\231\266\345\234\206\345\233\276\345\203\217", nullptr));
        pushButton_return->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        menu_project->setTitle(QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256", nullptr));
        menu_viewer->setTitle(QCoreApplication::translate("MainWindow", "\350\247\206\345\233\276", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\345\200\215\346\225\260", nullptr));
        menu_account->setTitle(QCoreApplication::translate("MainWindow", "\350\264\246\346\210\267", nullptr));
        menu_help->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
