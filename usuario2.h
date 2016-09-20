#ifndef USUARIO2_H
#define USUARIO2_H

#include <QDialog>
#include <QList>
#include <qmainwindow.h>
#include<QtCore>
#include<QtGui>

namespace Ui {
class usuario2;
}

class usuario2 : public QDialog
{
    Q_OBJECT
signals:
    void user_eliminar();

public:
    explicit usuario2(QWidget *parent = 0);
    ~usuario2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::usuario2 *ui;
};

#endif // USUARIO2_H
