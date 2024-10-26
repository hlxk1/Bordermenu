# Bordermenu

## 架构

![image-20241025202042138](\img\image-20241025202042138.png)

## 页面联系

### 菜单页到登录页跳转

跳转进行登录，隐藏当前菜单页

登录成功后，显示当前菜单页关闭登录页

```
        qDebug()<<"登录成功";
        QWidget *w = this->parentWidget();
        MenuForm *menu = dynamic_cast<MenuForm*>(w);
        menu->show();
        this->close();
```

