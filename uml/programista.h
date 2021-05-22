#ifndef PROGRAMISTA_H
#define PROGRAMISTA_H

#include "uml/pracownik.h"

using std::string;

class Programista : public Pracownik
{
private:
    string technologia;
    bool zadanie;
public:

    Programista();
    void wykonajZadanie();
};
#endif // PROGRAMISTA_H
