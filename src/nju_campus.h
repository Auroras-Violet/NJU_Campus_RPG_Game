#pragma once
#include "ui_nju_campus.h"
#include <QMainWindow>

class nju_campus : public QMainWindow {
    Q_OBJECT
    
public:
    nju_campus(QWidget* parent = nullptr);
    ~nju_campus();

private:
    Ui_nju_campus* ui;
};