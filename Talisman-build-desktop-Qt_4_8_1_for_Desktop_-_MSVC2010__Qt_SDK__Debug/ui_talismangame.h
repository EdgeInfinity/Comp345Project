/********************************************************************************
** Form generated from reading UI file 'talismangame.ui'
**
** Created: Fri Oct 12 18:03:05 2012
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
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TalismanGame
{
public:
    QWidget *centralWidget;
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
    } // retranslateUi

};

namespace Ui {
    class TalismanGame: public Ui_TalismanGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TALISMANGAME_H
