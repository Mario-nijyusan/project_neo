#include "eliminar1.h"
#include "ui_eliminar1.h"

eliminar1::eliminar1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::eliminar1)
{
    ui->setupUi(this);
}

eliminar1::~eliminar1()
{
    delete ui;
}

void eliminar1::on_pushButton_clicked()
{
    QByteArray texto;


     texto.append(ui->spinBox->text());


     emit elim1(texto);

}
