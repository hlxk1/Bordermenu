#include "registform.h"
#include "ui_registform.h"
#include <QtDebug>

RegistForm::RegistForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegistForm)
{
    ui->setupUi(this);

}

RegistForm::~RegistForm()
{
    delete ui;
}

void RegistForm::on_pushButton_clicked()
{
    QSqlQuery query;
    QString username = ui->userEdit->text();
    QString passwd = ui->passwdEdit->text();
    // 插入数据
    QString str = QString("INSERT INTO user (name,password) "
                          "VALUES ('%1','%2')").arg(username).arg(passwd);
    qDebug()<<str;
    if(!query.exec(str)){
        qDebug()<<"插入数据失败";
    }else{
        this->close();
    }
}
