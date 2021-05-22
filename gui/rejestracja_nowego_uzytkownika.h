#ifndef REJESTRACJA_NOWEGO_UZYTKOWNIKA_H
#define REJESTRACJA_NOWEGO_UZYTKOWNIKA_H

#include <QDialog>
class Zalogowany_kierownik;
#include "gui/zalogowany_kierownik.h"

namespace Ui {
class rejestracja_nowego_uzytkownika;
}

class rejestracja_nowego_uzytkownika : public QDialog
{
    Q_OBJECT

public:
    explicit rejestracja_nowego_uzytkownika(QWidget *parent = nullptr);
    ~rejestracja_nowego_uzytkownika();

private slots:
    void on_pushButton_wyjdz_clicked();

private:
    Ui::rejestracja_nowego_uzytkownika *ui;
    Zalogowany_kierownik *zalogK;
};

#endif // REJESTRACJA_NOWEGO_UZYTKOWNIKA_H
