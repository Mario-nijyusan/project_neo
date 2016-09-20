#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QSqlDatabase>
#include <QSqlQuery>


#include <QSqlError>
#include <QPluginLoader>

#include <QtDebug>


#include <qtextstream.h>
#include <iostream>

#include "usuario.h"
#include "ui_usuario.h"

using namespace std;

usuario::usuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::usuario)
{
    ui->setupUi(this);
}

usuario::~usuario()
{
    delete ui;
}

void usuario::on_pushButton_clicked()
{
    QByteArray texto1,texto2;
    int a;

    QTextStream cout(stdout, QIODevice::WriteOnly);

    //QSqlQuery query;

    texto1.append(ui->lineEdit->text());
    texto2.append(ui->lineEdit_2->text());

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL", "neo_prueba");
        db.setHostName("localhost");
        db.setPort(3306);
        db.setDatabaseName("neo_prueba");
        db.setUserName("root");
        db.setPassword("root");
        qDebug()<<db.open();

        //bool ok = db.open();

   /*if ( db.open() ) {
       cout << "database open\n";

    //QString qry = QString("SELECT u.* FROM neo_prueba.usuarios where u.alias = 'IngAgus'");

    //query.prepare(qry);

       QSqlQuery query("SELECT u.* FROM neo_prueba.usuarios where u.alias = 'IngAgus'");


            if ( !query.isActive() )
                cout << "Query Error" + query.lastError().text()
                     << endl;
            else while (query.next()) {
                    int Id = query.value(0).toInt();
                    QString word = query.value(1).toString();
                    cout << QString( "%1\t%2\n").arg( Id).arg( word );
                    }
            db.close();
   }
      else
          //--- something went wrong ---
          cout << "Error opening database\n";

      //return 0;*/
  }

    /*if (query.exec())
    {
        int count = query.result(); //<<<Where I'm stuck
        qDebug() << count;
        for ( int i = 0; i < count; i++)
        {
            //create labels for each customer
            QLabel *label = new QLabel(QString());
            QCheckBox *chkbox = new QCheckBox;

            Ui::MainWindow *ui;

            ui->gridLayout->addWidget(label,0,0);
            ui->gridLayout->addWidget(chkbox,0,1);

        }
    }
    else
    {
        query.lastError();
    }*/

    //a=texto2.toInt();
    //if(a==12345){
    //               emit user_envio(texto1);
    //               close();
    //             } else{
    //                    ui->label_5->setText("CONTRASEÑA INCORRECTA");
    //                    ui->label_5->setStyleSheet("color:red;");
    //                   }
//}

  //ui->Widget->setText(texto); para usarlo en el futuro.
