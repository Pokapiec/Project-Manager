#ifndef ZESPOL_H
#define ZESPOL_H

#include "uml/uzytkownik.h"

using std::deque;


class Zespol
{
private:
    deque<Uzytkownik*> listaUzytkownikow;

public:
    deque<Uzytkownik*> skladZespolu;
    Zespol();
    deque<Uzytkownik*> przydzielOsobyDoZespolu(Uzytkownik *doDodania,deque<Uzytkownik*> listaUzytkownikow,deque<Uzytkownik*> skladZespolu);
    deque<Uzytkownik*> usunOsobeZZespolu(Uzytkownik *doUsuniecia,deque<Uzytkownik*> skladZespolu);
};


#endif // ZESPOL_H
