#include "uml/uzytkownik.h"
#include <QString>

Uzytkownik::Uzytkownik(QString log,QString hasl,QString em,QString i){
    login = log;
    haslo = hasl;
    email = em;
    idPracy = i;
}

Uzytkownik::Uzytkownik(){
}


// Jak bedzie chcial zmienic tylko 1 rzecz to bede kazal wpisac mu stare
void Uzytkownik::zmienDaneProfilu(QString log,QString hasl,QString em){
    if (log != "")
        login = log;
    if (hasl != "")
        haslo = hasl;
    if (em != "")
        email = em;
}

bool Uzytkownik::zaloguj(QString log,QString pass){
    if (log == login && pass == haslo){
        return true;
    }
    else{
        return false;
    }
}

bool Uzytkownik::zarejestruj(QString log,QString pass, QString logBaza,QString passBaza){
    if (log == logBaza && pass == passBaza){
        return true;
    }
    else{
        return false;
    }
}
void Uzytkownik::setHaslo(QString H){
    haslo = H;
}
QString Uzytkownik::getHaslo(){
    return haslo;
}
void Uzytkownik::setEmail(QString E){
    email = E;
}
QString Uzytkownik::getEmail(){
    return email;
}
void Uzytkownik::setPlaca(QString _placa){
    placa = _placa;
}
QString Uzytkownik::getPlaca(){
    return placa;
}
//bool Uzytkownik::zweryfikujUzytkownika(){
//    bool sth = true;
//    return sth;
//}
