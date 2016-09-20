#ifndef ELIMINAR1_H
#define ELIMINAR1_H

#include <QDialog>
#include <QList>
#include <qmainwindow.h>
#include<QtCore>
#include<QtGui>


namespace Ui {
class eliminar1;
}

class eliminar1 : public QDialog
{
    Q_OBJECT

public:
    explicit eliminar1(QWidget *parent = 0);
    ~eliminar1();
signals:
    void elim1(QString);

private slots:
    void on_pushButton_clicked();

private:
    Ui::eliminar1 *ui;
};

#endif // ELIMINAR1_H
