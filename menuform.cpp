#include "menuform.h"
#include "ui_menuform.h"

MenuForm::MenuForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuForm)
{
    ui->setupUi(this);


}

MenuForm::~MenuForm()
{
    delete ui;
}

FoodForm *MenuForm::getFoodList()
{
//    FoodForm *w = new FoodForm;
//    Ui::FoodForm * foodform;
//    foodform = w->getFoodformUI();

}


void MenuForm::on_pushButton_clicked()
{

    MainWindow *login = new MainWindow(this);// 将登录页面的父控件设置为菜单页
    login->show();
    this->hide();
}
// 获取所有锅底
void MenuForm::on_foodKind1Bt_clicked()
{
    // 从数据库中获取锅底信息
    QSqlQuery query;
    QString str =  "select * from foods;";
    if(!query.exec(str)){
        qDebug()<<"查询失败";
    }

    //获取名字，描述，价格
    QString name,info,price,path;

    while (query.next()) {
        FoodForm *food = new FoodForm;
        QListWidgetItem *item = new QListWidgetItem;
        path = query.value("path").toString();

        QPixmap map(path);

        food->setFoodPic(map);
        item->setSizeHint(food->size());

        name = query.value("food").toString();
        qDebug()<<name;
        food->setFoodName(name);

        info = query.value("foodinfo").toString();
        qDebug()<<info;
        food->setFoodInfo(info);
        price = query.value("price").toString();
        qDebug()<<price;
        QString p = QString();

        food->setFoodPrice("¥"+price+"/份");
        ui->FoodWidget->addItem(item);
        ui->FoodWidget->setItemWidget(item,food);


    }

}
