#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_reigstButton_clicked()
{
    RegistForm *regist = new RegistForm;
    regist->show();

}

void MainWindow::on_loginButton_clicked()
{
    QSqlQuery query;
    // 查找名字对应的密码
    QString password;
    QString selectName = QString("select password "
                                 "from user where name = '%1';")
            .arg(ui->userEdit->text());
    if(!query.exec(selectName)){
       qDebug()<<"查找失败";
    }
    while(query.next()){
       password = query.value("password").toString();
    }
    if(ui->passwdEdit->text()!= password){
        qDebug()<< "密码输入错误";
    }else{
        qDebug()<<"登录成功";
    }
}
