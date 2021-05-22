#ifndef CAPLIKACJA_H
#define CAPLIKACJA_H

#include "uml/uzytkownik.h"
#include "uml/kierownik.h"
#include "uml/klient.h"
#include "uml/projekt.h"

using std::deque;

class CAplikacja
{
private:
    deque<Uzytkownik*> listaUzytkownikow;
    deque<Klient*> klienci;
    deque<Projekt*> listaProjektow;

public:
    CAplikacja();
    ~CAplikacja();
    bool startAplikacji();
    void wczytajUzytkownikow(QString fileName);
    deque<Klient*> wczytajKlientow(QString fileNameK);
    deque<Projekt*> wczytajListeProjektow(QString fileName);
    bool stopAplikacji();
    void setListaUzytkownikow(deque<Uzytkownik*>);
    deque<Uzytkownik*> getListaUzytkownikow();
    void setListaKlientow(deque<Klient*>);
    deque<Klient*> getListaKlientow();
};

#endif // CAPLIKACJA_H
