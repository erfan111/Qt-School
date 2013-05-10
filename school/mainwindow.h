#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QRadioButton>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGroupBox>

class MainWindow : public QWidget
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QVBoxLayout* main_layout;
    //-------
    QLabel* login;
    //-------
    QGroupBox* login_options;
    QVBoxLayout* login_options_layout;
    QRadioButton* role_nazem;
    QRadioButton* role_moalem;
    QLabel* username_label;
    QLabel* passwd_label;
    QLineEdit* username;
    QLineEdit* passwd;
    QGroupBox* buttons;
    QHBoxLayout* buttons_layout;
    QPushButton* exit;
    QPushButton* enter;




};

#endif // MAINWINDOW_H
