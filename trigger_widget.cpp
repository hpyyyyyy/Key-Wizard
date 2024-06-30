#include "trigger_widget.h"
#include "ui_trigger_widget.h"

trigger_widget::trigger_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::trigger_widget)
{
    ui->setupUi(this);
}

trigger_widget::~trigger_widget()
{
    delete ui;
}
