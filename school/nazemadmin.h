#ifndef NAZEMADMIN_H
#define NAZEMADMIN_H

#include <QMainWindow>
#include <QtSql>
#include <QSql>
#include <QTableView>
#include "mainwindow.h"

class NazemAdmin : public QMainWindow
{
    Q_OBJECT
public:
    explicit NazemAdmin(QMainWindow *parent = 0);
    QSqlQuery query;

    QTableView *tableView;
    QVBoxLayout* vertical_layout;

    
signals:
    
public slots:

private:
    QSqlTableModel* table1;
    QMainWindow *ui;
    MainWindow* m_w;
    
};

#endif // NAZEMADMIN_H
