#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QHostAddress>
#include <QList>
#include <QLCDNumber>
#include <principal.h>
#include <QtCore>
#include <QtGui>
#include <modificar.h>
#include <QDialog>
#include <QMediaPlayer>
#include <QUrl>
#include <QDebug>
#include <QAudio>
#include <alarmas.h>
#include <eliminar1.h>
#include <eliminar2.h>
#include <informacion1.h>
#include <informacion2.h>
#include <QDebug>
#include <usuario.h>
#include <usuario2.h>

namespace Ui{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
       // void habilitando(QString);

public slots:
        void conexion_nueva();
        void leer_socketcliente();
        void escrito(QString T, QString U,QString V, QString W, QString X, QString Y, QString Z);
        void modificado(QString A, QString B, QString C);
        void alarm(QString D, QString E, QString F);
        void borrar1(QString G);
        void borrar2(QString H);
        void user_recibido(QString I);
        void user_eliminado();


private slots:

void on_actionIngresar_Datos_triggered();

void on_actionModificar_Datos_triggered();

void on_ingresar_alarmas_triggered();

void on_actionEliminar_triggered();

void on_Eliminar_alarmas_triggered();

void on_actionAcerda_de_triggered();

void on_actionContactos_triggered();

void on_pushButton_clicked();

void on_pushButton_2_clicked();

void on_pushButton_3_clicked();

void on_pushButton_5_clicked();

void on_pushButton_6_clicked();

void on_pushButton_7_clicked();

void on_pushButton_13_clicked();

void on_pushButton_14_clicked();

void on_pushButton_15_clicked();

void on_pushButton_17_clicked();

void on_pushButton_18_clicked();

void on_pushButton_19_clicked();

void on_pushButton_21_clicked();

void on_pushButton_22_clicked();

void on_pushButton_23_clicked();

void on_pushButton_25_clicked();

void on_pushButton_26_clicked();

void on_pushButton_27_clicked();

void on_actionNuevo_Usuario_triggered();

void on_actionEliminar_Usuario_triggered();

private:
    Ui::MainWindow *ui;
    QTcpServer *tcpservidor;
    QTcpSocket *tcpcliente[6];
    QMediaPlayer*player[6];
    QTimer *timer[6];
};

#endif // MAINWINDOW_H
