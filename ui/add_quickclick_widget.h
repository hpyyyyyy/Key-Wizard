#ifndef ADD_QUICKCLICK_WIDGET_H
#define ADD_QUICKCLICK_WIDGET_H

#include <QWidget>

namespace Ui {
class add_quickClick_widget;
}

class add_quickClick_widget : public QWidget
{
    Q_OBJECT

public:
    explicit add_quickClick_widget(QWidget *parent = nullptr);
    ~add_quickClick_widget();

private:
    Ui::add_quickClick_widget *ui;
};

#endif // ADD_QUICKCLICK_WIDGET_H
