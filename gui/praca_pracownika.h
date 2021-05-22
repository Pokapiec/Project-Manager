#ifndef PRACA_PRACOWNIKA_H
#define PRACA_PRACOWNIKA_H

#include <QDialog>
class Panel_pracownika;
#include "gui/panel_pracownika.h"

namespace Ui {
class praca_pracownika;
}

class praca_pracownika : public QDialog
{
    Q_OBJECT

public:
    explicit praca_pracownika(QWidget *parent = nullptr,Panel_pracownika *_panelP=nullptr);
    ~praca_pracownika();

private slots:
    void on_pushButton_wyjdz_clicked();

private:
    Ui::praca_pracownika *ui;
    Panel_pracownika *panelP;
    QWidget *panelP1;
};

#endif // PRACA_PRACOWNIKA_H
