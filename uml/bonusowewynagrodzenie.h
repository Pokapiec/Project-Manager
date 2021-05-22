#ifndef BONUSOWEWYNAGRODZENIE_H
#define BONUSOWEWYNAGRODZENIE_H
#include <string>

using std::string;

class Bonusowe_wynagrodzenie
{
private:
    string forma;
    int skala;
public:
    Bonusowe_wynagrodzenie(string f="nadgodziny", int sk=1);
    double przydzielNagrode(string forma, int skala);
};

#endif // BONUSOWEWYNAGRODZENIE_H
