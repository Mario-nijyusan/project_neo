#ifndef ELIMINAR2_H
#define ELIMINAR2_H

#include <QDialog>
#include <QList>
#include <qmainwindow.h>
#include<QtCore>
#include<QtGui>

namespace Ui {
class eliminar2;
}

class eliminar2 : public QDialog
{
    Q_OBJECT

public:
    explicit eliminar2(QWidget *parent = 0);
    ~eliminar2();
signals:
    void elim2(QString);

private slots:
    void on_pushButton_clicked();

private:
    Ui::eliminar2 *ui;
};

#endif // ELIMINAR2_H
