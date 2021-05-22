#include "gui/rejestracja_nowego_uzytkownika.h"
#include "ui_rejestracja_nowego_uzytkownika.h"
#include <QMessageBox>

rejestracja_nowego_uzytkownika::rejestracja_nowego_uzytkownika(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rejestracja_nowego_uzytkownika)
{

    ui->setupUi(this);
    this->setWindowTitle("Rejestracja nowego pracownika");


}

rejestracja_nowego_uzytkownika::~rejestracja_nowego_uzytkownika()
{
    delete ui;
}

void rejestracja_nowego_uzytkownika::on_pushButton_wyjdz_clicked()
{
    hide();
    zalogK = new Zalogowany_kierownik(this);
    zalogK->show();
}
