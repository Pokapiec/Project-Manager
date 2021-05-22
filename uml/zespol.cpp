#include <iostream>
#include "uml/zespol.h"

using std::deque;
using std::cout;
using std::endl;

Zespol::Zespol(){

}
deque<Uzytkownik*> Zespol::przydzielOsobyDoZespolu(Uzytkownik *doDodania, deque<Uzytkownik*> listaUzytkownikow, deque<Uzytkownik*> skladZespolu){
    int przed = skladZespolu.size();
    for (Uzytkownik *u:listaUzytkownikow){
        if((!u->czyWZespole)){
            skladZespolu.push_back(doDodania);
        }
    }
    int po = skladZespolu.size();
    if (przed == po){
        cout<<"Nie udalo sie dodac osoby do zespolu"<<endl;
    }
    return listaUzytkownikow;
}

deque<Uzytkownik*> usunOsobeZZespolu(Uzytkownik *doUsuniecia,deque<Uzytkownik*> skladZespolu){
    int iterator = 0;
    for (Uzytkownik* d:skladZespolu){
        if(d->login == doUsuniecia->login){
            skladZespolu.erase(skladZespolu.begin() + iterator);
        }
        iterator++;
    }
    return skladZespolu;
}
