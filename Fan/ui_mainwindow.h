/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Apr 17 14:14:54 2024
**	by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QApplication>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>
#include <gaugepanel.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    GaugePanel *gaugepanel;
    QSlider *horizontalSlider;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 450);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gaugepanel = new GaugePanel(centralwidget);
        gaugepanel->setObjectName(QString::fromUtf8("gaugepanel"));
        gaugepanel->setGeometry(QRect(37, 24, 511, 338));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(112, 375, 375, 30));
        horizontalSlider->setCursor(QCursor(Qt::SizeAllCursor));
        horizontalSlider->setMouseTracking(true);
        horizontalSlider->setAutoFillBackground(true);
        horizontalSlider->setStyleSheet(QString::fromUtf8("/*horizontal \357\274\232\346\260\264\345\271\263QSlider*/\n"
"QSlider::groove:horizontal {\n"
"border: 0px solid #bbb;\n"
"}\n"
"\n"
"/*1.\346\273\221\345\212\250\350\277\207\347\232\204\346\247\275\350\256\276\350\256\241\345\217\202\346\225\260*/\n"
"QSlider::sub-page:horizontal {\n"
" /*\346\247\275\351\242\234\350\211\262*/\n"
"background: rgb(50,154,255);\n"
" /*\345\244\226\347\216\257\345\214\272\345\237\237\345\200\222\345\234\206\350\247\222\345\272\246*/\n"
"border-radius: 2px;\n"
" /*\344\270\212\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-top:8px;\n"
" /*\344\270\213\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-bottom:8px;\n"
"/*width\345\234\250\350\277\231\351\207\214\346\227\240\346\225\210\357\274\214\344\270\215\345\206\231\345\215\263\345\217\257*/\n"
"}\n"
"\n"
"/*2.\346\234\252\346\273\221\345\212\250\350\277\207\347\232\204\346\247\275\350\256\276\350\256\241\345\217\202\346\225\260*/\n"
"QSlider::add-page:ho"
                        "rizontal {\n"
"/*\346\247\275\351\242\234\350\211\262*/\n"
"background: rgb(255,255, 255);\n"
"/*\345\244\226\347\216\257\345\244\247\345\260\2170px\345\260\261\346\230\257\344\270\215\346\230\276\347\244\272\357\274\214\351\273\230\350\256\244\344\271\237\346\230\2570*/\n"
"border: 0px solid #777;\n"
"/*\345\244\226\347\216\257\345\214\272\345\237\237\345\200\222\345\234\206\350\247\222\345\272\246*/\n"
"border-radius: 2px;\n"
" /*\344\270\212\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-top:9px;\n"
" /*\344\270\213\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-bottom:9px;\n"
"}\n"
" \n"
"/*3.\345\271\263\346\227\266\346\273\221\345\212\250\347\232\204\346\273\221\345\235\227\350\256\276\350\256\241\345\217\202\346\225\260*/\n"
"QSlider::handle:horizontal {\n"
"/*\346\273\221\345\235\227\351\242\234\350\211\262*/\n"
"background: rgb(193,204,208);\n"
"/*\346\273\221\345\235\227\347\232\204\345\256\275\345\272\246*/\n"
"width: 5px;\n"
""
                        "/*\346\273\221\345\235\227\345\244\226\347\216\257\344\270\2721px\357\274\214\345\206\215\345\212\240\351\242\234\350\211\262*/\n"
"border: 1px solid rgb(193,204,208);\n"
" /*\346\273\221\345\235\227\345\244\226\347\216\257\345\200\222\345\234\206\350\247\222\345\272\246*/\n"
"border-radius: 2px; \n"
" /*\344\270\212\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-top:6px;\n"
" /*\344\270\213\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-bottom:6px;\n"
"}\n"
"\n"
"/*4.\346\211\213\345\212\250\346\213\211\345\212\250\346\227\266\346\230\276\347\244\272\347\232\204\346\273\221\345\235\227\350\256\276\350\256\241\345\217\202\346\225\260*/\n"
"QSlider::handle:horizontal:hover {\n"
"/*\346\273\221\345\235\227\351\242\234\350\211\262*/\n"
"background: rgb(193,204,208);\n"
"/*\346\273\221\345\235\227\347\232\204\345\256\275\345\272\246*/\n"
"width: 10px;\n"
"/*\346\273\221\345\235\227\345\244\226\347\216\257\344\270\2721px\357\274\214\345\206"
                        "\215\345\212\240\351\242\234\350\211\262*/\n"
"border: 1px solid rgb(193,204,208);\n"
" /*\346\273\221\345\235\227\345\244\226\347\216\257\345\200\222\345\234\206\350\247\222\345\272\246*/\n"
"border-radius: 5px; \n"
" /*\344\270\212\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-top:4px;\n"
" /*\344\270\213\351\201\256\344\275\217\345\214\272\345\237\237\351\253\230\345\272\246*/\n"
"margin-bottom:4px;\n"
"}"));
        horizontalSlider->setMaximum(30);
        horizontalSlider->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 12));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
