# Bordermenu

## 架构

![image-20241025202042138](\img\image-20241025202042138.png)

### 页面

登录页

注册页

菜单页（可以跳转到登录页得到用户信息）

单份菜品页

订单页）

广告视频页（点击下一步进入菜单页，作为开始界面）

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

