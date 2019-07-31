/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_7;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *TL_timetillnextexercise;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *TL_ErgoPic;
    QPushButton *PB_ClosePic;
    QPushButton *PB_Pic;
    QProgressBar *progressBar;
    QLabel *label_5;
    QLabel *label_8;
    QProgressBar *progressBar_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QCheckBox *CB_Min;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLineEdit *LE_Weight;
    QSpinBox *SB_Inches;
    QLabel *label_9;
    QLabel *label;
    QLabel *label_59;
    QLabel *label_4;
    QLineEdit *LE_Age;
    QSpinBox *SB_Feet;
    QLabel *label_6;
    QLabel *label_7;
    QRadioButton *RB_Exer;
    QPushButton *pushButton;
    QRadioButton *RB_Ergo;
    QPushButton *pushButton_2;
    QWidget *tab_4;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QScrollArea *SC_Ex_3;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_17;
    QCheckBox *CB_Levator;
    QTextBrowser *textBrowser_25;
    QTextBrowser *textBrowser_26;
    QLabel *label_57;
    QLabel *label_55;
    QCheckBox *CB_Seated;
    QLabel *label_58;
    QLabel *label_56;
    QGridLayout *gridLayout_12;
    QLabel *label_37;
    QLabel *label_38;
    QCheckBox *CB_Neck;
    QTextBrowser *textBrowser_16;
    QLabel *label_35;
    QLabel *label_36;
    QTextBrowser *textBrowser_15;
    QCheckBox *CB_Wrists;
    QGridLayout *gridLayout_16;
    QCheckBox *CB_Eyes;
    QTextBrowser *textBrowser_23;
    QCheckBox *CB_Legs;
    QLabel *label_51;
    QTextBrowser *textBrowser_24;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_52;
    QGridLayout *gridLayout_13;
    QLabel *label_41;
    QTextBrowser *textBrowser_18;
    QCheckBox *CB_Shoulders;
    QCheckBox *CB_Backs;
    QLabel *label_39;
    QLabel *label_40;
    QTextBrowser *textBrowser_17;
    QLabel *label_42;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(529, 425);
        MainWindow->setStyleSheet(QStringLiteral("QTabBar::tab:first { height: 50px; width: 50px;border-image: url(:/new/images/Images/clock.png); }"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_7 = new QGridLayout(centralWidget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget { background-color : rgb(207, 227, 230) ; }\n"
"\n"
"QTabBar:tab::first{ width: 75px; height: 100px;border-image: url(:/new/images/Images/home big unselected.png);}\n"
"QTabBar::tab:first:selected { width: 75px; height: 100px;border-image: url(:/new/images/Images/home selectedd.png);}\n"
"QTabBar::tab:middle{ width: 75px; height: 100px;border-image: url(:/new/images/Images/Settings unselected.png);}\n"
"QTabBar::tab:middle:selected{ width: 75px; height: 100px;border-image: url(:/new/images/Images/Settings Selected.png);}\n"
"QTabBar::tab:last{ width: 75px; height: 100px;border-image: url(:/new/images/Images/Stretches unselected.png);}\n"
"QTabBar::tab:last:selected{ width: 75px; height: 100px;border-image: url(:/new/images/Images/Stretches Selected.png);}\n"
""));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        TL_timetillnextexercise = new QLabel(tab);
        TL_timetillnextexercise->setObjectName(QStringLiteral("TL_timetillnextexercise"));
        TL_timetillnextexercise->setGeometry(QRect(160, 130, 431, 161));
        QFont font;
        font.setFamily(QStringLiteral("Dense"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        TL_timetillnextexercise->setFont(font);
        TL_timetillnextexercise->setStyleSheet(QLatin1String("QLabel { font: bold large \"Dense\"}\n"
"QLabel { font-size: 72px}\n"
"QLabel { color:  white}\n"
"\n"
""));
        TL_timetillnextexercise->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_14 = new QLabel(tab);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(-60, -30, 521, 441));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/BGTake1.png")));
        label_14->setScaledContents(true);
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(157, 150, 241, 31));
        label_11->setStyleSheet(QLatin1String("QLabel { font: Large \"Couture\" }\n"
"QLabel { font-size: 18px}\n"
"QLabel {color : rgb(157, 157, 157)}"));
        TL_ErgoPic = new QLabel(tab);
        TL_ErgoPic->setObjectName(QStringLiteral("TL_ErgoPic"));
        TL_ErgoPic->setGeometry(QRect(0, 0, 434, 391));
        TL_ErgoPic->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Office-Ergonomics.bmp")));
        TL_ErgoPic->setScaledContents(true);
        PB_ClosePic = new QPushButton(tab);
        PB_ClosePic->setObjectName(QStringLiteral("PB_ClosePic"));
        PB_ClosePic->setGeometry(QRect(195, 330, 40, 40));
        PB_ClosePic->setStyleSheet(QLatin1String("QPushButton {border-image: url(:/new/images/Images/Close_delete_remove_exit_cross_x_button_error.png)}\n"
""));
        PB_Pic = new QPushButton(tab);
        PB_Pic->setObjectName(QStringLiteral("PB_Pic"));
        PB_Pic->setGeometry(QRect(170, 323, 91, 51));
        PB_Pic->setCursor(QCursor(Qt::ArrowCursor));
        PB_Pic->setStyleSheet(QLatin1String("QPushButton::hover {border-image: url(:/new/images/Images/Posture Hover.png)}\n"
"QPushButton {border-image: url(:/new/images/Images/Posture.png)}"));
        progressBar = new QProgressBar(tab);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(29, 350, 108, 21));
        progressBar->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"    background-color:rgb(157, 157, 157);\n"
