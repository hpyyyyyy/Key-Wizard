#include "add_quickclick_widget.h"
#include "ui_add_quickclick_widget.h"

add_quickClick_widget::add_quickClick_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_quickClick_widget)
{
    ui->setupUi(this);
}

add_quickClick_widget::~add_quickClick_widget()
{
    delete ui;
}
