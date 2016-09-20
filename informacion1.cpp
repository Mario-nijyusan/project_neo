#include "informacion1.h"
#include "ui_informacion1.h"

Informacion1::Informacion1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Informacion1)
{
    ui->setupUi(this);
}

Informacion1::~Informacion1()
{
    delete ui;
}
