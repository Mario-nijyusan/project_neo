#include "eliminar2.h"
#include "ui_eliminar2.h"

eliminar2::eliminar2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::eliminar2)
{
    ui->setupUi(this);
}

eliminar2::~eliminar2()
{
    delete ui;
}

void eliminar2::on_pushButton_clicked()
{
    QByteArray texto,texto1,texto2;

    int N;

     texto.append(ui->spinBox->text());
     texto1.append(ui->lineEdit->text());

     N=texto1.toInt();

        if(N==1234){
                    emit elim2(texto);
                    texto2.append("OK ");
                    ui->label_4->setText(texto2);

                    }else{
                            texto2.append("ERROR");
                            ui->label_4->setText(texto2);

                          }
}
