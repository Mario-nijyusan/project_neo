#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "principal.h"
#include "modificar.h"
#include "usuario.h"

 char A,B,C,D,E,F,G; static int H1=0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    tcpservidor = new QTcpServer (this);

    tcpservidor->setMaxPendingConnections(6);

    for(int i=0; i < tcpservidor->maxPendingConnections();i++)
    {
        tcpcliente[i]= new QTcpSocket (this);
        player[i]= new QMediaPlayer(this);

    }


   //tcpservidor-> listen(QHostAddress("192.168.43.252") , 15000); // para uso con el telefono APANDROID.
    tcpservidor-> listen(QHostAddress::LocalHost , 1234);          // para uso con la compu


    connect( tcpservidor, SIGNAL(newConnection()), this, SLOT(conexion_nueva()) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::conexion_nueva()
{
    static int j=0;
    tcpcliente[j]= tcpservidor->nextPendingConnection();

    connect(tcpcliente[j], SIGNAL(readyRead()), this, SLOT(leer_socketcliente()) );

    j++;

}


void MainWindow::leer_socketcliente()
{

    if(tcpcliente[0]->bytesAvailable() > 0)
    {
        QByteArray buffer;
        int a=0;

        buffer.resize(tcpcliente[0]->bytesAvailable());
        tcpcliente[0]->read(buffer.data(),buffer.size());
        a=buffer.toInt(0,10);
        if (a<(ui->lcdNumber_3->value())){
                                             ui->lcdNumber->display(QString(buffer));
                                             ui->lcdNumber->setStyleSheet("color:red;");
                                             ui->label_5->setStyleSheet("color:red;");
                                             if(!A){
                                                    player[0]->setMedia(QUrl::fromLocalFile("/home/agustin/cardio.mp3"));
                                                    player[0]->setVolume(100);
                                                    player[0]->play();}
                                                    }else if(a>(ui->lcdNumber_2->value())){
                                                                ui->lcdNumber->display(QString(buffer));
                                                                ui->lcdNumber->setStyleSheet("color:red;");
                                                                ui->label_5->setStyleSheet("color:red;");
                                                                if(!A){
                                                                        player[0]->setMedia(QUrl::fromLocalFile("/home/agustin/cardio.mp3"));
                                                                        player[0]->setVolume(100);
                                                                        player[0]->play();}
                                                                                          }
                                                                else{
                                                                        ui->lcdNumber->display(QString(buffer));
                                                                        ui->lcdNumber->setStyleSheet("color:black;");
                                                                        ui->label_5->setStyleSheet("color:black;");
                                                                        player[0]->stop();
                                                                     }
    }



    if(tcpcliente[1]->bytesAvailable() > 0)
    {
        QByteArray buffer;
        int b=0;

        buffer.resize(tcpcliente[1]->bytesAvailable());
        tcpcliente[1]->read(buffer.data(),buffer.size());
        b=buffer.toInt(0,10);
        if (b<(ui->lcdNumber_6->value())){
                                             ui->lcdNumber_4->display(QString(buffer));
                                             ui->lcdNumber_4->setStyleSheet("color:red;");
                                             ui->label_18->setStyleSheet("color:red;");
                                             if(!B){
                                                    player[1]->setMedia(QUrl::fromLocalFile("/home/agustin/cardio.mp3"));
                                                    player[1]->setVolume(100);
                                                    player[1]->play();}
                                                    }else if(b>(ui->lcdNumber_5->value())){
                                                                ui->lcdNumber_4->display(QString(buffer));
                                                                ui->lcdNumber_4->setStyleSheet("color:red;");
                                                                ui->label_18->setStyleSheet("color:red;");
                                                                if(!B){
                                                                        player[1]->setMedia(QUrl::fromLocalFile("/home/agustin/cardio.mp3"));
                                                                        player[1]->setVolume(100);
                                                                        player[1]->play();}
                                                                                          }
                                                                else{
                                                                        ui->lcdNumber_4->display(QString(buffer));
                                                                        ui->lcdNumber_4->setStyleSheet("color:black;");
                                                                        ui->label_18->setStyleSheet("color:black;");
                                                                        player[1]->stop();
                                                                     }
    }

    if(tcpcliente[2]->bytesAvailable() > 0)
    {
        QByteArray buffer;
        int c=0;

        buffer.resize(tcpcliente[2]->bytesAvailable());
        tcpcliente[2]->read(buffer.data(),buffer.size());
        c=buffer.toInt(0,10);
        if (c<(ui->lcdNumber_12->value())){
                                             ui->lcdNumber_10->display(QString(buffer));
                                             ui->lcdNumber_10->setStyleSheet("color:red;");
                                             ui->label_44->setStyleSheet("color:red;");
                                             if(!C){
                                                    player[2]->setMedia(QUrl::fromLocalFile("/home/agustin/cardio.mp3"));
                                                    player[2]->setVolume(100);
                                                    player[2]->play();}
                                                    }else if(c>(ui->lcdNumber_11->value())){
                                                                ui->lcdNumber_10->display(QString(buffer));
                                                                ui->lcdNumber_10->setStyleSheet("color:red;");
                                                                ui->label_44->setStyleSheet("color:red;");
                                                                if(!C){
                                                                        player[2]->setMedia(QUrl::fromLocalFile("/home/agustin/cardio.mp3"));
                                                                        player[2]->setVolume(100);
                                                                        player[2]->play();}
                                                                                          }
                                                                else{
                                                                        ui->lcdNumber_10->display(QString(buffer));
                                                                        ui->lcdNumber_10->setStyleSheet("color:black;");
                                                                        ui->label_44->setStyleSheet("color:black;");
                                                                        player[2]->stop();
                                                                     }
    }
    if(tcpcliente[3]->bytesAvailable() > 0)
    {
        QByteArray buffer;
        int d=0;

        buffer.resize(tcpcliente[3]->bytesAvailable());
        tcpcliente[3]->read(buffer.data(),buffer.size());
        d=buffer.toInt(0,10);
        if (d<(ui->lcdNumber_15->value())){
                                             ui->lcdNumber_13->display(QString(buffer));
                                             ui->lcdNumber_13->setStyleSheet("color:red;");
                                             ui->label_57->setStyleSheet("color:red;");
                                             if(!D){
                                                    player[3]->setMedia(QUrl::fromLocalFile("/home/agustin/cardio.mp3"));
                                                    player[3]->setVolume(100);
                                                    player[3]->play();}
                                                    }else if(d>(ui->lcdNumber_14->value())){
                                                                ui->lcdNumber_13->display(QString(buffer));
                                                                ui->lcdNumber_13->setStyleSheet("color:red;");
                                                                ui->label_57->setStyleSheet("color:red;");
                                                                if(!D){
                                                                        player[3]->setMedia(QUrl::fromLocalFile("/home/agustin/cardio.mp3"));
                                                                        player[3]->setVolume(100);
                                                                        player[3]->play();}
                                                                                          }
                                                                else{
                                                                        ui->lcdNumber_13->display(QString(buffer));
                                                                        ui->lcdNumber_13->setStyleSheet("color:black;");
                                                                        ui->label_57->setStyleSheet("color:black;");
                                                                        player[3]->stop();
                                                                     }
    }
    if(tcpcliente[4]->bytesAvailable() > 0)
    {
        QByteArray buffer;
        int e=0;

        buffer.resize(tcpcliente[4]->bytesAvailable());
        tcpcliente[4]->read(buffer.data(),buffer.size());
        e=buffer.toInt(0,10);
        if (e<(ui->lcdNumber_18->value())){
                                             ui->lcdNumber_16->display(QString(buffer));
                                             ui->lcdNumber_16->setStyleSheet("color:red;");
                                             ui->label_70->setStyleSheet("color:red;");
                                             if(!E){
                                                    player[4]->setMedia(QUrl::fromLocalFile("/home/agustin/cardio.mp3"));
                                                    player[4]->setVolume(100);
                                                    player[4]->play();}
                                                    }else if(e>(ui->lcdNumber_17->value())){
                                                                ui->lcdNumber_16->display(QString(buffer));
                                                                ui->lcdNumber_16->setStyleSheet("color:red;");
                                                                ui->label_70->setStyleSheet("color:red;");
                                                                if(!E){
                                                                        player[4]->setMedia(QUrl::fromLocalFile("/home/agustin/cardio.mp3"));
                                                                        player[4]->setVolume(100);
                                                                        player[4]->play();}
                                                                                          }
                                                                else{
                                                                        ui->lcdNumber_16->display(QString(buffer));
                                                                        ui->lcdNumber_16->setStyleSheet("color:black;");
                                                                        ui->label_70->setStyleSheet("color:black;");
                                                                        player[4]->stop();
                                                                     }
    }


    if(tcpcliente[5]->bytesAvailable() > 0)
    {
        QByteArray buffer;
        int f=0;

        buffer.resize(tcpcliente[5]->bytesAvailable());
        tcpcliente[5]->read(buffer.data(),buffer.size());
        f=buffer.toInt(0,10);
        if (f<(ui->lcdNumber_21->value())){
                                             ui->lcdNumber_19->display(QString(buffer));
                                             ui->lcdNumber_19->setStyleSheet("color:red;");
                                             ui->label_83->setStyleSheet("color:red;");
                                             if(!F){
                                                    player[5]->setMedia(QUrl::fromLocalFile("/home/agustin/cardio.mp3"));
                                                    player[5]->setVolume(100);
                                                    player[5]->play();}
                                                    }else if(f>(ui->lcdNumber_20->value())){
                                                                ui->lcdNumber_19->display(QString(buffer));
                                                                ui->lcdNumber_19->setStyleSheet("color:red;");
                                                                ui->label_83->setStyleSheet("color:red;");
                                                                if(!F){
                                                                        player[5]->setMedia(QUrl::fromLocalFile("/home/agustin/cardio.mp3"));
                                                                        player[5]->setVolume(100);
                                                                        player[5]->play();}
                                                                                          }
                                                                else{
                                                                        ui->lcdNumber_19->display(QString(buffer));
                                                                        ui->lcdNumber_19->setStyleSheet("color:black;");
                                                                        ui->label_83->setStyleSheet("color:black;");
                                                                        player[5]->stop();
                                                                     }
    }

}



void MainWindow::escrito(QString T, QString U, QString V, QString W, QString X, QString Y, QString Z)
{
   QByteArray texto1,texto2,texto3,texto4,texto5,texto6,texto7;
   int a,b;
if(H1==1){
   texto1.append(T);
   a=texto1.toInt();

   texto2.append("Apellido: ");
   texto2.append(U);

   texto3.append("Peso: ");
   texto3.append(V);
   texto3.append(" Kg.");

   texto4.append("Altura: ");
   texto4.append(W);
   texto4.append(" mts.");

   texto5.append("Edad Gestacional: ");
   texto5.append(X);
   texto5.append(" semanas.");

   texto6.append("Fecha de Nacimiento: ");
   texto6.append(Y);


   texto7.append(Z);
   b=texto7.toInt();

   if(a==1){
            if (b==1){
                      texto7.clear();
                      texto7.append("Genero: Masculino ");
                      ui->tabWidget->setStyleSheet("background-color:cyan;");
                     }else if(b==2){
                      texto7.clear();
                      texto7.append("Genero: Femenino ");
                      ui->tabWidget->setStyleSheet("background-color:pink;");
                                     }
                      ui->label_2->setText(texto2);
                      ui->label_8->setText(texto3);
                      ui->label_9->setText(texto4);
                      ui->label_11->setText(texto5);
                      ui->label_13->setText(texto6);
                      ui->label_10->setText(texto7);
   }else if(a==2){
             if (b==1){
                      texto7.clear();
                      texto7.append("Genero: Masculino ");
                      ui->tabWidget_2->setStyleSheet("background-color:cyan;");
                      }else if(b==2){
                      texto7.clear();
                      texto7.append("Genero: Femenino ");
                      ui->tabWidget_2->setStyleSheet("background-color:pink;");
                                }
                      ui->label_15->setText(texto2);
                      ui->label_21->setText(texto3);
                      ui->label_22->setText(texto4);
                      ui->label_24->setText(texto5);
                      ui->label_26->setText(texto6);
                      ui->label_23->setText(texto7);
   }else if(a==3){
             if (b==1){
                      texto7.clear();
                      texto7.append("Genero: Masculino ");
                      ui->tabWidget_3->setStyleSheet("background-color:cyan;");
                      }else if(b==2){
                      texto7.clear();
                      texto7.append("Genero: Femenino ");
                      ui->tabWidget_3->setStyleSheet("background-color:pink;");
                                }
                      ui->label_41->setText(texto2);
                      ui->label_47->setText(texto3);
                      ui->label_48->setText(texto4);
                      ui->label_50->setText(texto5);
                      ui->label_52->setText(texto6);
                      ui->label_49->setText(texto7);
   }else if(a==4){
             if (b==1){
                      texto7.clear();
                      texto7.append("Genero: Masculino ");
                      ui->tabWidget_4->setStyleSheet("background-color:cyan;");
                      }else if(b==2){
                      texto7.clear();
                      texto7.append("Genero: Femenino ");
                      ui->tabWidget_4->setStyleSheet("background-color:pink;");
                                }
                      ui->label_54->setText(texto2);
                      ui->label_60->setText(texto3);
                      ui->label_61->setText(texto4);
                      ui->label_63->setText(texto5);
                      ui->label_65->setText(texto6);
                      ui->label_62->setText(texto7);
   }else if(a==5){
             if (b==1){
                      texto7.clear();
                      texto7.append("Genero: Masculino ");
                      ui->tabWidget_5->setStyleSheet("background-color:cyan;");
                      }else if(b==2){
                      texto7.clear();
                      texto7.append("Genero: Femenino ");
                      ui->tabWidget_5->setStyleSheet("background-color:pink;");
                                }

                      ui->label_67->setText(texto2);
                      ui->label_73->setText(texto3);
                      ui->label_74->setText(texto4);
                      ui->label_76->setText(texto5);
                      ui->label_78->setText(texto6);
                      ui->label_75->setText(texto7);
    }else if(a==6){
             if (b==1){
                      texto7.clear();
                      texto7.append("Genero: Masculino ");
                      ui->tabWidget_6->setStyleSheet("background-color:cyan;");
                      }else if(b==2){
                      texto7.clear();
                      texto7.append("Genero: Femenino ");
                      ui->tabWidget_6->setStyleSheet("background-color:pink;");
                                }
                      ui->label_80->setText(texto2);
                      ui->label_86->setText(texto3);
                      ui->label_87->setText(texto4);
                      ui->label_89->setText(texto5);
                      ui->label_91->setText(texto6);
                      ui->label_88->setText(texto7);
                  }
}
}



void MainWindow::modificado(QString A, QString B, QString C)
{
   QByteArray texto,texto1,texto2;
   int a=0;

   texto1.append("Peso: ");
   texto2.append("Altura: ");

   texto.append(A);
   a=texto.toInt();
   if(H1==1){
    if(a==1){
               texto1.append(B);
               texto1.append(" Kg.");
               ui->label_8->setText(texto1);
               texto2.append(C);
               texto2.append(" cm.");
               ui->label_9->setText(texto2);
            }

    if(a==2){
               texto1.append(B);
               texto1.append(" Kg.");
               ui->label_21->setText(texto1);
               texto2.append(C);
               texto2.append(" cm.");
               ui->label_22->setText(texto2);
            }

    if(a==3){
               texto1.append(B);
               texto1.append(" Kg.");
               ui->label_47->setText(texto1);
               texto2.append(C);
               texto2.append(" cm.");
               ui->label_48->setText(texto2);
            }

    if(a==4){
               texto1.append(B);
               texto1.append(" Kg.");
               ui->label_60->setText(texto1);
               texto2.append(C);
               texto2.append(" cm.");
               ui->label_61->setText(texto2);
            }

    if(a==5){
               texto1.append(B);
               texto1.append(" Kg.");
               ui->label_73->setText(texto1);
               texto2.append(C);
               texto2.append(" cm.");
               ui->label_74->setText(texto2);
            }

    if(a==6){
               texto1.append(B);
               texto1.append(" Kg.");
               ui->label_86->setText(texto1);
               texto2.append(C);
               texto2.append(" cm.");
               ui->label_87->setText(texto2);
            }

}
}

void MainWindow::alarm(QString D,QString E, QString F)
{
    QByteArray texto,texto1,texto2;
    int a=0;
    texto.append(D);
    a=texto.toInt();
if(H1==1){
    if(a==1){
                    texto1.append(E);
                    ui->lcdNumber_2->display(QString(texto1));
                    texto2.append(F);
                    ui->lcdNumber_3->display(QString(texto2));
            }
    if(a==2){
                    texto1.append(E);
                    ui->lcdNumber_5->display(QString(texto1));
                    texto2.append(F);
                    ui->lcdNumber_6->display(QString(texto2));
            }
    if(a==3){
                    texto1.append(E);
                    ui->lcdNumber_11->display(QString(texto1));
                    texto2.append(F);
                    ui->lcdNumber_12->display(QString(texto2));
            }
    if(a==4){
                    texto1.append(E);
                    ui->lcdNumber_14->display(QString(texto1));
                    texto2.append(F);
                    ui->lcdNumber_15->display(QString(texto2));
            }
    if(a==5){
                    texto1.append(E);
                    ui->lcdNumber_17->display(QString(texto1));
                    texto2.append(F);
                    ui->lcdNumber_18->display(QString(texto2));
            }
    if(a==6){
                    texto1.append(E);
                    ui->lcdNumber_20->display(QString(texto1));
                    texto2.append(F);
                    ui->lcdNumber_21->display(QString(texto2));
            }
}
}

void MainWindow::borrar1(QString G)
{
    QByteArray texto,texto1,texto2,texto3,texto4,texto5,texto6,texto7;

    int a;
    texto.append(G);
    a=texto.toInt();
if(H1==1){
    texto1.append("Incubadora N° ");
    texto2.append("Apellido: ");
    texto3.append("Peso: ");
    texto4.append("Altura: ");
    texto5.append("Edad Gestacional: ");
    texto6.append("Fecha de Nacimiento: ");
    texto7.append("Genero: ");

    if(a==1){
                ui->label->setText(texto1);
                ui->label_2->setText(texto2);
                ui->label_8->setText(texto3);
                ui->label_9->setText(texto4);
                ui->label_11->setText(texto5);
                ui->label_13->setText(texto6);
                ui->label_10->setText(texto7);
                ui->tabWidget->setStyleSheet("background-color:#FEFEFE;");
            }
    if(a==2){
                ui->label_15->setText(texto2);
                ui->label_21->setText(texto3);
                ui->label_22->setText(texto4);
                ui->label_24->setText(texto5);
                ui->label_26->setText(texto6);
                ui->label_23->setText(texto7);
                ui->tabWidget_2->setStyleSheet("background-color:#FEFEFE;");
            }
    if(a==3){
                ui->label_41->setText(texto2);
                ui->label_47->setText(texto3);
                ui->label_48->setText(texto4);
                ui->label_50->setText(texto5);
                ui->label_52->setText(texto6);
                ui->label_49->setText(texto7);
                ui->tabWidget_3->setStyleSheet("background-color:#FEFEFE;");
            }
    if(a==4){
                ui->label_54->setText(texto2);
                ui->label_60->setText(texto3);
                ui->label_61->setText(texto4);
                ui->label_63->setText(texto5);
                ui->label_65->setText(texto6);
                ui->label_62->setText(texto7);
                ui->tabWidget_4->setStyleSheet("background-color:#FEFEFE;");
            }
    if(a==5){
                ui->label_67->setText(texto2);
                ui->label_73->setText(texto3);
                ui->label_74->setText(texto4);
                ui->label_76->setText(texto5);
                ui->label_78->setText(texto6);
                ui->label_75->setText(texto7);
                ui->tabWidget_5->setStyleSheet("background-color:#FEFEFE;");
            }
    if(a==6){
                ui->label_80->setText(texto2);
                ui->label_86->setText(texto3);
                ui->label_87->setText(texto4);
                ui->label_89->setText(texto5);
                ui->label_91->setText(texto6);
                ui->label_88->setText(texto7);
                ui->tabWidget_6->setStyleSheet("background-color:#FEFEFE;");
            }
}
}

void MainWindow::borrar2(QString H)
{
    QByteArray texto;
    int a;
    texto.append(H);
    a=texto.toInt();
if(H1==1){
    if(a==1){
                 ui->lcdNumber_2->display("0");
                 ui->lcdNumber_3->display("0");
            }
    if(a==2){
                 ui->lcdNumber_5->display("0");
                 ui->lcdNumber_6->display("0");
            }
    if(a==3){
                 ui->lcdNumber_11->display("0");
                 ui->lcdNumber_12->display("0");
            }
    if(a==4){
                 ui->lcdNumber_14->display("0");
                 ui->lcdNumber_15->display("0");
            }
    if(a==5){
                 ui->lcdNumber_17->display("0");
                 ui->lcdNumber_18->display("0");
            }
    if(a==6){
                 ui->lcdNumber_20->display("0");
                 ui->lcdNumber_21->display("0");
            }
}
}


void MainWindow::user_recibido(QString I)
{
    QByteArray texto1;

    texto1.append("Dr/Dra: ");
    texto1.append(I);//nombre del doctor.
    ui->label_27->setText(texto1);
    H1=1;
  //  texto2.append("1");

//    emit habilitando(texto2);
}


void MainWindow::user_eliminado()
{
    QByteArray texto;

    texto.append("Dr/Dra:                    ");
    ui->label_27->setText(texto);
    H1=0;

}





















//***************************************************************************************************************//
//***************************************************************************************************************//
//***************************************************************************************************************//
//***************************************************************************************************************//
//*********************************ACTION AND SIGNAL ************************************************************//
//***************************************************************************************************************//
//***************************************************************************************************************//
//***************************************************************************************************************//
//***************************************************************************************************************//
//***************************************************************************************************************//




void MainWindow::on_actionNuevo_Usuario_triggered()
{

    usuario *Nuevo_Usuario= new usuario;
    Nuevo_Usuario->setModal(true);
    Nuevo_Usuario->show();
    connect(Nuevo_Usuario,SIGNAL(user_envio(QString)) ,this,SLOT(user_recibido(QString)));
}

void MainWindow::on_actionEliminar_Usuario_triggered()
{
    usuario2 *Eliminar_Usuario= new usuario2;
    Eliminar_Usuario->setModal(true);
    Eliminar_Usuario->show();
    connect(Eliminar_Usuario,SIGNAL(user_eliminar()) ,this,SLOT(user_eliminado()));

}


void MainWindow::on_actionIngresar_Datos_triggered()
{
    principal *Ingresar_datos= new principal(this);


    Ingresar_datos->setModal(true);
    Ingresar_datos->setVisible(true);

    connect(Ingresar_datos,SIGNAL(escribiendo(QString,QString,QString,QString,QString,QString,QString)) ,this,SLOT(escrito(QString,QString,QString,QString,QString,QString,QString)));
}



void MainWindow::on_actionModificar_Datos_triggered()
{
    modificar *Modificar_Datos= new modificar(this);

    Modificar_Datos->setModal(true);
    Modificar_Datos->setVisible(true);

    connect(Modificar_Datos,SIGNAL(modificando(QString,QString,QString)),this,SLOT(modificado(QString,QString,QString)));
}

void MainWindow::on_ingresar_alarmas_triggered()
{
    alarmas *ingresar_alarmas= new alarmas(this);

    ingresar_alarmas->setModal(true);
    ingresar_alarmas->setVisible(true);

    connect(ingresar_alarmas,SIGNAL(setalarma(QString,QString,QString)),this,SLOT(alarm(QString,QString,QString)));
}

void MainWindow::on_actionEliminar_triggered()
{
    eliminar1 *actionEliminar= new eliminar1(this);
    actionEliminar->setModal(true);
    actionEliminar->setVisible(true);

    connect(actionEliminar,SIGNAL(elim1(QString)),this,SLOT(borrar1(QString)));

}

void MainWindow::on_Eliminar_alarmas_triggered()
{
    eliminar2 *Eliminar_alarmas= new eliminar2(this);
    Eliminar_alarmas->setModal(true);
    Eliminar_alarmas->setVisible(true);

    connect(Eliminar_alarmas,SIGNAL(elim2(QString)),this,SLOT(borrar2(QString)));
}

void MainWindow::on_actionAcerda_de_triggered()
{
    Informacion1 *actionAcerca_de= new Informacion1(this);
    actionAcerca_de->setModal(true);
    actionAcerca_de->setVisible(true);
}

void MainWindow::on_actionContactos_triggered()
{
    informacion2*actionContactos= new informacion2(this);
    actionContactos->setModal(true);
    actionContactos->setVisible(true);
}


//incubadora N°1

void MainWindow::on_pushButton_clicked()
{
player[0]->stop();
static int a=0;
A=!A;
if(a==0){
         ui->pushButton->setStyleSheet("background-color:#EC8282;");
         a=1;
       }else if(a==1){
                     ui->pushButton->setStyleSheet("background-color:#FEFEFE;");
                     a=0;
                    }
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->setEnabled(true);
    ui->textEdit->setStyleSheet("background-color:#FEFEFE;");
}
void MainWindow::on_pushButton_3_clicked()
{
    ui->textEdit->setEnabled(false);
}

// incubadora N°2


void MainWindow::on_pushButton_5_clicked()
{
    player[1]->stop();
    static int b=0;
    B=!B;
    if(b==0){
             ui->pushButton_5->setStyleSheet("background-color:#EC8282;");
             b=1;
           }else if(b==1){
                         ui->pushButton_5->setStyleSheet("background-color:#FEFEFE;");
                         b=0;
                        }
}

void MainWindow::on_pushButton_6_clicked()
{
     ui->textEdit_2->setEnabled(true);
     ui->textEdit_2->setStyleSheet("background-color:#FEFEFE;");
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->textEdit_2->setEnabled(false);
}


//incubadora N°3



void MainWindow::on_pushButton_13_clicked()
{
    player[2]->stop();
    static int c=0;
    C=!C;
    if(c==0){
             ui->pushButton_13->setStyleSheet("background-color:#EC8282;");
             c=1;
           }else if(c==1){
                         ui->pushButton_13->setStyleSheet("background-color:#FEFEFE;");
                         c=0;
                        }
}

void MainWindow::on_pushButton_14_clicked()
{
   ui->textEdit_4->setEnabled(true);
   ui->textEdit_4->setStyleSheet("background-color:#FEFEFE;");
}

void MainWindow::on_pushButton_15_clicked()
{
    ui->textEdit_4->setEnabled(false);
}

// incubadora N°4


void MainWindow::on_pushButton_17_clicked()
{
    player[3]->stop();
    static int d=0;
    D=!D;
    if(d==0){
             ui->pushButton_17->setStyleSheet("background-color:#EC8282;");
             d=1;
           }else if(d==1){
                         ui->pushButton_17->setStyleSheet("background-color:#FEFEFE;");
                         d=0;
                        }
}

void MainWindow::on_pushButton_18_clicked()
{
    ui->textEdit_5->setEnabled(true);
    ui->textEdit_5->setStyleSheet("background-color:#FEFEFE;");
}

void MainWindow::on_pushButton_19_clicked()
{
    ui->textEdit_5->setEnabled(false);
}


//incubadora N°5
void MainWindow::on_pushButton_21_clicked()
{
    player[4]->stop();
    static int e=0;
    E=!E;
    if(e==0){
             ui->pushButton_21->setStyleSheet("background-color:#EC8282;");
             e=1;
           }else if(e==1){
                         ui->pushButton_21->setStyleSheet("background-color:#FEFEFE;");
                         e=0;
    }
}

void MainWindow::on_pushButton_22_clicked()
{
    ui->textEdit_6->setEnabled(true);
    ui->textEdit_6->setStyleSheet("background-color:#FEFEFE;");
}

void MainWindow::on_pushButton_23_clicked()
{
     ui->textEdit_6->setEnabled(false);
}


//incubadora N°6

void MainWindow::on_pushButton_25_clicked()
{
    player[5]->stop();
    static int f=0;
    F=!F;
    if(f==0){
             ui->pushButton_25->setStyleSheet("background-color:#EC8282;");
             f=1;
           }else if(f==1){
                         ui->pushButton_25->setStyleSheet("background-color:#FEFEFE;");
                         f=0;
    }
}

void MainWindow::on_pushButton_26_clicked()
{
    ui->textEdit_7->setEnabled(true);
    ui->textEdit_7->setStyleSheet("background-color:#FEFEFE;");
}

void MainWindow::on_pushButton_27_clicked()
{
    ui->textEdit_7->setEnabled(false);
}





