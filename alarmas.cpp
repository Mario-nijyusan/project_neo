#include "alarmas.h"
#include "ui_alarmas.h"

alarmas::alarmas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::alarmas)
{
    ui->setupUi(this);
}

alarmas::~alarmas()
{
    delete ui;
}

void alarmas::on_pushButton_clicked()
{
    QByteArray texto,texto1,texto2,texto3,texto4;
    int N=0;
    texto3.append(ui->lineEdit->text());
    N=texto3.toInt();

    if(N==1234){
                texto.append(ui->spinBox->text());
                texto1.append(ui->spinBox_2->text());
                texto2.append(ui->spinBox_3->text());
                 emit setalarma(texto,texto1,texto2);
                texto4.append("OK ");
                ui->label_6->setText(texto4);
                }else{
                        texto4.append("ERROR");
                        ui->label_6->setText(texto4);

                      }
}
