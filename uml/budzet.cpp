#include "uml/budzet.h"

using std::deque;

Budzet::Budzet(float dRoczne ,deque<float> wRoczne){
    dofinansowanieRoczne = dRoczne;
    wydatkiRoczne = wRoczne;
}

float Budzet::wyliczPozostaleSrodki(float dofinansowanieRoczne,deque<float> wydatkiRoczne){
    float sumaWydatkow = 0;
    for(float i:wydatkiRoczne){
        sumaWydatkow += i;
    }

    return dofinansowanieRoczne - sumaWydatkow;
}
