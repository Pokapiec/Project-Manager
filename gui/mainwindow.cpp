#include "gui/mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("Pliki/icon.png"));

    apk = new CAplikacja;



    // W konstruktorach daje parametry tych obiektow tj. projekty, prace, itd
    if (parent == nullptr){


    }

//    bool aktywna = apk->startAplikacji();


//    p->setListaPrac(p->wczytajListePrac(fileNameP));
//    deque<Praca*> listaPrac = p->getListaPrac();

//    deque<Uzytkownik*> listaPracownikow;
//    qDebug() << listaUzytkownikow.size();
//    for(Uzytkownik* u: listaUzytkownikow){
//        if(u->id != "4" )
//            listaPracownikow.push_back(u);
//    }

//    k.setListaPracownikow(listaPracownikow);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete zalogowany_kieronik;
    delete panel_pracownika;
//    delete stack;

}

void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_login->text();
    QString password = ui->lineEdit_haslo->text();

    QString fileNameU = "Pliki/Uzytkownicy.txt";
    QString fileNameP = "Pliki/ListaPrac.txt";
    QString fileNamePr = "Pliki/ListaProjektow.txt";

    apk->wczytajUzytkownikow(fileNameU);
    deque<Uzytkownik*> listaUzytkownikow = apk->getListaUzytkownikow();
    deque<Projekt*> listaProjektow = apk->wczytajListeProjektow(fileNamePr);
    deque<Projekt*> listaProjektowDlaKierownika;


    int pom = 0;
    for(Uzytkownik *u :listaUzytkownikow){
//        qDebug()<<u->login<<u->getHaslo();
        if (username == u->login && password == u->getHaslo()){
            if (u->idPracy == "4"){
                for(Projekt *pr:listaProjektow){
                    if(u->idPracownika == pr->idPracownika){
                        listaProjektowDlaKierownika.push_back(pr);
                        k = dynamic_cast<Kierownik*>(u);
                        k->setListaProjektow(listaProjektowDlaKierownika);
                        k->wczytajListePrac(pr->idProjektu);
//                        for(Uzytkownik *l:listaUzytkownikow){
//                            for(Praca *o:k->getListaPrac()){
//                                if(l->idPracownika==o->idPracownika){

//                                    zespol->skladZespolu.push_back(l);
//                                }
//                            }
//                        }
//                        pr->setZespol(zespol);
                    }
                }
                hide();
                zalogowany_kieronik = new Zalogowany_kierownik(this,apk,k);
                zalogowany_kieronik->show();
                pom =1;
                break;
            }
            else {

                pracownik = dynamic_cast<Pracownik*>(u);
                pracownik->wczytajListePrac(u->idPracownika);
//                QMessageBox::information(this,"Login","Poprawne dane logowania !");
                hide();
                panel_pracownika = new Panel_pracownika(this,apk,pracownik);
                panel_pracownika->show();
                pom = 1;
                break;

            }
        }


        }
            if (pom == 0) {
                QMessageBox::warning(this,"Login","Zle dane !");
            }





//void MainWindow::setStackOfWidgets(){
////        stack = new QStackedWidget(this);
//        zalogowany_kieronik = new Zalogowany_kierownik(this,apk);
//        panel_pracownika = new Panel_pracownika(this,apk);
////        stack->addWidget(zalogowany_kieronik);
////        stack->addWidget(panel_pracownika);
////        stack->addWidget(ui->pushButton_login);
////        connect(ui->pushButton_login, SIGNAL(clicked()), this, );

}

