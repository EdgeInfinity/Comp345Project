/********************************************************************************
** Form generated from reading UI file 'charactergenerator.ui'
**
** Created: Fri Oct 12 18:25:12 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARACTERGENERATOR_H
#define UI_CHARACTERGENERATOR_H

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

class Ui_CharacterGenerator
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;

    void setupUi(QWidget *CharacterGenerator)
    {
        if (CharacterGenerator->objectName().isEmpty())
            CharacterGenerator->setObjectName(QString::fromUtf8("CharacterGenerator"));
        CharacterGenerator->resize(400, 300);
        pushButton = new QPushButton(CharacterGenerator);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 10, 75, 23));
        pushButton_2 = new QPushButton(CharacterGenerator);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 40, 75, 23));
        label = new QLabel(CharacterGenerator);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 80, 46, 13));
        label_2 = new QLabel(CharacterGenerator);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 120, 46, 13));
        label_3 = new QLabel(CharacterGenerator);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 160, 46, 13));
        label_4 = new QLabel(CharacterGenerator);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 200, 46, 13));
        label_5 = new QLabel(CharacterGenerator);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 240, 46, 13));
        lineEdit = new QLineEdit(CharacterGenerator);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 80, 113, 20));
        lineEdit_2 = new QLineEdit(CharacterGenerator);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 120, 113, 20));
        lineEdit_3 = new QLineEdit(CharacterGenerator);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(80, 160, 113, 20));
        lineEdit_4 = new QLineEdit(CharacterGenerator);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(80, 200, 113, 20));
        lineEdit_5 = new QLineEdit(CharacterGenerator);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(80, 240, 113, 20));

        retranslateUi(CharacterGenerator);

        QMetaObject::connectSlotsByName(CharacterGenerator);
    } // setupUi

    void retranslateUi(QWidget *CharacterGenerator)
    {
        CharacterGenerator->setWindowTitle(QApplication::translate("CharacterGenerator", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CharacterGenerator", "Save", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("CharacterGenerator", "Load", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CharacterGenerator", "Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CharacterGenerator", "Strength:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CharacterGenerator", "Craft:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CharacterGenerator", "Fate:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CharacterGenerator", "Coins:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CharacterGenerator: public Ui_CharacterGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARACTERGENERATOR_H
