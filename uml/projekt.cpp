#include "uml/projekt.h"
#include <QFile>
#include <QDebug>

using std::deque;

Projekt::Projekt(){

}
deque<Praca*> Projekt::wczytajListePrac(QString fileName){
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
                counter++;
                }
                counter = 0;
//            p->login = pop[0];
//            p->setHaslo(pop[1]);
//            p->setEmail(pop[2]);
                if(p->wykonana != ""){
                lP.push_back(p);}
            }
        }
    file.close();
    return lP;
}
void Projekt::setListaPrac(deque<Praca*> lP){
    listaPrac = lP;
}
deque<Praca*> Projekt::getListaPrac(){
    return listaPrac;
}
float Projekt::szacujCzas(deque<Praca*> listaPrac,int skala, Zespol zespol){
    int iloscPrac = listaPrac.size();
    int wielkosc_zespolu = zespol.skladZespolu.size();

    float praceNaOsobe = iloscPrac/wielkosc_zespolu;

    float przewidywany_czas = 30 * praceNaOsobe * skala;

    return przewidywany_czas;
}
void Projekt::setFirma(QString f){
    firma = f;
}
QString Projekt::getFirma(){
    return firma;
}
void Projekt::setTytul(QString t){
    tytul = t;
}
QString Projekt::getTytul(){
    return tytul;
}
void Projekt::setZespol(Zespol *z){
    zespol = z;
}
Zespol Projekt::getZespol(){
    return *zespol;
}
