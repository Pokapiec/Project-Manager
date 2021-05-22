#include "gui/panel_pracownika.h"
#include "ui_panel_pracownika.h"
#include "gui/mainwindow.h"
#include "uml/praca.h"
#include "uml/caplikacja.h"


#include <QMessageBox>
#include <QDebug>
#include <string>

using std::string;


// Po wprowadzeniu danych sprawdzane bedzie do ktorego pracownika z listy one należą i na tej
// podstawie bedzie sie wczytywalo liste prac :)

Panel_pracownika::Panel_pracownika(QWidget *parent, CAplikacja* _app,Pracownik *_pracownik):
    QDialog(parent),
    ui(new Ui::Panel_pracownika)
{
    count_test = 0;
    pracownik = _pracownik;
    mainwin = parent;
    ui->setupUi(this);
    this->setWindowTitle("Panel pracownika");
    ui->label_imie_pracownika->setText(pracownik->login);

//    Projekt *p = new Projekt;
    apk = _app;
//    QString fileNameP = "Pliki/ListaPrac.txt";
//    p->setListaPrac(p->wczytajListePrac(fileNameP));
    deque<Praca*> listaPrac = pracownik->getListaPrac();

//    apk->setListaUzytkownikow(apk->wczytajUzytkownikow(fileNameU));
//    deque<Uzytkownik*> listaUzytkownikow = apk->getListaUzytkownikow();

    for(Praca *g:listaPrac){
        if (g->getDoZrobienia()=="true")
            ui->listWidget_toDo->addItem(g->getTytul().replace("$"," "));
        if (g->getDoOceny()=="true")
            ui->listWidget_doOceny->addItem(g->getTytul().replace("$"," "));
        if (g->wykonana=="true")
            ui->listWidget_done->addItem(g->getTytul().replace("$"," "));
    }
}

Panel_pracownika::~Panel_pracownika()
{
    delete ui;
}

void Panel_pracownika::on_pushButton_wyloguj_clicked()
{
//    QMessageBox::information(this,"Logout","Wylogowywanie!");
    hide();
    delete this;
//    mainwind = new MainWindow(this);
    mainwin->show();
}


void Panel_pracownika::on_listWidget_toDo_itemActivated(QListWidgetItem *item)
{
    QMessageBox::information(this,"lol","kliknoles");
    ui->listWidget_done->addItem("jeden");
}
void Panel_pracownika::setApp(CAplikacja* _app){apk=_app;}

void Panel_pracownika::on_tabWidget_tabBarClicked(int index)
{

//    QString cos = QString::number(count_test);
//    ui->label_test->setText(cos);
//    count_test+=1;
}
