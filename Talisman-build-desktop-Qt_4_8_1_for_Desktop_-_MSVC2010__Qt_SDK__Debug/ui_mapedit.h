/********************************************************************************
** Form generated from reading UI file 'mapedit.ui'
**
** Created: Wed Oct 17 21:03:06 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPEDIT_H
#define UI_MAPEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapEdit
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label;
    QSpinBox *spinBox_2;

    void setupUi(QWidget *MapEdit)
    {
        if (MapEdit->objectName().isEmpty())
            MapEdit->setObjectName(QString::fromUtf8("MapEdit"));
        MapEdit->resize(640, 480);
        verticalLayoutWidget = new QWidget(MapEdit);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 61, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        spinBox = new QSpinBox(verticalLayoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        verticalLayout->addWidget(spinBox);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        spinBox_2 = new QSpinBox(verticalLayoutWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        verticalLayout->addWidget(spinBox_2);


        retranslateUi(MapEdit);

        QMetaObject::connectSlotsByName(MapEdit);
    } // setupUi

    void retranslateUi(QWidget *MapEdit)
    {
        MapEdit->setWindowTitle(QApplication::translate("MapEdit", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MapEdit", "Vertical", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MapEdit", "Horizontal", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MapEdit: public Ui_MapEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPEDIT_H
