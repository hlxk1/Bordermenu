#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "registform.h"
#include "menuform.h"
#include "foodform.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_reigstButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
