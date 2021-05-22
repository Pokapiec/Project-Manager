include "gui/praca_pracownika.h"
#include "ui_praca_pracownika.h"
#include <QMessageBox>

// W tym panelu bedzie wyświetlany panel pracownika zalezny od jego kompetencji
// mozliwe ze bedzie trzeba 3 paneli ale moze da rade na jednym

praca_pracownika::praca_pracownika(QWidget *parent,Panel_pracownika *_panelP) :
    QDialog(parent),
    ui(new Ui::praca_pracownika)
{
    panelP = _panelP;
//    panelP = new Panel_pracownika;
    ui->setupUi(this);
    this->setWindowTitle("Panel Pracy");
}

praca_pracownika::~praca_pracownika()
{
    delete ui;
}

void praca_pracownika::on_pushButton_wyjdz_clicked()
{
    hide();
    panelP->show();
}
