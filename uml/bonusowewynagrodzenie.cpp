#include <iostream>
#include "uml/bonusowewynagrodzenie.h"
#include <string>

using std::string;
using std::cout;
using std::endl;

Bonusowe_wynagrodzenie::Bonusowe_wynagrodzenie(string f, int sk){
    forma = f;
    skala = sk;
}

double Bonusowe_wynagrodzenie::przydzielNagrode(string forma, int skala){
    double dodatkowe_wynagrodzenie = 1000;
    if (skala >0 && skala <4){
        dodatkowe_wynagrodzenie = dodatkowe_wynagrodzenie*skala;
    }
    else{
        cout<<"Niepoprawna wartość skali zjawiska!"<<endl;
    }
    if (forma == "nadgodziny" || forma == "projekt" || forma == "wyniki"){
        if (forma == "nadgodziny"){
            dodatkowe_wynagrodzenie = dodatkowe_wynagrodzenie*1.5;
        }
        else if (forma == "projekt"){
            dodatkowe_wynagrodzenie = dodatkowe_wynagrodzenie + skala*2000;
        }
        else{
            dodatkowe_wynagrodzenie = dodatkowe_wynagrodzenie*2;
        }
    }
    else{
        cout<<"Niepoprawna forma wykonania pracy!"<<endl;
    }
    return dodatkowe_wynagrodzenie;
}
