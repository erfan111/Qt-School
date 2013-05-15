#include "nazemadmin.h"
#include <QDebug>

NazemAdmin::NazemAdmin(QWidget *parent) :
    QWidget(parent)


{
    main_layout = new QVBoxLayout;
    table_layout = new QVBoxLayout;
    buttons_layout = new QHBoxLayout;
    buttons = new QGroupBox;
    table = new QGroupBox;
    qDebug() << "init done0";
    buttons->setLayout(buttons_layout);
    main_layout->addWidget(buttons);
    table->setLayout(table_layout);
    main_layout->addWidget(table);
    //Admin->resize(666, 403);
    tableView = new QTableView;
    table_layout->addWidget(tableView);
    exit = new QPushButton("خروج");
    buttons_layout->addWidget(exit);
    add_student = new QPushButton("دانش آموز جدید");
    buttons_layout->addWidget(add_student);
    qDebug() << "init done";
//    mainToolBar = new QToolBar;
//    mainToolBar->setObjectName("mainToolBar");
//    NazemAdmin::addToolBar(Qt::TopToolBarArea, mainToolBar);
//    statusBar = new QStatusBar;
//    statusBar->setObjectName("statusBar");
//    NazemAdmin::setStatusBar(statusBar);

    model = new QSqlTableModel();
    model->setTable("students");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();
    tableView->setModel(model);
    qDebug() << "init done2";


    setLayout(main_layout);
}
