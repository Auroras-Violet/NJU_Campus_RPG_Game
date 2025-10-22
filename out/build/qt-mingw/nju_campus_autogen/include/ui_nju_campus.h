/********************************************************************************
** Form generated from reading UI file 'nju_campus.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NJU_CAMPUS_H
#define UI_NJU_CAMPUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nju_campus
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *nju_campus)
    {
        if (nju_campus->objectName().isEmpty())
            nju_campus->setObjectName("nju_campus");
        nju_campus->resize(800, 600);
        centralwidget = new QWidget(nju_campus);
        centralwidget->setObjectName("centralwidget");
        nju_campus->setCentralWidget(centralwidget);
        menubar = new QMenuBar(nju_campus);
        menubar->setObjectName("menubar");
        nju_campus->setMenuBar(menubar);
        statusbar = new QStatusBar(nju_campus);
        statusbar->setObjectName("statusbar");
        nju_campus->setStatusBar(statusbar);

        retranslateUi(nju_campus);

        QMetaObject::connectSlotsByName(nju_campus);
    } // setupUi

    void retranslateUi(QMainWindow *nju_campus)
    {
        nju_campus->setWindowTitle(QCoreApplication::translate("nju_campus", "nju_campus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nju_campus: public Ui_nju_campus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NJU_CAMPUS_H
