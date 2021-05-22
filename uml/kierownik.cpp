#include "uml/kierownik.h"
#include <deque>
#include <QFile>
#include <QDebug>


using std::deque;
using std::string;

Kierownik::Kierownik(){

}

deque<Projekt*> Kierownik::stworzProjekt(deque<Projekt*> listaProjektow){
    Projekt *p = new Projekt;
    //Przydzielenie atrybutów projektowi, warto dodac je w atrybutach funkcji
    listaProjektow.push_back(p);
    return listaProjektow;
}

float Kierownik::sprawdzPostepy(deque<Pracownik*> listaPracownikow){
    int ileWykonanych = 0;
    int ileCalosciowo = 0;
    for (Pracownik *p:listaPracownikow){
        ileCalosciowo += p->przydzielonePrace.size();
        for (Praca* i:p->przydzielonePrace){
            if (i->wykonana != "false"){
                ileWykonanych++;
                }
            }
        }
    //Procent wykonanych prac w firmie
    return (ileWykonanych/ileCalosciowo)*100;
}

void Kierownik::sprawdzStatystykiPracy(){

}

void Kierownik::przydzielPrace(Praca *doDodania,Pracownik *jemuDodajemyPrace ,deque<Pracownik*> listaPracownikow){
    for(Pracownik *p:listaPracownikow){
        if(p->login == jemuDodajemyPrace->login){
            (p->przydzielonePrace).push_back(doDodania);
        }
    }
}
//deque<Praca*> Kierownik::sprawdzBrakiWProjekcie(){
//    deque<Praca*> braki;
//    for (Pracownik *p:listaPracownikow){
//        for (Praca* i:p->przydzielonePrace){
//            if (i->wykonana != "false"){
//                braki.push_back(i);
//                }
//            }
//        }
//    return braki;
//}

deque<Projekt*> Kierownik::wczytajListeProjektow(QString fileName){
    deque<Projekt*> lP;
    QFile file(fileName);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug()<<"couldnt open file";
    }
    else{
        QTextStream in(&file);
        QString text;
        while(!in.atEnd()){
            text = in.readLine();
            QStringList pop = text.split(" ");
            Projekt *p = new Projekt;
            int counter = 0;
            foreach(QString item, pop){

                if(counter == 0){
                    p->setTytul(item);}
                if(counter == 1){
                    p->setFirma(item);}
                if(counter == 2){
                    p->idProjektu = item;}
                if(counter == 3){
                    p->idPracownika = item;}
                counter++;
                }
                counter = 0;
                if(p->getTytul() != ""){
                lP.push_back(p);}
            }
        }
    file.close();
    return lP;
}
void Kierownik::setListaPracownikow(deque<Uzytkownik*> lP){
    listaPracownikow = lP;
}
deque<Uzytkownik*> Kierownik::getListaPracownikow(){
    return listaPracownikow;
}
void Kierownik::setListaProjektow(deque<Projekt*> lPr){
    listaProjektow = lPr;
}
deque<Projekt*> Kierownik::getListaProjektow(){
    return listaProjektow;
}
void Kierownik::wczytajListePrac(QString idP){
    QString fileName = "Pliki/ListaPrac.txt";
    deque<Praca*> lP;
    QFile file(fileName);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug()<<"couldnt open file";
    }
    else{
        QTextStream in(&file);
        QString text;
        while(!in.atEnd()){
            text = in.readLine();
            // qDebug() << text;
            QStringList pop = text.split(" ");
            Praca *p = new Praca;
            int counter = 0;
            foreach(QString item, pop){

                if(counter == 0){
                    p->wykonana = item;}
                if(counter == 1){
                    p->setDoOceny(item);}
                if(counter == 2){
                    p->setDoZrobienia(item);}
                if(counter == 3){
                    p->setTypPracy(item);}
                if(counter == 4){
                    p->setTytul(item);}
                if(counter == 5){
                    p->idProjektu = item;}
                if(counter == 6){
                    p->idPracownika = item;}
                counter++;
                }
                counter = 0;

                if(p->wykonana != "" && p->idProjektu == idP){
                lP.push_back(p);}
            }
        }
    file.close();
    listaPrac = lP;
}
void Kierownik::setListaPrac(deque<Praca*> lPr){
    listaPrac = lPr;
}
deque<Praca*> Kierownik::getListaPrac(){
    return listaPrac;
}
