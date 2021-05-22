#ifndef FPRZYDZIAL_PRACY_H
#define FPRZYDZIAL_PRACY_H

#include <QDialog>
class Zalogowany_kierownik;
#include "gui/zalogowany_kierownik.h"

namespace Ui {
class Fprzydzial_pracy;
}

class Fprzydzial_pracy : public QDialog
{
    Q_OBJECT

public:
    explicit Fprzydzial_pracy(QWidget *parent = nullptr);
    ~Fprzydzial_pracy();

private slots:
    void on_pushButton_wyjdz_clicked();

private:
    Ui::Fprzydzial_pracy *ui;
    Zalogowany_kierownik *Zk;

};

#endif // FPRZYDZIAL_PRACY_H
