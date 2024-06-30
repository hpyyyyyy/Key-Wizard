#include "set_widget.h"
#include "ui_set_widget.h"

set_widget::set_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::set_widget)
{
    ui->setupUi(this);
}

set_widget::~set_widget()
{
    delete ui;
}
