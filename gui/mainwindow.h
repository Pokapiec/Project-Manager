#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
class Zalogowany_kierownik;
#include "gui/zalogowany_kierownik.h"
class Panel_pracownika;
#include "gui/panel_pracownika.h"
#include "uml/caplikacja.h"
#include "uml/projekt.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setStackOfWidgets();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::MainWindow *ui;
    Zalogowany_kierownik *zalogowany_kieronik;
    Panel_pracownika *panel_pracownika;
    CAplikacja *apk;
    QStackedWidget *stack;
    Kierownik *k;
    Pracownik *pracownik;
};
#endif // MAINWINDOW_H
