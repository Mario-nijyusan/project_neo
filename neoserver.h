#ifndef NEOSERVER_H
#define NEOSERVER_H

#include <QMainWindow>
#include<mainwindow.h>

namespace Ui {
class neoserver;
}

class neoserver : public QMainWindow
{
    Q_OBJECT

public:
    explicit neoserver(QWidget *parent = 0);
    ~neoserver();

private slots:
    void on_iniciar_clicked();

    void on_pushButton_clicked();

private:
    Ui::neoserver *ui;
};

#endif // NEOSERVER_H
