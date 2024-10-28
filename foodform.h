#ifndef FOODFORM_H
#define FOODFORM_H

#include <QWidget>

namespace Ui {
class FoodForm;
}

class FoodForm : public QWidget
{
    Q_OBJECT

public:
    explicit FoodForm(QWidget *parent = nullptr);
    ~FoodForm();
    const Ui::FoodForm *getFoodformUI();
    void setFoodName(QString data);
    void setFoodInfo(QString data);
    void setFoodPrice(QString data);
    void setFoodPic(QPixmap data);
private:
    Ui::FoodForm *ui;
};

#endif // FOODFORM_H
