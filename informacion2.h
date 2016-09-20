#ifndef INFORMACION2_H
#define INFORMACION2_H

#include <QDialog>
#include <QList>
#include <qmainwindow.h>
#include<QtCore>
#include<QtGui>

namespace Ui {
class informacion2;
}

class informacion2 : public QDialog
{
    Q_OBJECT

public:
    explicit informacion2(QWidget *parent = 0);
    ~informacion2();

private:
    Ui::informacion2 *ui;
};

#endif // INFORMACION2_H
