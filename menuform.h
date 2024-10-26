#ifndef MENUFORM_H
#define MENUFORM_H

#include <QWidget>
#include "mainwindow.h"
namespace Ui {
class MenuForm;
}

class MenuForm : public QWidget
{
    Q_OBJECT

public:
    explicit MenuForm(QWidget *parent = nullptr);
    ~MenuForm();



private slots:
    void on_pushButton_clicked();

private:
    Ui::MenuForm *ui;

};

#endif // MENUFORM_H
