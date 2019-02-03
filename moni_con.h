#ifndef MONI_CON_H
#define MONI_CON_H

#include <QMainWindow>

namespace Ui {
class Moni_Con;
}

class Moni_Con : public QMainWindow
{
    Q_OBJECT

public:
    explicit Moni_Con(QWidget *parent = 0);
    ~Moni_Con();

private:
    Ui::Moni_Con *ui;
};

#endif // MONI_CON_H
