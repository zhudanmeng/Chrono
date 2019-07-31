/********************************************************************************
** Form generated from reading UI file 'restwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTWINDOW_H
#define UI_RESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RestWindow
{
public:
    QLabel *label;
    QPushButton *PB_beginSession;
    QPushButton *pushButton_2;

    void setupUi(QDialog *RestWindow)
    {
        if (RestWindow->objectName().isEmpty())
            RestWindow->setObjectName(QStringLiteral("RestWindow"));
        RestWindow->resize(937, 328);
        RestWindow->setWindowOpacity(1);
        RestWindow->setStyleSheet(QStringLiteral("QDialog {opacity: 150}"));
        label = new QLabel(RestWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-1, 9, 941, 55));
        label->setStyleSheet(QLatin1String("QLabel { font: bold large \"helvetica neue\"}\n"
"QLabel { font-size: 48px}\n"
"QLabel { color: white}\n"
"\n"
""));
        label->setAlignment(Qt::AlignCenter);
        PB_beginSession = new QPushButton(RestWindow);
        PB_beginSession->setObjectName(QStringLiteral("PB_beginSession"));
        PB_beginSession->setGeometry(QRect(40, 150, 370, 90));
        PB_beginSession->setStyleSheet(QLatin1String("QPushButton {border-image: url(:/new/images/Images/Begin Session.png)}\n"
"QPushButton::hover {border-image: url(:/new/images/Images/Begin Session Hover.png)}"));
        pushButton_2 = new QPushButton(RestWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 150, 370, 90));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {border-image: url(:/new/images/Images/Go for a Walk.png)}\n"
"QPushButton::hover {border-image: url(:/new/images/Images/Go for a Walk Hover.png)}"));

        retranslateUi(RestWindow);

        QMetaObject::connectSlotsByName(RestWindow);
    } // setupUi

    void retranslateUi(QDialog *RestWindow)
    {
        RestWindow->setWindowTitle(QApplication::translate("RestWindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("RestWindow", "Time to take a break from the computer!", Q_NULLPTR));
        PB_beginSession->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RestWindow: public Ui_RestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTWINDOW_H
