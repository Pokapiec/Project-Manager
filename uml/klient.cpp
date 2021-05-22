#include "uml/klient.h"
#include <tuple>

Klient::Klient(){

}
tuple<string, string, int> Klient::zlecProjekt(string nazwa, string skala, int budz){

    return {nazwa,skala,budz};
}
void Klient::setFirma(QString F){
    firma = F;
}
QString Klient::getFirma(){
    return firma;
}
void Klient::setBudzet(QString B){
    budzet = B;
}
QString Klient::getBudzet(){
    return budzet;
}
