#ifndef NADPROJEKTEM_H
#define NADPROJEKTEM_H

#include "uml/praca.h"

using std::string;

class Nad_projektem : public Praca
{
private:
    string srodowiskoPracy;
public:
    Nad_projektem();
    void pokazBrakiWProjekcie();
    void wyswietlPanelPracy();
};

#endif // NADPROJEKTEM_H
