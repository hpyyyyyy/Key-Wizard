#ifndef SET_WIDGET_H
#define SET_WIDGET_H

#include <QWidget>

namespace Ui {
class set_widget;
}

class set_widget : public QWidget
{
    Q_OBJECT

public:
    explicit set_widget(QWidget *parent = nullptr);
    ~set_widget();

private:
    Ui::set_widget *ui;
};

#endif // SET_WIDGET_H
