#ifndef BILLFORM_H
#define BILLFORM_H

#include <QWidget>

namespace Ui {
class BillForm;
}

class BillForm : public QWidget
{
    Q_OBJECT

public:
    explicit BillForm(QWidget *parent = nullptr);
    ~BillForm();

private:
    Ui::BillForm *ui;
};

#endif // BILLFORM_H
