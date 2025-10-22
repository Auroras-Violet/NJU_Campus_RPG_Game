#include "nju_campus.h"

nju_campus::nju_campus(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_nju_campus)
{
    ui->setupUi(this);
}

nju_campus::~nju_campus()
{
    delete ui; 
}