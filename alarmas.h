#ifndef ALARMAS_H
#define ALARMAS_H

#include <QDialog>
#include <QList>
#include <qmainwindow.h>
#include<QtCore>
#include<QtGui>


namespace Ui {
class alarmas;
}

class alarmas : public QDialog
{
    Q_OBJECT

public:
    explicit alarmas(QWidget *parent = 0);
    ~alarmas();

signals:
    void setalarma(QString, QString, QString);

private slots:
    void on_pushButton_clicked();

private:
    Ui::alarmas *ui;
};

#endif // ALARMAS_H
