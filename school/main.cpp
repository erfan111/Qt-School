#include "mainwindow.h"
#include "nazemadmin.h"
#include <QApplication>
#include <QtSql>
#include <QSqlQuery>

int main(int argc, char *argv[])
{
    QSqlDatabase data = QSqlDatabase::addDatabase("QSQLITE");
    data.setDatabaseName("SchoolDatabase.db");
    data.open();
    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS students(Number integer,Name text,Grade FLOAT,Enzebat Float)");
    query.exec("CREATE TABLE IF NOT EXISTS nazemlogin(username TEXT, password TEXT");
    //query.exec("INSERT INTO nazemlogin VALUES('admin','admin')");
    //query.exec("INSERT INTO students VALUES('ERFAN','20')");
    data.commit();
    QApplication a(argc, argv);
    MainWindow w;
    NazemAdmin n;


    w.show();
    
    return a.exec();
}
