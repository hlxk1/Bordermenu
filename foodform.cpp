#include "foodform.h"
#include "ui_foodform.h"

FoodForm::FoodForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FoodForm)
{
    ui->setupUi(this);
    this->setLayout(ui->verticalLayout);
    this->setLayout(ui->verticalLayout_2);
    this->setLayout(ui->verticalLayout_3);
}

FoodForm::~FoodForm()
{
    delete ui;
}

const Ui::FoodForm *FoodForm::getFoodformUI()
{
    return ui;
}

void FoodForm::setFoodName(QString data)
{
    ui->foodName->setText(data);
}

void FoodForm::setFoodInfo(QString data)
{
    ui->foodInfo->setText(data);
}

void FoodForm::setFoodPrice(QString data)
{
    ui->foodPrice->setText(data);
}

void FoodForm::setFoodPic(QPixmap data)
{
    data.scaled(ui->foodPic->size());
    ui->foodPic->setPixmap(data);
}
