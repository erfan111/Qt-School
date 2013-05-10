
#include "mainwindow.h"

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
    QGroupBox* login_options = new QGroupBox("مشخصات کاربر");
    main_layout->addWidget(login_options);
    QVBoxLayout* login_options_layout = new QVBoxLayout;
    login_options->setLayout(login_options_layout);
    QRadioButton* role_nazem = new QRadioButton("ناظم");
    login_options_layout->addWidget(role_nazem);
    QRadioButton* role_moalem = new QRadioButton("معلم");
    login_options_layout->addWidget(role_moalem);
    QLabel* username_label = new QLabel("نام کاربری:");
    login_options_layout->addWidget(username_label);
    QLineEdit* username = new QLineEdit;
    login_options_layout->addWidget(username);
    QLabel* passwd_label = new QLabel("رمز عبور:");
    login_options_layout->addWidget(passwd_label);
    QLineEdit* passwd = new QLineEdit;
    login_options_layout->addWidget(passwd);
    QGroupBox* buttons = new QGroupBox;
    main_layout->addWidget(buttons);
    QHBoxLayout* buttons_layout = new QHBoxLayout;
    buttons->setLayout(buttons_layout);
    QPushButton* exit = new QPushButton("خروج");
    buttons_layout->addWidget(exit);
    QPushButton* enter = new QPushButton("ورود");
    buttons_layout->addWidget(enter);

}

MainWindow::~MainWindow()
{
    
}
