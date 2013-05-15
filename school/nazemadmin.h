#ifndef NAZEMADMIN_H
#define NAZEMADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <QSqlTableModel>
#include "mainwindow.h"

class NazemAdmin : public QWidget
{
    Q_OBJECT
public:
    QVBoxLayout* main_layout;
    QVBoxLayout* table_layout;
    QHBoxLayout* buttons_layout;
    QGroupBox * buttons;
    QGroupBox * table;
    explicit NazemAdmin(QWidget *parent = 0);
    QTableView *tableView;
    QPushButton *exit;
    QPushButton *add_student;
    //QPushButton *exit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QSqlTableModel *model;
    
signals:
    
public slots:

private:
    
};

#endif // NAZEMADMIN_H
