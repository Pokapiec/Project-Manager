#ifndef PRACA_H
#define PRACA_H

#include <string>
#include <QString>
#include "uml/postepypracy.h"


using std::string;

class Praca
{
private:
    QString doOceny;
    QString doZrobienia;
    QString typPracy;
    QString tytul;
    PostepyPracy postepy;

public:
    QString idProjektu;
    QString idPracownika;
    QString wykonana;
    Praca();
    QString getDoOceny();
    void setDoOceny(QString doO);
    QString getDoZrobienia();
    void setDoZrobienia(QString doZ);
    QString getTypPracy();
    void setTypPracy(QString Typ);
    QString getTytul();
    void setTytul(QString T);
    void przydzielPrace();
    virtual void wyswietlPanelPracy();
};


#endif // PRACA_H
