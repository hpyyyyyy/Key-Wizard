#include "add_record_widget.h"
#include "ui_add_record_widget.h"

add_record_widget::add_record_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_record_widget)
{
    ui->setupUi(this);
}

add_record_widget::~add_record_widget()
{
    delete ui;
}
