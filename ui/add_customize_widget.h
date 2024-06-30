#ifndef ADD_CUSTOMIZE_WIDGET_H
#define ADD_CUSTOMIZE_WIDGET_H

#include <QWidget>

namespace Ui {
class add_customize_widget;
}

class add_customize_widget : public QWidget
{
    Q_OBJECT

public:
    explicit add_customize_widget(QWidget *parent = nullptr);
    ~add_customize_widget();

private:
    Ui::add_customize_widget *ui;
};

#endif // ADD_CUSTOMIZE_WIDGET_H
