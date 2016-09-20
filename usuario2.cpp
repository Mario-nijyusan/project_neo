#include "usuario2.h"
#include "ui_usuario2.h"

usuario2::usuario2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::usuario2)
{
    ui->setupUi(this);
}

usuario2::~usuario2()
{
    delete ui;
}

void usuario2::on_pushButton_clicked()
{
    QByteArray texto1;
    int a;
    texto1.append(ui->lineEdit->text());
    a=texto1.toInt();
    if(a==12345){
                   emit user_eliminar();
                   close();
                 } else{
                        ui->label_5->setText("CONTRASEÑA INCORRECTA");
                        ui->label_5->setStyleSheet("color:red;");
                       }
}
