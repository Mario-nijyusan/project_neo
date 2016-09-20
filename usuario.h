#ifndef USUARIO_H
#define USUARIO_H

#include <QDialog>
#include <QList>
#include <qmainwindow.h>
#include<QtCore>
#include<QtGui>

namespace Ui {
class usuario;
}

class usuario : public QDialog
{
    Q_OBJECT

public:
    explicit usuario(QWidget *parent = 0);
    ~usuario();
signals:
    void user_envio(QString);

private slots:
    void on_pushButton_clicked();

private:
    Ui::usuario *ui;
};

#endif // USUARIO_H
