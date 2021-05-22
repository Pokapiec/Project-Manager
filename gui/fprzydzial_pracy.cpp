#include "gui/fprzydzial_pracy.h"
#include "ui_fprzydzial_pracy.h"

Fprzydzial_pracy::Fprzydzial_pracy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Fprzydzial_pracy)
{
    ui->setupUi(this);
    this->setWindowTitle("Przydział pracy");
}

Fprzydzial_pracy::~Fprzydzial_pracy()
{
    delete ui;
}

void Fprzydzial_pracy::on_pushButton_wyjdz_clicked()
{
    hide();
    Zk = new Zalogowany_kierownik(this);
    Zk->show();
}

