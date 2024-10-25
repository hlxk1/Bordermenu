#ifndef GUODIFORM_H
#define GUODIFORM_H

#include <QWidget>

namespace Ui {
class GuoDiForm;
}

class GuoDiForm : public QWidget
{
    Q_OBJECT

public:
    explicit GuoDiForm(QWidget *parent = nullptr);
    ~GuoDiForm();

private:
    Ui::GuoDiForm *ui;
};

#endif // GUODIFORM_H
