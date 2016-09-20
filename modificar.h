#ifndef MODIFICAR_H
#define MODIFICAR_H

#include <QDialog>
#include <QList>
#include <qmainwindow.h>
#include<QtCore>
#include<QtGui>

namespace Ui {
class modificar;
}

class modificar : public QDialog
{
    Q_OBJECT

public:
    explicit modificar(QWidget *parent = 0);
    ~modificar();
signals:
    void modificando(QString, QString, QString);

private slots:

    void on_pushButton_clicked();

private:
    Ui::modificar *ui;
};

#endif // MODIFICAR_H
