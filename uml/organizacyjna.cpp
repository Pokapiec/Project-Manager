#include "uml/organizacyjna.h"
#include <string>

using std::string;

Organizacyjna::Organizacyjna(){

}
string Organizacyjna::zwrocStanowisko(string rejonPracy){
    if(rejonPracy == "teren"){
        return "administrator";
    }
    else if(rejonPracy == "biuro"){
        return "ksiegowa";
    }
    else {
        return "nieznane";
    }
}
void Organizacyjna::wyswietlPanelPracy(){

}
