#ifndef ADD_RECORD_WIDGET_H
#define ADD_RECORD_WIDGET_H

#include <QWidget>

namespace Ui {
class add_record_widget;
}

class add_record_widget : public QWidget
{
    Q_OBJECT

public:
    explicit add_record_widget(QWidget *parent = nullptr);
    ~add_record_widget();

private:
    Ui::add_record_widget *ui;
};

#endif // ADD_RECORD_WIDGET_H
