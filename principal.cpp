#include "principal.h"
#include "ui_principal.h"

#include <QtSql/QSql>
#include <QSqlDatabase>
#include <QSqlQuery>

#include <QtDebug>

int MASCULINO=0,FEMENINO=0;
//static int H=0;
principal::principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::principal)
{
    ui->setupUi(this);

 //   QString servername = "LOCALHOST\\SQLEXPRESS";
 //   QString dbname = "neo_prueba";

    /*QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        db.setDatabaseName("neo_prueba");
        db.setUserName("root");
        db.setPassword("root");
        bool ok = db.open();*/

 //  QSqlDatabase::removeDatabase("sales");   //cierre de base de datos
 //   MainWindow* principal= new MainWindow(this);

 //   connect(principal,SIGNAL(habilitando(QString)) ,this,SLOT(habilitado(QString)));

}

principal::~principal()
{
    delete ui;
}



/*void principal::habilitado(QString A){

    QByteArray texto;
    int J;

    texto.append(A);
    J=texto.toInt();
    if (J==1){
               H=1;
              }
    }*/

void principal::on_pushButton_3_clicked()
{
    MASCULINO=1;
    FEMENINO=0;
}


void principal::on_pushButton_4_clicked()
{
    FEMENINO=1;
    MASCULINO=0;
}


void principal::on_pushButton_clicked()
{



  QByteArray texto1,texto2,texto3,texto4,texto5,texto6,texto7;

  texto1.append(ui->spinBox->text());
  texto2.append(ui->lineEdit->text());
  texto3.append(ui->doubleSpinBox->text());
  texto4.append(ui->doubleSpinBox_2->text());
  texto5.append(ui->spinBox_2->text());
  texto6.append(ui->dateEdit->text());
  if(MASCULINO==1){
             texto7.append("1");
           }
   if(FEMENINO==1){
             texto7.append("2");
           }
//if(H==1){
   emit escribiendo(texto1,texto2,texto3,texto4,texto5,texto6,texto7);
//}if(H==0){
//            ui->label_12->setText("USUARIO NO HABILITADO");
//}
}

