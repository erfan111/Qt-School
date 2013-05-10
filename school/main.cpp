#include "mainwindow.h"
#include "nazemadmin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    NazemAdmin n;
    QSqlDatabase data = QSqlDatabase::addDatabase("QSQLITE");
    data.setDatabaseName("FundDb");
    data.open();
    n.show();
    
    return a.exec();
}
