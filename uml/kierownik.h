#ifndef KIEROWNIK_H
#define KIEROWNIK_H

#include "uml/budzet.h"
#include "uml/pracownik.h"
#include "uml/uzytkownik.h"
#include "uml/projekt.h"

using std::deque;

class Kierownik : public Uzytkownik
{
private:
    bool czyIT;
    bool czyMarketing;
    deque<Praca*> listaPrac;
    deque<Projekt*> listaProjektow;
    deque<Uzytkownik*> listaPracownikow;
    Budzet budzet;

public:
    QString idProjektu;
    Kierownik();
    deque<Projekt*> stworzProjekt(deque<Projekt*> listaProjektow);
    float sprawdzPostepy(deque<Pracownik*> listaPracownikow);
    void sprawdzStatystykiPracy();
    void przydzielPrace(Praca *doDodania,Pracownik *jemuDodajemyPrace ,deque<Pracownik*> listaPracownikow);
    deque<Praca*> sprawdzBrakiWProjekcie();
    deque<Projekt*> wczytajListeProjektow(QString fileName);
    void setListaPracownikow(deque<Uzytkownik*> lP);
    deque<Uzytkownik*> getListaPracownikow();
    void setListaProjektow(deque<Projekt*> lPr);
    deque<Projekt*> getListaProjektow();
    void setListaPrac(deque<Praca*> lPr);
    deque<Praca*> getListaPrac();
    void wczytajListePrac(QString idP);

};


#endif // KIEROWNIK_H
