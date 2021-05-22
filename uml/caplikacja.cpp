#include <QFile>
#include <QByteArray>
#include <uml/caplikacja.h>
#include <QString>
#include <QtDebug>
#include "grafik.h"
#include "programista.h"
#include "ksiegowa.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <bits/stdc++.h>

using std::endl;
using std::cout;


CAplikacja::CAplikacja(){

}

CAplikacja::~CAplikacja(){

}

void CAplikacja::wczytajUzytkownikow(QString fileName){
    deque<Uzytkownik*> _listaUzytkownikow;
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

            int counter = 0;
            int Size = pop.size();
            if(Size > 3){
//            qDebug()<<pop[3];
            Uzytkownik *p;

            if (pop[3]=="1" || pop[3]=="2" || pop[3]=="3"){
                if (pop[3]=="1"){
                    p = new Programista;
                }
                if (pop[3]=="2"){
                    p = new Grafik;
                }
                if (pop[3]=="3"){
                    p = new Ksiegowa;
                }
                foreach(QString item, pop){
                    if(counter == 0){
                        p->login = item;}
                    if(counter == 1){
                        p->setHaslo(item);}
                    if(counter == 2){
                        p->setEmail(item);}
                    if(counter == 3){
                        p->idPracy = item;}
                    if(counter == 4){
                        p->setPlaca(item);}
                    if(counter == 5){
                        p->idPracownika = item;}
                    counter++;}
                    counter = 0;
                    if(p->login != ""){
                        _listaUzytkownikow.push_back(p);}
            }
            else if(pop[3]=="4"){
                Uzytkownik *p = new Kierownik;
                foreach(QString item, pop){
                    if(counter == 0){
                        p->login = item;}
                    if(counter == 1){
                        p->setHaslo(item);}
                    if(counter == 2){
                        p->setEmail(item);}
                    if(counter == 3){
                        p->idPracy = item;}
                    if(counter == 4){
                        p->idPracownika = item;}
                    counter++;
                    }
                    counter = 0;
                    if(p->login != ""){
                        _listaUzytkownikow.push_back(p);}
            }
          }
        }
    }
    file.close();
    listaUzytkownikow = _listaUzytkownikow;
}

deque<Klient*> wczytajKlientow(QString fileNameK){
    deque<Klient*> lK;
    QFile file(fileNameK);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug()<<"couldnt open file";
    }
    else{
        QTextStream in(&file);
        QString text;
        while(!in.atEnd()){
            text = in.readLine();
            QStringList pop = text.split(" ");
            Klient *p = new Klient;
            int counter = 0;
            foreach(QString item, pop){
                if(counter == 0){
                    p->setFirma(item);}
                if(counter == 1){
                    p->setBudzet(item);}
                counter++;
                }
                counter = 0;
                if(p->getBudzet() != ""){
                    lK.push_back(p);}
            }
        }
    file.close();
    return lK;
}
deque<Projekt*> CAplikacja::wczytajListeProjektow(QString fileName){
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

bool CAplikacja::startAplikacji()
{
    return true;
}
bool CAplikacja::stopAplikacji(){
    return false;
}
void CAplikacja::setListaUzytkownikow(deque<Uzytkownik*> lU){
    listaUzytkownikow = lU;
}
deque<Uzytkownik*> CAplikacja::getListaUzytkownikow(){
    return listaUzytkownikow;
}
void CAplikacja::setListaKlientow(deque<Klient *> lK){
    klienci = lK;
}
deque<Klient*> CAplikacja::getListaKlientow(){
    return klienci;
}
