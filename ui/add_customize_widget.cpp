#include "add_customize_widget.h"
#include "ui_add_customize_widget.h"

add_customize_widget::add_customize_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_customize_widget)
{
    ui->setupUi(this);
}

add_customize_widget::~add_customize_widget()
{
    delete ui;
}
