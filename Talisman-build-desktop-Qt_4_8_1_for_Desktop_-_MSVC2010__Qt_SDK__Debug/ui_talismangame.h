/********************************************************************************
** Form generated from reading UI file 'talismangame.ui'
**
** Created: Mon Oct 15 18:21:14 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TALISMANGAME_H
#define UI_TALISMANGAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TalismanGame
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TalismanGame)
    {
        if (TalismanGame->objectName().isEmpty())
            TalismanGame->setObjectName(QString::fromUtf8("TalismanGame"));
        TalismanGame->resize(400, 300);
        centralWidget = new QWidget(TalismanGame);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 20, 121, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 70, 121, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 120, 121, 31));
        TalismanGame->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TalismanGame);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        TalismanGame->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TalismanGame);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TalismanGame->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TalismanGame);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TalismanGame->setStatusBar(statusBar);

        retranslateUi(TalismanGame);

        QMetaObject::connectSlotsByName(TalismanGame);
    } // setupUi

    void retranslateUi(QMainWindow *TalismanGame)
    {
        TalismanGame->setWindowTitle(QApplication::translate("TalismanGame", "TalismanGame", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("TalismanGame", "Character Generator", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("TalismanGame", "Play Game", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("TalismanGame", "Map Editor", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TalismanGame: public Ui_TalismanGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TALISMANGAME_H
