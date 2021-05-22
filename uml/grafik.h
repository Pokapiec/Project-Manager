#ifndef GRAFIK_H
#define GRAFIK_H

#include "uml/pracownik.h"

class Grafik : public Pracownik
{
private:
    bool swojSprzet;
public:
    Grafik();
    void wykonajZadanie();
};

#endif // GRAFIK_H
