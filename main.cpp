#include "mainwindow.h"
#include <QtDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("user");
    if(db.open()){
        qDebug()<< "数据库创建成功";
    }else{
        qDebug() << "创建失败";
    }
    // 创建用户表
    QSqlQuery query;
    //使用INTEGER PRIMARY KEY关键字创建自增主键
    QString table =
            "CREATE TABLE if not exists user("
            "id INTEGER PRIMARY KEY AUTOINCREMENT,"
            "name text NOT NULL,"
            "password text NOT NULL"
            ");";
    if(!query.exec(table)){
        qDebug()<<"创建表失败";
    }
    MainWindow w;
    w.show();
    return a.exec();
}
