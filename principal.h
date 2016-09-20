#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QDialog>
#include <QList>
#include <qmainwindow.h>
#include<QtCore>
#include<QtGui>
#include<mainwindow.h>
namespace Ui {
class principal;
}

class principal : public QDialog
{
    Q_OBJECT

public:
    explicit principal(QWidget *parent = 0);
    ~principal();

signals:
    void escribiendo(QString, QString, QString, QString, QString,QString,QString);

public slots:
   // void habilitado(QString);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::principal *ui;
};

#endif // PRINCIPAL_H
