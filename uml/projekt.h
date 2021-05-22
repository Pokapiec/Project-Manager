#ifndef MENEDZER_TREE_H
#define MENEDZER_TREE_H

#include <deque>
#include <string>
#include <QString>
#include "uml/klient.h"
#include "uml/zespol.h"
#include "uml/praca.h"

using std::string;
using std::deque;

class Projekt
{
private:
    QString firma;
    QString tytul;
    Klient *klient;
    Zespol *zespol;
    deque<Praca*> listaPrac;

public:
    QString idProjektu;
    QString idPracownika;
    Projekt();
    deque<Praca*> wczytajListePrac(QString fileName);
    void setListaPrac(deque<Praca*>);
    deque<Praca*> getListaPrac();
    float szacujCzas(deque<Praca*> listaPrac,int skala, Zespol zespol);
    void setFirma(QString f);
    QString getFirma();
    void setTytul(QString t);
    QString getTytul();
    void setZespol(Zespol *z);
    Zespol getZespol();
};

#endif // MENEDZER_TREE_H
