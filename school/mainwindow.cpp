#include <QtSql>
#include "mainwindow.h"
#include "nazemadmin.h"
#include <QMap>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout* main_layout = new QVBoxLayout;
    setLayout(main_layout);
    setWindowTitle("Login");
    //-------
    QLabel* login = new QLabel("لطفاً مشخصات خود را وارد کنید");
    main_layout->addWidget(login);
    //-------
    login_options = new QGroupBox("مشخصات کاربر");
    main_layout->addWidget(login_options);
    login_options_layout = new QVBoxLayout;
    login_options->setLayout(login_options_layout);
    role_nazem = new QRadioButton("ناظم");
    login_options_layout->addWidget(role_nazem);
    role_moalem = new QRadioButton("معلم");
    login_options_layout->addWidget(role_moalem);
    username_label = new QLabel("نام کاربری:");
    login_options_layout->addWidget(username_label);
    username = new QLineEdit;
    login_options_layout->addWidget(username);
    passwd_label = new QLabel("رمز عبور:");
    login_options_layout->addWidget(passwd_label);
    passwd = new QLineEdit;
    login_options_layout->addWidget(passwd);
    buttons = new QGroupBox;
    main_layout->addWidget(buttons);
    buttons_layout = new QHBoxLayout;
    buttons->setLayout(buttons_layout);
    exit = new QPushButton("خروج");
    buttons_layout->addWidget(exit);
    enter = new QPushButton("ورود");
    buttons_layout->addWidget(enter);
    login_info.insert("admin","admin");
    connect(enter,SIGNAL(clicked()),this,SLOT(login_check()));
    connect(exit,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    
}

void MainWindow::login_check() {
    qDebug() << "test";
    qDebug ()<< username->text();
    if (/*role_nazem->isChecked() &&*/ login_info.contains(username->text()))
    {
        qDebug("salam");
        if (login_info[username->text()] == passwd->text())
        {
            qDebug("salam2");
            NazemAdmin n;
            qDebug("salam3");
            n.show();
            this->close();
        }
    }
}
