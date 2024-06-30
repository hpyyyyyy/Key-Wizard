#include "set_wedget.h"
#include "ui_set_wedget.h"

set_wedget::set_wedget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::set_wedget)
{
    ui->setupUi(this);
}

set_wedget::~set_wedget()
{
    delete ui;
}