"    width: 10px;\n"
"	height: 30px;\n"
"    margin: 0.5px;\n"
"	background:rgb(157, 157, 157);\n"
"}"));
        progressBar->setValue(24);
        progressBar->setTextVisible(false);
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(44, 322, 91, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Rockwell"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("QLabel {color:white}"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(300, 315, 121, 31));
        label_8->setFont(font1);
        label_8->setStyleSheet(QStringLiteral("QLabel {color: white}"));
        progressBar_2 = new QProgressBar(tab);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(294, 350, 108, 21));
        progressBar_2->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"    background-color: rgb(85, 170, 0);\n"
"    width: 10px;\n"
"	height: 30px;\n"
"    margin: 0.5px;\n"
"	background:rgb(157, 157, 157);\n"
"\n"
"\n"
"}\n"
""));
        progressBar_2->setValue(24);
        progressBar_2->setTextVisible(false);
        tabWidget->addTab(tab, QString());
        TL_ErgoPic->raise();
        label_14->raise();
        TL_timetillnextexercise->raise();
        label_11->raise();
        progressBar->raise();
        label_5->raise();
        label_8->raise();
        progressBar_2->raise();
        PB_ClosePic->raise();
        PB_Pic->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        CB_Min = new QCheckBox(tab_2);
        CB_Min->setObjectName(QStringLiteral("CB_Min"));

        gridLayout_2->addWidget(CB_Min, 4, 1, 1, 3);

        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 5, 3, 1, 4);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        LE_Weight = new QLineEdit(tab_2);
        LE_Weight->setObjectName(QStringLiteral("LE_Weight"));

        gridLayout_2->addWidget(LE_Weight, 2, 1, 1, 1);

        SB_Inches = new QSpinBox(tab_2);
        SB_Inches->setObjectName(QStringLiteral("SB_Inches"));

        gridLayout_2->addWidget(SB_Inches, 1, 3, 1, 1);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 2, 2, 1, 1);

        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_59 = new QLabel(tab_2);
        label_59->setObjectName(QStringLiteral("label_59"));

        gridLayout_2->addWidget(label_59, 3, 0, 1, 1);

        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 2, 1, 1);

        LE_Age = new QLineEdit(tab_2);
        LE_Age->setObjectName(QStringLiteral("LE_Age"));

        gridLayout_2->addWidget(LE_Age, 0, 1, 1, 5);

        SB_Feet = new QSpinBox(tab_2);
        SB_Feet->setObjectName(QStringLiteral("SB_Feet"));

        gridLayout_2->addWidget(SB_Feet, 1, 1, 1, 1);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 1, 4, 1, 1);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        RB_Exer = new QRadioButton(tab_2);
        RB_Exer->setObjectName(QStringLiteral("RB_Exer"));
        RB_Exer->setEnabled(false);
        RB_Exer->setChecked(false);

        gridLayout_2->addWidget(RB_Exer, 3, 4, 1, 2);

        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 4, 6, 1, 1);

        RB_Ergo = new QRadioButton(tab_2);
        RB_Ergo->setObjectName(QStringLiteral("RB_Ergo"));
        RB_Ergo->setChecked(true);

        gridLayout_2->addWidget(RB_Ergo, 3, 1, 1, 3);

        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 5, 0, 1, 2);

        tabWidget->addTab(tab_2, QString());
        label->raise();
        LE_Age->raise();
        label_59->raise();
        RB_Ergo->raise();
        RB_Exer->raise();
        pushButton->raise();
        label_2->raise();
        SB_Feet->raise();
        label_4->raise();
        label_7->raise();
        label_9->raise();
        LE_Weight->raise();
        SB_Inches->raise();
        label_6->raise();
        CB_Min->raise();
        pushButton_4->raise();
        pushButton_2->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout = new QGridLayout(tab_4);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_3 = new QPushButton(tab_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        SC_Ex_3 = new QScrollArea(tab_4);
        SC_Ex_3->setObjectName(QStringLiteral("SC_Ex_3"));
        SC_Ex_3->setAutoFillBackground(false);
        SC_Ex_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 394, 1044));
        gridLayout_11 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        CB_Levator = new QCheckBox(scrollAreaWidgetContents_3);
        CB_Levator->setObjectName(QStringLiteral("CB_Levator"));
        CB_Levator->setEnabled(true);
        QFont font2;
        font2.setFamily(QStringLiteral("Century Gothic"));
        CB_Levator->setFont(font2);

        gridLayout_17->addWidget(CB_Levator, 3, 2, 1, 1);

        textBrowser_25 = new QTextBrowser(scrollAreaWidgetContents_3);
        textBrowser_25->setObjectName(QStringLiteral("textBrowser_25"));

        gridLayout_17->addWidget(textBrowser_25, 1, 1, 1, 1);

        textBrowser_26 = new QTextBrowser(scrollAreaWidgetContents_3);
        textBrowser_26->setObjectName(QStringLiteral("textBrowser_26"));

        gridLayout_17->addWidget(textBrowser_26, 3, 1, 1, 1);

        label_57 = new QLabel(scrollAreaWidgetContents_3);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setMinimumSize(QSize(100, 100));
        label_57->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Levator Scapulae Stretch_2.png")));
        label_57->setScaledContents(true);

        gridLayout_17->addWidget(label_57, 3, 0, 1, 1);

        label_55 = new QLabel(scrollAreaWidgetContents_3);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setFont(font2);
        label_55->setTextFormat(Qt::RichText);
        label_55->setScaledContents(false);
        label_55->setAlignment(Qt::AlignCenter);
        label_55->setMargin(0);
        label_55->setIndent(-1);

        gridLayout_17->addWidget(label_55, 0, 1, 1, 1);

        CB_Seated = new QCheckBox(scrollAreaWidgetContents_3);
        CB_Seated->setObjectName(QStringLiteral("CB_Seated"));
        CB_Seated->setEnabled(true);
        CB_Seated->setFont(font2);

        gridLayout_17->addWidget(CB_Seated, 1, 2, 1, 1);

        label_58 = new QLabel(scrollAreaWidgetContents_3);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setFont(font2);
        label_58->setAlignment(Qt::AlignCenter);

        gridLayout_17->addWidget(label_58, 2, 1, 1, 1);

        label_56 = new QLabel(scrollAreaWidgetContents_3);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setMinimumSize(QSize(100, 100));
        label_56->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Seated Scapular Stretch-1.png")));
        label_56->setScaledContents(true);

        gridLayout_17->addWidget(label_56, 1, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_17, 3, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        label_37 = new QLabel(scrollAreaWidgetContents_3);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setMinimumSize(QSize(100, 100));
        label_37->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Neck_6.png")));
        label_37->setScaledContents(true);

        gridLayout_12->addWidget(label_37, 3, 0, 1, 1);

        label_38 = new QLabel(scrollAreaWidgetContents_3);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setFont(font2);
        label_38->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_38, 2, 1, 1, 1);

        CB_Neck = new QCheckBox(scrollAreaWidgetContents_3);
        CB_Neck->setObjectName(QStringLiteral("CB_Neck"));
        CB_Neck->setFont(font2);
        CB_Neck->setChecked(true);

        gridLayout_12->addWidget(CB_Neck, 3, 2, 1, 1);

        textBrowser_16 = new QTextBrowser(scrollAreaWidgetContents_3);
        textBrowser_16->setObjectName(QStringLiteral("textBrowser_16"));

        gridLayout_12->addWidget(textBrowser_16, 3, 1, 1, 1);

        label_35 = new QLabel(scrollAreaWidgetContents_3);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setFont(font2);
        label_35->setTextFormat(Qt::RichText);
        label_35->setScaledContents(false);
        label_35->setAlignment(Qt::AlignCenter);
        label_35->setMargin(0);
        label_35->setIndent(-1);

        gridLayout_12->addWidget(label_35, 0, 1, 1, 1);

        label_36 = new QLabel(scrollAreaWidgetContents_3);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setMinimumSize(QSize(100, 100));
        label_36->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Wrists_1.png")));
        label_36->setScaledContents(true);

        gridLayout_12->addWidget(label_36, 1, 0, 1, 1);

        textBrowser_15 = new QTextBrowser(scrollAreaWidgetContents_3);
        textBrowser_15->setObjectName(QStringLiteral("textBrowser_15"));

        gridLayout_12->addWidget(textBrowser_15, 1, 1, 1, 1);

        CB_Wrists = new QCheckBox(scrollAreaWidgetContents_3);
        CB_Wrists->setObjectName(QStringLiteral("CB_Wrists"));
        CB_Wrists->setEnabled(true);
        CB_Wrists->setFont(font2);
        CB_Wrists->setCheckable(true);
        CB_Wrists->setChecked(true);

        gridLayout_12->addWidget(CB_Wrists, 1, 2, 1, 1);


        gridLayout_11->addLayout(gridLayout_12, 0, 0, 1, 1);

        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        CB_Eyes = new QCheckBox(scrollAreaWidgetContents_3);
        CB_Eyes->setObjectName(QStringLiteral("CB_Eyes"));
        CB_Eyes->setEnabled(false);
        CB_Eyes->setFont(font2);
        CB_Eyes->setChecked(true);

        gridLayout_16->addWidget(CB_Eyes, 3, 2, 1, 1);

        textBrowser_23 = new QTextBrowser(scrollAreaWidgetContents_3);
        textBrowser_23->setObjectName(QStringLiteral("textBrowser_23"));

        gridLayout_16->addWidget(textBrowser_23, 1, 1, 1, 1);

        CB_Legs = new QCheckBox(scrollAreaWidgetContents_3);
        CB_Legs->setObjectName(QStringLiteral("CB_Legs"));
        CB_Legs->setFont(font2);
        CB_Legs->setChecked(true);

        gridLayout_16->addWidget(CB_Legs, 1, 2, 1, 1);

        label_51 = new QLabel(scrollAreaWidgetContents_3);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setFont(font2);
        label_51->setTextFormat(Qt::RichText);
        label_51->setScaledContents(false);
        label_51->setAlignment(Qt::AlignCenter);
        label_51->setMargin(0);
        label_51->setIndent(-1);

        gridLayout_16->addWidget(label_51, 0, 1, 1, 1);

        textBrowser_24 = new QTextBrowser(scrollAreaWidgetContents_3);
        textBrowser_24->setObjectName(QStringLiteral("textBrowser_24"));

        gridLayout_16->addWidget(textBrowser_24, 3, 1, 1, 1);

        label_53 = new QLabel(scrollAreaWidgetContents_3);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setMinimumSize(QSize(100, 100));
        label_53->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/trees.png")));

        gridLayout_16->addWidget(label_53, 3, 0, 1, 1);

        label_54 = new QLabel(scrollAreaWidgetContents_3);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setFont(font2);
        label_54->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_54, 2, 1, 1, 1);

        label_52 = new QLabel(scrollAreaWidgetContents_3);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setMinimumSize(QSize(100, 100));
        label_52->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Legs_1.png")));
        label_52->setScaledContents(true);

        gridLayout_16->addWidget(label_52, 1, 0, 1, 1);


        gridLayout_11->addLayout(gridLayout_16, 2, 0, 1, 1);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        label_41 = new QLabel(scrollAreaWidgetContents_3);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setMinimumSize(QSize(100, 100));
        label_41->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Backs_1.png")));
        label_41->setScaledContents(true);

        gridLayout_13->addWidget(label_41, 3, 0, 1, 1);

        textBrowser_18 = new QTextBrowser(scrollAreaWidgetContents_3);
        textBrowser_18->setObjectName(QStringLiteral("textBrowser_18"));

        gridLayout_13->addWidget(textBrowser_18, 3, 1, 1, 1);

        CB_Shoulders = new QCheckBox(scrollAreaWidgetContents_3);
        CB_Shoulders->setObjectName(QStringLiteral("CB_Shoulders"));
        CB_Shoulders->setFont(font2);
        CB_Shoulders->setChecked(true);

        gridLayout_13->addWidget(CB_Shoulders, 1, 2, 1, 1);

        CB_Backs = new QCheckBox(scrollAreaWidgetContents_3);
        CB_Backs->setObjectName(QStringLiteral("CB_Backs"));
        CB_Backs->setFont(font2);
        CB_Backs->setChecked(true);

        gridLayout_13->addWidget(CB_Backs, 3, 2, 1, 1);

        label_39 = new QLabel(scrollAreaWidgetContents_3);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setFont(font2);
        label_39->setTextFormat(Qt::RichText);
        label_39->setScaledContents(false);
        label_39->setAlignment(Qt::AlignCenter);
        label_39->setMargin(0);
        label_39->setIndent(-1);

        gridLayout_13->addWidget(label_39, 0, 1, 1, 1);

        label_40 = new QLabel(scrollAreaWidgetContents_3);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setMinimumSize(QSize(100, 100));
        label_40->setPixmap(QPixmap(QString::fromUtf8(":/new/images/Images/Shoulders_1.png")));
        label_40->setScaledContents(true);

        gridLayout_13->addWidget(label_40, 1, 0, 1, 1);

        textBrowser_17 = new QTextBrowser(scrollAreaWidgetContents_3);
        textBrowser_17->setObjectName(QStringLiteral("textBrowser_17"));

        gridLayout_13->addWidget(textBrowser_17, 1, 1, 1, 1);

        label_42 = new QLabel(scrollAreaWidgetContents_3);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setFont(font2);
        label_42->setAlignment(Qt::AlignCenter);

        gridLayout_13->addWidget(label_42, 2, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_13, 1, 0, 1, 1);

        SC_Ex_3->setWidget(scrollAreaWidgetContents_3);

        gridLayout->addWidget(SC_Ex_3, 1, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());

        gridLayout_7->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        TL_timetillnextexercise->setText(QApplication::translate("MainWindow", "59:58", Q_NULLPTR));
        label_14->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "Next Break", Q_NULLPTR));
        TL_ErgoPic->setText(QString());
        PB_ClosePic->setText(QString());
        PB_Pic->setText(QString());
