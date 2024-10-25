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

private:
    Ui::FoodForm *ui;
};

#endif // FOODFORM_H
