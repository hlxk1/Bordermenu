#include "guodiform.h"
#include "ui_guodiform.h"

GuoDiForm::GuoDiForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GuoDiForm)
{
    ui->setupUi(this);
}

GuoDiForm::~GuoDiForm()
{
    delete ui;
}
