#ifndef PRACOWNIK_H
#define PRACOWNIK_H

#include <string>
#include <deque>
#include <QDebug>
#include "uml/uzytkownik.h"
#include "uml/bonusowewynagrodzenie.h"
#include "uml/postepypracy.h"
#include "uml/praca.h"

using std::deque;
using std::string;

class Pracownik : public Uzytkownik
{
private:
    string rola;
    int lataDowswiadczenia;
    Bonusowe_wynagrodzenie bonus;
    PostepyPracy postepy;


public:

    deque<Praca*> przydzielonePrace;
    Pracownik();
    void rysujWykres();
    void wskazSlabePunkty();
    void przydzielBonusoweWynagrodzenie();
    void setListaPrac(deque<Praca*> PP);
    deque<Praca*> getListaPrac();
    virtual void wykonajZadanie();
    void wczytajListePrac(QString idP);
};

#endif // PRACOWNIK_H
