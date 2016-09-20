#include "neoserver.h"
#include "ui_neoserver.h"

neoserver::neoserver(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::neoserver)
{
    ui->setupUi(this);
}

neoserver::~neoserver()
{
    delete ui;
}

void neoserver::on_iniciar_clicked()
{
    MainWindow *iniciar= new MainWindow(this);
    // iniciar->show();

    iniciar->setVisible(true);

}

void neoserver::on_pushButton_clicked()
{
    close();
}