#ifndef QT_NO_STATUSTIP
        progressBar->setStatusTip(QApplication::translate("MainWindow", "Mouse", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        label_5->setText(QApplication::translate("MainWindow", "Mouse Usage", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Keyboard Usage", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        progressBar_2->setStatusTip(QApplication::translate("MainWindow", "Keyboard", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QString());
        CB_Min->setText(QApplication::translate("MainWindow", "Only Stretch for 3 Minutes Every Hour", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Disable Chrono Posture Guard", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Height:", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Pounds", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Age:", Q_NULLPTR));
        label_59->setText(QApplication::translate("MainWindow", "Mode:", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Feet", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Inches", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Weight:", Q_NULLPTR));
        RB_Exer->setText(QApplication::translate("MainWindow", "Exercise", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        RB_Ergo->setText(QApplication::translate("MainWindow", "Ergonomics", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Activate Chrono Posture Guard", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "Save Settings", Q_NULLPTR));
        CB_Levator->setText(QApplication::translate("MainWindow", "Select", Q_NULLPTR));
        textBrowser_25->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Good for fixing unbalanced shoulders.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Sit on the hand of the shoulder that is higher, and pull your head back with the hand of the shoulder that is lower.</p></body></html>", Q_NULLPTR));
        textBrowser_26->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Good for fixing unbalanced shoulders.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Grasp the arm of the side that has the lower shoulder and pull towards the opposide of the body. Next, tilt your head towards the side with the higher shoulder and look down.</p></body></html>", Q_NULLPTR));
        label_57->setText(QString());
        label_55->setText(QApplication::translate("MainWindow", "Seated Scapular Stretch", Q_NULLPTR));
        CB_Seated->setText(QApplication::translate("MainWindow", "Select", Q_NULLPTR));
        label_58->setText(QApplication::translate("MainWindow", "Levator Scapular Stretch", Q_NULLPTR));
        label_56->setText(QString());
        label_37->setText(QString());
        label_38->setText(QApplication::translate("MainWindow", "Neck", Q_NULLPTR));
        CB_Neck->setText(QApplication::translate("MainWindow", "Select", Q_NULLPTR));
        textBrowser_16->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Head turns to one side.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow", "Wrists, hands and arms", Q_NULLPTR));
        label_36->setText(QString());
        textBrowser_15->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Straighten your arms and hold back one hand.</p></body></html>", Q_NULLPTR));
        CB_Wrists->setText(QApplication::translate("MainWindow", "Select", Q_NULLPTR));
        CB_Eyes->setText(QApplication::translate("MainWindow", "Select", Q_NULLPTR));
        textBrowser_23->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Bend one leg and straighten the other leg. </p></body></html>", Q_NULLPTR));
        CB_Legs->setText(QApplication::translate("MainWindow", "Select", Q_NULLPTR));
        label_51->setText(QApplication::translate("MainWindow", "Leg stretches & exercise", Q_NULLPTR));
        textBrowser_24->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Automatic exercise that commences when all others are finished. Look at trees or things at a distance while your screen is turned off. </p></body></html>", Q_NULLPTR));
        label_53->setText(QString());
        label_54->setText(QApplication::translate("MainWindow", "Eyes", Q_NULLPTR));
        label_52->setText(QString());
        label_41->setText(QString());
        textBrowser_18->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Hands hold your back and take back stretch.</p></body></html>", Q_NULLPTR));
        CB_Shoulders->setText(QApplication::translate("MainWindow", "Select", Q_NULLPTR));
        CB_Backs->setText(QApplication::translate("MainWindow", "Select", Q_NULLPTR));
        label_39->setText(QApplication::translate("MainWindow", "Shoulders", Q_NULLPTR));
        label_40->setText(QString());
        textBrowser_17->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">One arm holds another arm for shoulder stretch.</p></body></html>", Q_NULLPTR));
        label_42->setText(QApplication::translate("MainWindow", "Upper and lower back", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
