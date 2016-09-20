#ifndef INFORMACION1_H
#define INFORMACION1_H

#include <QDialog>
#include <QList>
#include <qmainwindow.h>
#include<QtCore>
#include<QtGui>

namespace Ui {
class Informacion1;
}

class Informacion1 : public QDialog
{
    Q_OBJECT

public:
    explicit Informacion1(QWidget *parent = 0);
    ~Informacion1();

private:
    Ui::Informacion1 *ui;
};

#endif // INFORMACION1_H
