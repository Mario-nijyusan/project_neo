#include "modificar.h"
#include "ui_modificar.h"

modificar::modificar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modificar)
{
    ui->setupUi(this);
}

modificar::~modificar()
{
    delete ui;
}

void modificar::on_pushButton_clicked()
{

    QByteArray texto,texto1,texto2;

     texto.append(ui->spinBox->text());
     texto1.append(ui->doubleSpinBox->text());
     texto2.append(ui->doubleSpinBox_2->text());


     emit modificando(texto,texto1,texto2);
}
