#include "nazem.h"
#include "ui_nazem.h"

nazem::nazem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::nazem)
{
    ui->setupUi(this);
}

nazem::~nazem()
{
    delete ui;
}
