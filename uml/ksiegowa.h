#ifndef KSIEGOWA_H
#define KSIEGOWA_H

#include "uml/pracownik.h"
#include "uml/budzet.h"

class Ksiegowa : public Pracownik
{
private:
    Budzet budzetFirmy;
    Bonusowe_wynagrodzenie bonus;

public:
    Ksiegowa();
    void wykonajZadanie();
    void wyliczBilansFirmy();
    void wyliczBonus();
};

#endif // KSIEGOWA_H
