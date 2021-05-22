#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H


#include <string>
#include <deque>
#include <QString>

using std::deque;
using std::string;

class Uzytkownik
{
private:
    QString placa;
    QString haslo;
    QString email;
    deque<string> datyZalogowan;

public:
    QString login;
    QString idPracy;
    QString idPracownika;
    bool czyWZespole;
    Uzytkownik(QString login,QString haslo,QString email,QString id);
    Uzytkownik();
    void setPlaca(QString _placa);
    QString getPlaca();
//    bool zweryfikujUzytkownika();
    bool zarejestruj(QString log,QString pass, QString logBaza,QString passBaza);
    bool zaloguj(QString log,QString pass);
    void zmienDaneProfilu(QString log,QString hasl,QString em);
    void setHaslo(QString H);
    QString getHaslo();
    void setEmail(QString E);
    QString getEmail();
    virtual void wczytajListePrac(QString idP)=0;
};

#endif // UZYTKOWNIK_H
