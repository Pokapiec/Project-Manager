#ifndef ORGANIZACYJNA_H
#define ORGANIZACYJNA_H

#include "uml/praca.h"

using std::string;

class Organizacyjna: public Praca
{
private:
    string rejonPracy;
public:
    Organizacyjna();
    string zwrocStanowisko(string rejonPracy);
    void wyswietlPanelPracy();
};

#endif // ORGANIZACYJNA_H
