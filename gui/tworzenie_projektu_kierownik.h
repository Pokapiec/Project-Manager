#ifndef TWORZENIE_PROJEKTU_KIEROWNIK_H
#define TWORZENIE_PROJEKTU_KIEROWNIK_H

#include <QDialog>
#include <QMessageBox>
#include <QListWidgetItem>
class Zalogowany_kierownik;
#include "gui/zalogowany_kierownik.h"
#include "uml/caplikacja.h"

namespace Ui {
class tworzenie_projektu_kierownik;
}

class tworzenie_projektu_kierownik : public QDialog
{
    Q_OBJECT

public:
    explicit tworzenie_projektu_kierownik(QWidget *parent = nullptr, CAplikacja *Apk = nullptr);
    ~tworzenie_projektu_kierownik();

private slots:

    void on_listAvilable_itemDoubleClicked(QListWidgetItem *item);

    void on_listToAdd_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::tworzenie_projektu_kierownik *ui;
    Zalogowany_kierownik *Zk;
    CAplikacja *apk;
};

#endif // TWORZENIE_PROJEKTU_KIEROWNIK_H
