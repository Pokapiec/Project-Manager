#include "gui/mainwindow.h"
#include "uml/uzytkownik.h"
#include "uml/praca.h"

#include <QApplication>
#include <QFile>
#include <QByteArray>
#include <uml/caplikacja.h>
#include <QString>
#include <QtDebug>

#include <fstream>
#include <iostream>
#include <deque>


using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    w.setStackOfWidgets();

//    for(Praca* u: listaPrac){
//        qDebug() << u->getDoZrobienia()<< u->wykonana<<u->getDoOceny()<<u->getTypPracy()<<u->getTytul();
//    }

     w.show();

    //Uzytkownik
    //apk.setListaUzytkownikow()

//    for(Uzytkownik* u :apk.getListaUzytkownikow())
//        cout<<u->login<<endl;
    return a.exec();
}
