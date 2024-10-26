#ifndef REGISTFORM_H
#define REGISTFORM_H

#include <QWidget>
#include <QtDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "mainwindow.h"
namespace Ui {
class RegistForm;
}

class RegistForm : public QWidget
{
    Q_OBJECT

public:
    explicit RegistForm(QWidget *parent = nullptr);
    ~RegistForm();
    Ui::RegistForm* getUI(){
        return ui;
    }
private slots:
    void on_pushButton_clicked();

private:
    Ui::RegistForm *ui;

};

#endif // REGISTFORM_H
