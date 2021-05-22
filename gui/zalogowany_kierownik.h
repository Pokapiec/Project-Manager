#ifndef ZALOGOWANY_KIEROWNIK_H
#define ZALOGOWANY_KIEROWNIK_H


class MainWindow;
#include "gui/mainwindow.h"
class tworzenie_projektu_kierownik;
#include "gui/tworzenie_projektu_kierownik.h"
#include "uml/caplikacja.h"
#include "uml/kierownik.h"


#include <QDialog>

namespace Ui {
class Zalogowany_kierownik;
}

class Zalogowany_kierownik : public QDialog
{
    Q_OBJECT

public:
    explicit Zalogowany_kierownik(QWidget *parent = nullptr, CAplikacja *_Apk = nullptr,Kierownik *_k = nullptr);
    ~Zalogowany_kierownik();



private slots:
    void on_pushButton_wyloguj_clicked();

    void on_listAvilable_itemDoubleClicked(QListWidgetItem *item);

    void on_listToAdd_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::Zalogowany_kierownik *ui;
    MainWindow *mainwind;
    tworzenie_projektu_kierownik *tpk;
    CAplikacja *apk;
    QWidget *mainwin;
    Kierownik *k;

};

#endif // ZALOGOWANY_KIEROWNIK_H
