#include "gui/tworzenie_projektu_kierownik.h"
#include "ui_tworzenie_projektu_kierownik.h"
#include <QListWidgetItem>

tworzenie_projektu_kierownik::tworzenie_projektu_kierownik(QWidget *parent, CAplikacja *Apk) :
    QDialog(parent),
    ui(new Ui::tworzenie_projektu_kierownik)
{

    apk = Apk;
    ui->setupUi(this);
    this->setWindowTitle("Tworzenie projektu");
    deque<Uzytkownik*> listaUzytkownikow = apk->getListaUzytkownikow();
    for(Uzytkownik *u: listaUzytkownikow){
        ui->listAvilable->addItem(u->getEmail());
    }
}

tworzenie_projektu_kierownik::~tworzenie_projektu_kierownik()
{
    delete ui;
}


void tworzenie_projektu_kierownik::on_listAvilable_itemDoubleClicked(QListWidgetItem *item)
{
//
    ui->listToAdd->addItem(item->text());
    ui->listAvilable->takeItem(ui->listAvilable->currentRow());
}

void tworzenie_projektu_kierownik::on_listToAdd_itemDoubleClicked(QListWidgetItem *item)
{
    ui->listAvilable->addItem(item->text());
    ui->listToAdd->takeItem(ui->listToAdd->currentRow());
}
