#include "informacion2.h"
#include "ui_informacion2.h"
#include <QtCore>
#include <QtGui>


informacion2::informacion2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::informacion2)
{
    ui->setupUi(this);
}

informacion2::~informacion2()
{
    delete ui;
}
