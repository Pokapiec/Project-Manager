#include "gui/zalogowany_kierownik.h"
#include "ui_zalogowany_kierownik.h"

#include <QMessageBox>

Zalogowany_kierownik::Zalogowany_kierownik(QWidget *parent, CAplikacja *_Apk,Kierownik *_k) :
    QDialog(parent),
    ui(new Ui::Zalogowany_kierownik)
{
    k = _k;
    mainwin = parent;
    ui->setupUi(this);
    this->setWindowTitle("Panel kierownika");
    apk = _Apk;
    deque<Uzytkownik*> listaUzytkownikow = apk->getListaUzytkownikow();
    for(Uzytkownik *u: listaUzytkownikow){
        ui->listAvilable->addItem(u->getEmail());
    }
    int count=0;
    for(Praca *pr:k->getListaPrac()){
        if(pr->getDoZrobienia()=="true"){
            ui->listWidget_niesk->addItem(pr->getTytul().replace("$"," "));
            count++;}
    }
    QString procent = QString::number(count*100/(k->getListaPrac().size()));
    ui->lineEdit_postepy->setText(procent + " %");

}

Zalogowany_kierownik::~Zalogowany_kierownik()
{
    delete ui;
}


void Zalogowany_kierownik::on_pushButton_wyloguj_clicked()
{

//    QMessageBox::information(this,"Logout","Wylogowywanie!");
    hide();
    delete this;
//    mainwind = new MainWindow(this);
    mainwin->show();
}


void Zalogowany_kierownik::on_listAvilable_itemDoubleClicked(QListWidgetItem *item)
{
//
    ui->listToAdd->addItem(item->text());
    ui->listAvilable->takeItem(ui->listAvilable->currentRow());
}

void Zalogowany_kierownik::on_listToAdd_itemDoubleClicked(QListWidgetItem *item)
{
    ui->listAvilable->addItem(item->text());
    ui->listToAdd->takeItem(ui->listToAdd->currentRow());
}

