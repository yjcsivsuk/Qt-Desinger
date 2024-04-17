/********************************************************************************
** Form generated from reading UI file 'QtGas.ui'
**
** Created: Wed Apr 17 14:50:25 2024
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGAS_H
#define UI_QTGAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *BtnGet;
    QLineEdit *lineEditGas;
    QLineEdit *lineEditADC;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(719, 536);
        QFont font;
        font.setPointSize(26);
        Form->setFont(font);
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 40, 591, 141));
        QFont font1;
        font1.setPointSize(48);
        label->setFont(font1);
        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 210, 351, 41));
        label_2->setFont(font);
        label_3 = new QLabel(Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 290, 321, 81));
        label_3->setFont(font);
        label_4 = new QLabel(Form);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(580, 200, 81, 41));
        label_4->setFont(font);
        label_5 = new QLabel(Form);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(590, 320, 81, 31));
        BtnGet = new QPushButton(Form);
        BtnGet->setObjectName(QString::fromUtf8("BtnGet"));
        BtnGet->setGeometry(QRect(250, 420, 221, 61));
        lineEditGas = new QLineEdit(Form);
        lineEditGas->setObjectName(QString::fromUtf8("lineEditGas"));
        lineEditGas->setGeometry(QRect(380, 200, 181, 51));
        lineEditADC = new QLineEdit(Form);
        lineEditADC->setObjectName(QString::fromUtf8("lineEditADC"));
        lineEditADC->setGeometry(QRect(380, 310, 181, 51));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Form", "Qt Gas Detection", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Form", "Gas concentration", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Form", "ADC Valtage", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Form", "ppm", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Form", "V", 0, QApplication::UnicodeUTF8));
        BtnGet->setText(QApplication::translate("Form", "Get", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGAS_H
