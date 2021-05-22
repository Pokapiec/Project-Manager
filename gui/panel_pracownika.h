#ifndef PANEL_PRACOWNIKA_H
#define PANEL_PRACOWNIKA_H

#include <QListWidget>
#include <QDialog>
class MainWindow;
#include "gui/mainwindow.h"
class praca_pracownika;
#include "gui/praca_pracownika.h"
#include "uml/caplikacja.h"
#include "uml/projekt.h"

namespace Ui {
class Panel_pracownika;
}

class Panel_pracownika : public QDialog
{
    Q_OBJECT

public:
    explicit Panel_pracownika(QWidget *parent = nullptr, CAplikacja *_app = nullptr,Pracownik *_pracownik=nullptr);
    ~Panel_pracownika();
    void setApp(CAplikacja* _app);
private slots:
    void on_pushButton_wyloguj_clicked();

    void on_listWidget_toDo_itemActivated(QListWidgetItem *item);

    void on_tabWidget_tabBarClicked(int index);

private:
    Ui::Panel_pracownika *ui;
    MainWindow *mainwind;
    CAplikacja *apk;
    Projekt *p;
    QWidget *mainwin;
    Pracownik *pracownik;
    int count_test;
};

#endif // PANEL_PRACOWNIKA_H
