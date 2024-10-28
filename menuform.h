#ifndef MENUFORM_H
#define MENUFORM_H

#include <QWidget>
#include "mainwindow.h"
#include "foodform.h"
#include <QPixmap>
#include <QListWidget>
#include <QListWidgetItem>
#include <QTabWidget>
#include <QTableWidgetItem>

namespace Ui {
class MenuForm;
}

class MenuForm : public QWidget
{
    Q_OBJECT

public:
    explicit MenuForm(QWidget *parent = nullptr);
    ~MenuForm();
    FoodForm *getFoodList();


private slots:
    void on_pushButton_clicked();

    void on_foodKind1Bt_clicked();

private:
    Ui::MenuForm *ui;

};

#endif // MENUFORM_H
