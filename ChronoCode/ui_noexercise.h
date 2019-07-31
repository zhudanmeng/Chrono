/********************************************************************************
** Form generated from reading UI file 'noexercise.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOEXERCISE_H
#define UI_NOEXERCISE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_noexercise
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *TL_noexercisetime;

    void setupUi(QDialog *noexercise)
    {
        if (noexercise->objectName().isEmpty())
            noexercise->setObjectName(QStringLiteral("noexercise"));
        noexercise->resize(400, 300);
        gridLayout = new QGridLayout(noexercise);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(noexercise);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("QLabel { font: bold large \"helvetica neue\"}\n"
"QLabel {font-size : 24px}"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(noexercise);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("QLabel { font: bold large \"helvetica neue\"}\n"
"QLabel {font-size : 24px}"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_3 = new QLabel(noexercise);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("QLabel { font: bold large \"helvetica neue\"}\n"
"QLabel {font-size : 24px}"));
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        TL_noexercisetime = new QLabel(noexercise);
        TL_noexercisetime->setObjectName(QStringLiteral("TL_noexercisetime"));
        TL_noexercisetime->setStyleSheet(QLatin1String("QLabel { font: bold large \"helvetica neue\"}\n"
"QLabel {font-size : 24px}"));
        TL_noexercisetime->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(TL_noexercisetime, 3, 0, 1, 1);


        retranslateUi(noexercise);

        QMetaObject::connectSlotsByName(noexercise);
    } // setupUi

    void retranslateUi(QDialog *noexercise)
    {
        noexercise->setWindowTitle(QApplication::translate("noexercise", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("noexercise", "All stretches/exercises are finished.  ", Q_NULLPTR));
        label_4->setText(QApplication::translate("noexercise", "Try to look at trees that are far away.", Q_NULLPTR));
        label_3->setText(QApplication::translate("noexercise", "Make sure you keep good posture!", Q_NULLPTR));
        TL_noexercisetime->setText(QApplication::translate("noexercise", "111", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class noexercise: public Ui_noexercise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOEXERCISE_H
