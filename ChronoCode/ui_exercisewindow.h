/********************************************************************************
** Form generated from reading UI file 'exercisewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXERCISEWINDOW_H
#define UI_EXERCISEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ExerciseWindow
{
public:
    QLabel *TL_exerciseWindowTimer;
    QLabel *TL_exerciseName;
    QLabel *IMG_Wrists_1;
    QLabel *IMG_Neck_1;
    QLabel *IMG_Backs_1;
    QLabel *IMG_Legs_1;
    QLabel *IMG_Shoulders_1;
    QLabel *IMG_Wrists_2;
    QLabel *IMG_Legs_2;
    QLabel *IMG_Shoulders_2;
    QLabel *IMG_Neck_2;
    QLabel *IMG_Neck_3;
    QLabel *IMG_Neck_4;
    QLabel *IMG_Neck_5;
    QLabel *IMG_Neck_6;
    QLabel *IMG_Backs_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *TL_TimerTwo;
    QLabel *label_4;
    QLabel *IMG_Seated_1;
    QLabel *IMG_Seated_2;
    QLabel *IMG_Levator_1;
    QLabel *IMG_Levator_2;

    void setupUi(QDialog *ExerciseWindow)
    {
        if (ExerciseWindow->objectName().isEmpty())
            ExerciseWindow->setObjectName(QStringLiteral("ExerciseWindow"));
        ExerciseWindow->resize(636, 449);
        ExerciseWindow->setStyleSheet(QLatin1String("QWidget { background-color : rgb(56, 64, 78); }\n"
""));
        ExerciseWindow->setModal(true);
        TL_exerciseWindowTimer = new QLabel(ExerciseWindow);
        TL_exerciseWindowTimer->setObjectName(QStringLiteral("TL_exerciseWindowTimer"));
        TL_exerciseWindowTimer->setGeometry(QRect(90, 390, 141, 41));
        TL_exerciseWindowTimer->setStyleSheet(QLatin1String("QLabel {background : transparent}\n"
"QLabel { font: Large, \"Bebas Neue \" }\n"
"QLabel {font-size: 24px}"));
        TL_exerciseName = new QLabel(ExerciseWindow);
        TL_exerciseName->setObjectName(QStringLiteral("TL_exerciseName"));
        TL_exerciseName->setGeometry(QRect(0, 0, 641, 61));
        TL_exerciseName->setStyleSheet(QLatin1String("QLabel { font-size: 40px }\n"
"QLabel { font-family: \"Bebas Kai \" }\n"
"QLabel {background: transparent}"));
        TL_exerciseName->setAlignment(Qt::AlignCenter);
        IMG_Wrists_1 = new QLabel(ExerciseWindow);
        IMG_Wrists_1->setObjectName(QStringLiteral("IMG_Wrists_1"));
        IMG_Wrists_1->setGeometry(QRect(10, 120, 291, 171));
        IMG_Wrists_1->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Wrists_1.png")));
        IMG_Wrists_1->setScaledContents(true);
        IMG_Neck_1 = new QLabel(ExerciseWindow);
        IMG_Neck_1->setObjectName(QStringLiteral("IMG_Neck_1"));
        IMG_Neck_1->setGeometry(QRect(10, 70, 191, 141));
        IMG_Neck_1->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Neck_1.png")));
        IMG_Neck_1->setScaledContents(true);
        IMG_Backs_1 = new QLabel(ExerciseWindow);
        IMG_Backs_1->setObjectName(QStringLiteral("IMG_Backs_1"));
        IMG_Backs_1->setGeometry(QRect(10, 120, 291, 171));
        IMG_Backs_1->setStyleSheet(QStringLiteral("QLabel {background: transparent}"));
        IMG_Backs_1->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Backs_1.png")));
        IMG_Backs_1->setScaledContents(true);
        IMG_Legs_1 = new QLabel(ExerciseWindow);
        IMG_Legs_1->setObjectName(QStringLiteral("IMG_Legs_1"));
        IMG_Legs_1->setGeometry(QRect(10, 120, 291, 171));
        IMG_Legs_1->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Legs_1.png")));
        IMG_Legs_1->setScaledContents(true);
        IMG_Shoulders_1 = new QLabel(ExerciseWindow);
        IMG_Shoulders_1->setObjectName(QStringLiteral("IMG_Shoulders_1"));
        IMG_Shoulders_1->setGeometry(QRect(10, 120, 291, 171));
        IMG_Shoulders_1->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Shoulders_1.png")));
        IMG_Shoulders_1->setScaledContents(true);
        IMG_Wrists_2 = new QLabel(ExerciseWindow);
        IMG_Wrists_2->setObjectName(QStringLiteral("IMG_Wrists_2"));
        IMG_Wrists_2->setGeometry(QRect(320, 120, 291, 171));
        IMG_Wrists_2->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Wrisits_2.png")));
        IMG_Wrists_2->setScaledContents(true);
        IMG_Legs_2 = new QLabel(ExerciseWindow);
        IMG_Legs_2->setObjectName(QStringLiteral("IMG_Legs_2"));
        IMG_Legs_2->setGeometry(QRect(320, 120, 291, 171));
        IMG_Legs_2->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Legs_2.png")));
        IMG_Legs_2->setScaledContents(true);
        IMG_Shoulders_2 = new QLabel(ExerciseWindow);
        IMG_Shoulders_2->setObjectName(QStringLiteral("IMG_Shoulders_2"));
        IMG_Shoulders_2->setGeometry(QRect(320, 120, 291, 171));
        IMG_Shoulders_2->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Shoulders_2.png")));
        IMG_Shoulders_2->setScaledContents(true);
        IMG_Neck_2 = new QLabel(ExerciseWindow);
        IMG_Neck_2->setObjectName(QStringLiteral("IMG_Neck_2"));
        IMG_Neck_2->setGeometry(QRect(210, 70, 191, 141));
        IMG_Neck_2->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Neck_2.png")));
        IMG_Neck_2->setScaledContents(true);
        IMG_Neck_3 = new QLabel(ExerciseWindow);
        IMG_Neck_3->setObjectName(QStringLiteral("IMG_Neck_3"));
        IMG_Neck_3->setGeometry(QRect(410, 70, 191, 141));
        IMG_Neck_3->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Neck_3.png")));
        IMG_Neck_3->setScaledContents(true);
        IMG_Neck_4 = new QLabel(ExerciseWindow);
        IMG_Neck_4->setObjectName(QStringLiteral("IMG_Neck_4"));
        IMG_Neck_4->setGeometry(QRect(10, 220, 191, 141));
        IMG_Neck_4->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Neck_4.png")));
        IMG_Neck_4->setScaledContents(true);
        IMG_Neck_5 = new QLabel(ExerciseWindow);
        IMG_Neck_5->setObjectName(QStringLiteral("IMG_Neck_5"));
        IMG_Neck_5->setGeometry(QRect(210, 220, 191, 141));
        IMG_Neck_5->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Neck_5.png")));
        IMG_Neck_5->setScaledContents(true);
        IMG_Neck_6 = new QLabel(ExerciseWindow);
        IMG_Neck_6->setObjectName(QStringLiteral("IMG_Neck_6"));
        IMG_Neck_6->setGeometry(QRect(410, 220, 191, 141));
        IMG_Neck_6->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Neck_6.png")));
        IMG_Neck_6->setScaledContents(true);
        IMG_Backs_2 = new QLabel(ExerciseWindow);
        IMG_Backs_2->setObjectName(QStringLiteral("IMG_Backs_2"));
        IMG_Backs_2->setGeometry(QRect(320, 120, 291, 171));
        IMG_Backs_2->setStyleSheet(QStringLiteral("QLabel {background: transparent}"));
        IMG_Backs_2->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Backs_2.png")));
        IMG_Backs_2->setScaledContents(true);
        label_3 = new QLabel(ExerciseWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 641, 61));
        label_3->setStyleSheet(QStringLiteral("QLabel { background-color : rgb(89, 212, 219); }"));
        label_3->setTextFormat(Qt::PlainText);
        label = new QLabel(ExerciseWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 360, 171, 81));
        label->setStyleSheet(QStringLiteral("QLabel {background : transparent}"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/hourglass.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(ExerciseWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(430, 360, 171, 81));
        label_2->setStyleSheet(QStringLiteral("QLabel {background: transparent}"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Arrows.png")));
        label_2->setScaledContents(true);
        TL_TimerTwo = new QLabel(ExerciseWindow);
        TL_TimerTwo->setObjectName(QStringLiteral("TL_TimerTwo"));
        TL_TimerTwo->setGeometry(QRect(505, 385, 121, 51));
        TL_TimerTwo->setStyleSheet(QLatin1String("QLabel {background : transparent}\n"
"QLabel { font: Large, \"Bebas Neue \" }\n"
"QLabel {font-size: 24px}"));
        label_4 = new QLabel(ExerciseWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(280, 370, 71, 71));
        label_4->setStyleSheet(QStringLiteral("QLabel {background: transparent}"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/images/logo.ico")));
        label_4->setScaledContents(true);
        IMG_Seated_1 = new QLabel(ExerciseWindow);
        IMG_Seated_1->setObjectName(QStringLiteral("IMG_Seated_1"));
        IMG_Seated_1->setGeometry(QRect(10, 120, 291, 171));
        IMG_Seated_1->setStyleSheet(QStringLiteral("QLabel {background: transparent}"));
        IMG_Seated_1->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Seated Scapular Stretch-1.png")));
        IMG_Seated_1->setScaledContents(true);
        IMG_Seated_2 = new QLabel(ExerciseWindow);
        IMG_Seated_2->setObjectName(QStringLiteral("IMG_Seated_2"));
        IMG_Seated_2->setGeometry(QRect(320, 120, 291, 171));
        IMG_Seated_2->setStyleSheet(QStringLiteral("QLabel {background: transparent}"));
        IMG_Seated_2->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Seated Scapular Stretch_2.png")));
        IMG_Seated_2->setScaledContents(true);
        IMG_Levator_1 = new QLabel(ExerciseWindow);
        IMG_Levator_1->setObjectName(QStringLiteral("IMG_Levator_1"));
        IMG_Levator_1->setGeometry(QRect(10, 120, 291, 171));
        IMG_Levator_1->setStyleSheet(QStringLiteral("QLabel {background: transparent}"));
        IMG_Levator_1->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Levator Scapulae Stretch.png")));
        IMG_Levator_1->setScaledContents(true);
        IMG_Levator_2 = new QLabel(ExerciseWindow);
        IMG_Levator_2->setObjectName(QStringLiteral("IMG_Levator_2"));
        IMG_Levator_2->setGeometry(QRect(320, 120, 291, 171));
        IMG_Levator_2->setStyleSheet(QStringLiteral("QLabel {background: transparent}"));
        IMG_Levator_2->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Levator Scapulae Stretch_2.png")));
        IMG_Levator_2->setScaledContents(true);
        label->raise();
        label_3->raise();
        TL_exerciseWindowTimer->raise();
        TL_exerciseName->raise();
        IMG_Wrists_1->raise();
        IMG_Neck_1->raise();
        IMG_Legs_1->raise();
        IMG_Shoulders_1->raise();
        IMG_Wrists_2->raise();
        IMG_Legs_2->raise();
        IMG_Shoulders_2->raise();
        IMG_Neck_2->raise();
        IMG_Neck_3->raise();
        IMG_Neck_4->raise();
        IMG_Neck_5->raise();
        IMG_Neck_6->raise();
        IMG_Backs_2->raise();
        IMG_Backs_1->raise();
        label_2->raise();
        TL_TimerTwo->raise();
        label_4->raise();
        IMG_Seated_1->raise();
        IMG_Seated_2->raise();
        IMG_Levator_1->raise();
        IMG_Levator_2->raise();

        retranslateUi(ExerciseWindow);

        QMetaObject::connectSlotsByName(ExerciseWindow);
    } // setupUi

    void retranslateUi(QDialog *ExerciseWindow)
    {
        ExerciseWindow->setWindowTitle(QApplication::translate("ExerciseWindow", "Dialog", Q_NULLPTR));
        TL_exerciseWindowTimer->setText(QApplication::translate("ExerciseWindow", "10:89", Q_NULLPTR));
        TL_exerciseName->setText(QApplication::translate("ExerciseWindow", "WRISTS - Do exercise", Q_NULLPTR));
        IMG_Wrists_1->setText(QString());
        IMG_Neck_1->setText(QString());
        IMG_Backs_1->setText(QString());
        IMG_Legs_1->setText(QString());
        IMG_Shoulders_1->setText(QString());
        IMG_Wrists_2->setText(QString());
        IMG_Legs_2->setText(QString());
        IMG_Shoulders_2->setText(QString());
        IMG_Neck_2->setText(QString());
        IMG_Neck_3->setText(QString());
        IMG_Neck_4->setText(QString());
        IMG_Neck_5->setText(QString());
        IMG_Neck_6->setText(QString());
        IMG_Backs_2->setText(QString());
        label_3->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        TL_TimerTwo->setText(QApplication::translate("ExerciseWindow", "9", Q_NULLPTR));
        label_4->setText(QString());
        IMG_Seated_1->setText(QString());
        IMG_Seated_2->setText(QString());
        IMG_Levator_1->setText(QString());
        IMG_Levator_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ExerciseWindow: public Ui_ExerciseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXERCISEWINDOW_H
