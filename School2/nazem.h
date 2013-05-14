#ifndef NAZEM_H
#define NAZEM_H

#include <QMainWindow>

namespace Ui {
class nazem;
}

class nazem : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit nazem(QWidget *parent = 0);
    ~nazem();
    
private:
    Ui::nazem *ui;
};

#endif // NAZEM_H
