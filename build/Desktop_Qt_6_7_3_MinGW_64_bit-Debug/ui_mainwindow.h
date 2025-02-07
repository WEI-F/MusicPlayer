/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *name;
    QPushButton *select;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *play;
    QPushButton *stop;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSlider *process;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_3;
    QSlider *volume;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(520, 339);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName("widget_5");
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        name = new QLabel(widget_5);
        name->setObjectName("name");

        horizontalLayout_4->addWidget(name);

        select = new QPushButton(widget_5);
        select->setObjectName("select");
        select->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_4->addWidget(select);


        verticalLayout_2->addWidget(widget_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName("widget_4");
        widget_4->setMaximumSize(QSize(16777215, 16777214));
        widget_4->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName("widget_3");
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName("verticalLayout");
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        play = new QPushButton(widget_2);
        play->setObjectName("play");
        play->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_2->addWidget(play);

        stop = new QPushButton(widget_2);
        stop->setObjectName("stop");
        stop->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_2->addWidget(stop);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(widget_3);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        process = new QSlider(widget);
        process->setObjectName("process");
        process->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout->addWidget(process);


        verticalLayout->addWidget(widget);


        horizontalLayout_3->addWidget(widget_3);

        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName("widget_6");
        verticalLayout_3 = new QVBoxLayout(widget_6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        volume = new QSlider(widget_6);
        volume->setObjectName("volume");
        volume->setOrientation(Qt::Orientation::Vertical);

        verticalLayout_3->addWidget(volume);

        label = new QLabel(widget_6);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label);


        horizontalLayout_3->addWidget(widget_6);


        verticalLayout_2->addWidget(widget_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 520, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        name->setText(QCoreApplication::translate("MainWindow", "\346\255\214\346\233\262\345\220\215", nullptr));
        select->setText(QCoreApplication::translate("MainWindow", "\351\200\211\345\217\226\346\255\214\346\233\262", nullptr));
        play->setText(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\237\263\351\207\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
