#ifndef KLIENT_H
#define KLIENT_H

#include <string>
#include <tuple>
#include <QString>

using std::string;
using std::tuple;

class Klient
{

private:
    QString firma;
    QString budzet;

public:
    Klient();
    void setFirma(QString F);
    QString getFirma();
    void setBudzet(QString B);
    QString getBudzet();
    tuple<string, string, int> zlecProjekt(string nazwa, string skala, int budz);
};


#endif // KLIENT_H
