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


void MenuForm::on_pushButton_clicked()
{

    MainWindow *login = new MainWindow(this);// 将登录页面的父控件设置为菜单页
    login->show();
    this->hide();
}
