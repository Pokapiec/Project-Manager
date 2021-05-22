#include "uml/pracownik.h"
#include "QFile"

Pracownik::Pracownik(){

}

void Pracownik::rysujWykres(){

}

void Pracownik::wskazSlabePunkty(){

}

void Pracownik::przydzielBonusoweWynagrodzenie(){

}

void Pracownik::wykonajZadanie(){

}
void Pracownik::wczytajListePrac(QString idP){
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

                if(p->wykonana != "" && p->idPracownika == idP){
                lP.push_back(p);}
            }
        }
    file.close();
    przydzielonePrace = lP;
}
void Pracownik::setListaPrac(deque<Praca*> PP){
    przydzielonePrace = PP;
}
deque<Praca*> Pracownik::getListaPrac(){
    return przydzielonePrace;
}
