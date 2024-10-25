#include "foodform.h"
#include "ui_foodform.h"

FoodForm::FoodForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FoodForm)
{
    ui->setupUi(this);
}

FoodForm::~FoodForm()
{
    delete ui;
}
