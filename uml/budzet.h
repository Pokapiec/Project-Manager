#ifndef BUDZET_H
#define BUDZET_H

#include <deque>
using std::deque;

class Budzet
{
private:
    float dofinansowanieRoczne;
    deque<float> wydatkiRoczne;
public:
    Budzet(float dRoczne = 2000000,deque<float> wRoczne={0,0,0,0,0,0,0,0,0,0,0,0});
    float wyliczPozostaleSrodki(float dofinansowanieRoczne,deque<float> wydatkiRoczne);

};
#endif // BUDZET_H
