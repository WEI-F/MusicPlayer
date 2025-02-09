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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QUndoView>
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
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QListWidget *songList;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QUndoView *songLyric;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *previous;
    QPushButton *play;
    QPushButton *stop;
    QPushButton *next;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *sequence;
    QRadioButton *loop;
    QRadioButton *random;
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
        MainWindow->resize(489, 597);
        MainWindow->setMaximumSize(QSize(489, 597));
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

        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName("widget_7");
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 6);
        widget_8 = new QWidget(widget_7);
        widget_8->setObjectName("widget_8");
        verticalLayout_4 = new QVBoxLayout(widget_8);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_8);
        label_2->setObjectName("label_2");

        verticalLayout_4->addWidget(label_2);

        songList = new QListWidget(widget_8);
        songList->setObjectName("songList");

        verticalLayout_4->addWidget(songList);


        horizontalLayout_5->addWidget(widget_8);

        widget_9 = new QWidget(widget_7);
        widget_9->setObjectName("widget_9");
        verticalLayout_5 = new QVBoxLayout(widget_9);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(-1, 0, 0, 0);
        label_3 = new QLabel(widget_9);
        label_3->setObjectName("label_3");

        verticalLayout_5->addWidget(label_3);

        songLyric = new QUndoView(widget_9);
        songLyric->setObjectName("songLyric");

        verticalLayout_5->addWidget(songLyric);


        horizontalLayout_5->addWidget(widget_9);


        verticalLayout_2->addWidget(widget_7);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName("verticalLayout");
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        previous = new QPushButton(widget_2);
        previous->setObjectName("previous");

        horizontalLayout_2->addWidget(previous);

        play = new QPushButton(widget_2);
        play->setObjectName("play");
        play->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_2->addWidget(play);

        stop = new QPushButton(widget_2);
        stop->setObjectName("stop");
        stop->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        horizontalLayout_2->addWidget(stop);

        next = new QPushButton(widget_2);
        next->setObjectName("next");

        horizontalLayout_2->addWidget(next);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        sequence = new QRadioButton(widget_4);
        sequence->setObjectName("sequence");

        horizontalLayout_3->addWidget(sequence);

        loop = new QRadioButton(widget_4);
        loop->setObjectName("loop");

        horizontalLayout_3->addWidget(loop);

        random = new QRadioButton(widget_4);
        random->setObjectName("random");

        horizontalLayout_3->addWidget(random);


        horizontalLayout_2->addWidget(widget_4);

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

        widget_6 = new QWidget(widget);
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


        horizontalLayout->addWidget(widget_6);


        verticalLayout->addWidget(widget);


        verticalLayout_2->addWidget(widget_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 489, 18));
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
        select->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\255\214\346\233\262", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276\345\210\227\350\241\250", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\255\214\350\257\215", nullptr));
        previous->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\200\351\246\226", nullptr));
        play->setText(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
        next->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\351\246\226", nullptr));
        sequence->setText(QCoreApplication::translate("MainWindow", "\351\241\272\345\272\217", nullptr));
        loop->setText(QCoreApplication::translate("MainWindow", "\345\276\252\347\216\257", nullptr));
        random->setText(QCoreApplication::translate("MainWindow", "\351\232\217\346\234\272", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\237\263\351\207\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
