/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QAction *action;
    QWidget *centralwidget;
    QLabel *Name_Groupe;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QTimeEdit *from;
    QLabel *label;
    QPushButton *pushButton;
    QTimeEdit *to;
    QPushButton *find_aud;
    QTableWidget *two_week;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_6;
    QTableWidget *one_week;
    QTableWidget *five_week;
    QTableWidget *three_week;
    QLabel *label_5;
    QTableWidget *four_week;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *Background;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->setEnabled(true);
        Menu->resize(1076, 968);
        action = new QAction(Menu);
        action->setObjectName(QStringLiteral("action"));
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Name_Groupe = new QLabel(centralwidget);
        Name_Groupe->setObjectName(QStringLiteral("Name_Groupe"));
        Name_Groupe->setGeometry(QRect(0, 0, 1041, 81));
        QFont font;
        font.setPointSize(24);
        Name_Groupe->setFont(font);
        Name_Groupe->setStyleSheet(QLatin1String("background-color: rgb(51, 103, 153);\n"
"color: rgb(0, 255, 255);\n"
""));
        Name_Groupe->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 80, 1071, 841));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.602273 rgba(104, 79, 255, 255), stop:0.965909 rgba(136, 117, 255, 255));\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(pushButton_2, 3, 0, 1, 5);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color: rgb(53, 212, 255);"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_7, 2, 3, 1, 1);

        from = new QTimeEdit(gridLayoutWidget);
        from->setObjectName(QStringLiteral("from"));
        from->setMaximumTime(QTime(20, 0, 0));
        from->setMinimumTime(QTime(10, 0, 0));

        gridLayout_2->addWidget(from, 2, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color: rgb(53, 212, 255);"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 2, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.602273 rgba(104, 79, 255, 255), stop:0.965909 rgba(136, 117, 255, 255));\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 5);

        to = new QTimeEdit(gridLayoutWidget);
        to->setObjectName(QStringLiteral("to"));
        to->setMaximumTime(QTime(20, 0, 0));
        to->setMinimumTime(QTime(10, 0, 0));

        gridLayout_2->addWidget(to, 2, 4, 1, 1);

        find_aud = new QPushButton(gridLayoutWidget);
        find_aud->setObjectName(QStringLiteral("find_aud"));
        find_aud->setCursor(QCursor(Qt::PointingHandCursor));
        find_aud->setStyleSheet(QLatin1String("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.602273 rgba(104, 79, 255, 255), stop:0.965909 rgba(136, 117, 255, 255));\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"font: 75 11pt \"MS Shell Dlg 2\";"));

        gridLayout_2->addWidget(find_aud, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 8, 1, 1, 1);

        two_week = new QTableWidget(gridLayoutWidget);
        if (two_week->columnCount() < 4)
            two_week->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        two_week->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setPointSize(7);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        two_week->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        two_week->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        two_week->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (two_week->rowCount() < 7)
            two_week->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        two_week->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        two_week->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        two_week->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        two_week->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        two_week->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        two_week->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        two_week->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QFont font2;
        font2.setPointSize(16);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem11->setFont(font2);
        two_week->setItem(0, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem12->setFont(font2);
        two_week->setItem(1, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem13->setFont(font2);
        two_week->setItem(2, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem14->setFont(font2);
        two_week->setItem(3, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem15->setFont(font2);
        two_week->setItem(4, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem16->setFont(font2);
        two_week->setItem(5, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem17->setFont(font2);
        two_week->setItem(6, 0, __qtablewidgetitem17);
        two_week->setObjectName(QStringLiteral("two_week"));
        two_week->setEnabled(true);
        two_week->setStyleSheet(QString::fromUtf8("font: 11pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(51, 103, 153);\n"
"background-image: url(:/Menu/Menu/\320\244\320\276\320\275 \321\202\320\260\320\261\320\273\320\270\321\206.jpg);\n"
"color: rgb(255, 196, 58);"));
        two_week->setShowGrid(true);
        two_week->setGridStyle(Qt::SolidLine);
        two_week->setWordWrap(true);
        two_week->setCornerButtonEnabled(true);
        two_week->setRowCount(7);
        two_week->setColumnCount(4);

        gridLayout->addWidget(two_week, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/Menu/Menu/\320\235\320\265\320\264\320\265\320\273\320\270.png);"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/Menu/Menu/\320\235\320\265\320\264\320\265\320\273\320\270.png);\n"
"color: rgb(53, 212, 255);"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("background-image: url(:/Menu/Menu/\320\235\320\265\320\264\320\265\320\273\320\270.png);"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        one_week = new QTableWidget(gridLayoutWidget);
        if (one_week->columnCount() < 4)
            one_week->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        one_week->setHorizontalHeaderItem(0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setFont(font1);
        one_week->setHorizontalHeaderItem(1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        one_week->setHorizontalHeaderItem(2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        one_week->setHorizontalHeaderItem(3, __qtablewidgetitem21);
        if (one_week->rowCount() < 7)
            one_week->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        one_week->setVerticalHeaderItem(0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        one_week->setVerticalHeaderItem(1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        one_week->setVerticalHeaderItem(2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        one_week->setVerticalHeaderItem(3, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        one_week->setVerticalHeaderItem(4, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        one_week->setVerticalHeaderItem(5, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        one_week->setVerticalHeaderItem(6, __qtablewidgetitem28);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem29->setFont(font2);
        __qtablewidgetitem29->setBackground(brush);
        one_week->setItem(0, 0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem30->setFont(font2);
        one_week->setItem(1, 0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem31->setFont(font2);
        one_week->setItem(2, 0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem32->setFont(font2);
        one_week->setItem(3, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem33->setFont(font2);
        one_week->setItem(4, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem34->setFont(font2);
        one_week->setItem(5, 0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem35->setFont(font2);
        one_week->setItem(6, 0, __qtablewidgetitem35);
        one_week->setObjectName(QStringLiteral("one_week"));
        one_week->setEnabled(true);
        one_week->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        one_week->setAutoFillBackground(false);
        one_week->setStyleSheet(QString::fromUtf8("font: 11pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(51, 103, 153);\n"
"background-image: url(:/Menu/Menu/\320\244\320\276\320\275 \321\202\320\260\320\261\320\273\320\270\321\206.jpg);\n"
"color: rgb(255, 196, 58);"));
        one_week->setFrameShape(QFrame::StyledPanel);
        one_week->setShowGrid(true);
        one_week->setGridStyle(Qt::SolidLine);
        one_week->setWordWrap(true);
        one_week->setCornerButtonEnabled(true);
        one_week->setRowCount(7);
        one_week->setColumnCount(4);

        gridLayout->addWidget(one_week, 2, 0, 1, 1);

        five_week = new QTableWidget(gridLayoutWidget);
        if (five_week->columnCount() < 4)
            five_week->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        five_week->setHorizontalHeaderItem(0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setFont(font1);
        five_week->setHorizontalHeaderItem(1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        five_week->setHorizontalHeaderItem(2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        five_week->setHorizontalHeaderItem(3, __qtablewidgetitem39);
        if (five_week->rowCount() < 6)
            five_week->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        five_week->setVerticalHeaderItem(0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        five_week->setVerticalHeaderItem(1, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        five_week->setVerticalHeaderItem(2, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        five_week->setVerticalHeaderItem(3, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        five_week->setVerticalHeaderItem(4, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        five_week->setVerticalHeaderItem(5, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem46->setFont(font2);
        five_week->setItem(0, 0, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem47->setFont(font2);
        five_week->setItem(1, 0, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem48->setFont(font2);
        five_week->setItem(2, 0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem49->setFont(font2);
        five_week->setItem(3, 0, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem50->setFont(font2);
        five_week->setItem(4, 0, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem51->setFont(font2);
        five_week->setItem(5, 0, __qtablewidgetitem51);
        five_week->setObjectName(QStringLiteral("five_week"));
        five_week->setEnabled(true);
        five_week->setStyleSheet(QString::fromUtf8("font: 75 11pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 0, 0);\n"
"background-image: url(:/Menu/Menu/\320\244\320\276\320\275 \321\202\320\260\320\261\320\273\320\270\321\206.jpg);\n"
"color: rgb(255, 196, 58);"));
        five_week->setShowGrid(true);
        five_week->setGridStyle(Qt::SolidLine);
        five_week->setWordWrap(true);
        five_week->setCornerButtonEnabled(true);
        five_week->setRowCount(6);
        five_week->setColumnCount(4);

        gridLayout->addWidget(five_week, 8, 0, 1, 1);

        three_week = new QTableWidget(gridLayoutWidget);
        if (three_week->columnCount() < 4)
            three_week->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        three_week->setHorizontalHeaderItem(0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        __qtablewidgetitem53->setFont(font1);
        three_week->setHorizontalHeaderItem(1, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        three_week->setHorizontalHeaderItem(2, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        three_week->setHorizontalHeaderItem(3, __qtablewidgetitem55);
        if (three_week->rowCount() < 7)
            three_week->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        three_week->setVerticalHeaderItem(0, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        three_week->setVerticalHeaderItem(1, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        three_week->setVerticalHeaderItem(2, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        three_week->setVerticalHeaderItem(3, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        three_week->setVerticalHeaderItem(4, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        three_week->setVerticalHeaderItem(5, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        three_week->setVerticalHeaderItem(6, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        __qtablewidgetitem63->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem63->setFont(font2);
        three_week->setItem(0, 0, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        __qtablewidgetitem64->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem64->setFont(font2);
        three_week->setItem(1, 0, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        __qtablewidgetitem65->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem65->setFont(font2);
        three_week->setItem(2, 0, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        __qtablewidgetitem66->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem66->setFont(font2);
        three_week->setItem(3, 0, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        __qtablewidgetitem67->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem67->setFont(font2);
        three_week->setItem(4, 0, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        __qtablewidgetitem68->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem68->setFont(font2);
        three_week->setItem(5, 0, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        __qtablewidgetitem69->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem69->setFont(font2);
        three_week->setItem(6, 0, __qtablewidgetitem69);
        three_week->setObjectName(QStringLiteral("three_week"));
        three_week->setEnabled(true);
        three_week->setStyleSheet(QString::fromUtf8("font: 75 11pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(0, 25, 255);\n"
"background-image: url(:/Menu/Menu/\320\244\320\276\320\275 \321\202\320\260\320\261\320\273\320\270\321\206.jpg);\n"
"color: rgb(255, 196, 58);\n"
""));
        three_week->setShowGrid(true);
        three_week->setGridStyle(Qt::SolidLine);
        three_week->setWordWrap(true);
        three_week->setCornerButtonEnabled(true);
        three_week->setRowCount(7);
        three_week->setColumnCount(4);

        gridLayout->addWidget(three_week, 4, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/Menu/Menu/\320\235\320\265\320\264\320\265\320\273\320\270.png);"));

        gridLayout->addWidget(label_5, 3, 1, 1, 1);

        four_week = new QTableWidget(gridLayoutWidget);
        if (four_week->columnCount() < 4)
            four_week->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        four_week->setHorizontalHeaderItem(0, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        __qtablewidgetitem71->setFont(font1);
        four_week->setHorizontalHeaderItem(1, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        four_week->setHorizontalHeaderItem(2, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        four_week->setHorizontalHeaderItem(3, __qtablewidgetitem73);
        if (four_week->rowCount() < 7)
            four_week->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        four_week->setVerticalHeaderItem(0, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        four_week->setVerticalHeaderItem(1, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        four_week->setVerticalHeaderItem(2, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        four_week->setVerticalHeaderItem(3, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        four_week->setVerticalHeaderItem(4, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        four_week->setVerticalHeaderItem(5, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        four_week->setVerticalHeaderItem(6, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        __qtablewidgetitem81->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem81->setFont(font2);
        four_week->setItem(0, 0, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        __qtablewidgetitem82->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem82->setFont(font2);
        four_week->setItem(1, 0, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        __qtablewidgetitem83->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem83->setFont(font2);
        four_week->setItem(2, 0, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        __qtablewidgetitem84->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem84->setFont(font2);
        four_week->setItem(3, 0, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        __qtablewidgetitem85->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem85->setFont(font2);
        four_week->setItem(4, 0, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        __qtablewidgetitem86->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem86->setFont(font2);
        four_week->setItem(5, 0, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        __qtablewidgetitem87->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem87->setFont(font2);
        four_week->setItem(6, 0, __qtablewidgetitem87);
        four_week->setObjectName(QStringLiteral("four_week"));
        four_week->setEnabled(true);
        four_week->setStyleSheet(QString::fromUtf8("font: 75 11pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(0, 25, 255);\n"
"background-image: url(:/Menu/Menu/\320\244\320\276\320\275 \321\202\320\260\320\261\320\273\320\270\321\206.jpg);\n"
"color: rgb(255, 196, 58);"));
        four_week->setShowGrid(true);
        four_week->setGridStyle(Qt::SolidLine);
        four_week->setWordWrap(true);
        four_week->setCornerButtonEnabled(true);
        four_week->setRowCount(7);
        four_week->setColumnCount(4);

        gridLayout->addWidget(four_week, 4, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/Menu/Menu/\320\235\320\265\320\264\320\265\320\273\320\270.png);\n"
"font: 75 18pt \"MS Shell Dlg 2\";\n"
"color: rgb(37, 212, 255);"));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 0, 91, 81));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Menu/Menu/\320\227\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(100, 85));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(980, 0, 91, 81));
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(100, 85));
        Background = new QLabel(centralwidget);
        Background->setObjectName(QStringLiteral("Background"));
        Background->setGeometry(QRect(-4, -8, 1081, 961));
        Background->setStyleSheet(QStringLiteral("background-color: rgb(41, 49, 71);"));
        Menu->setCentralWidget(centralwidget);
        Background->raise();
        Name_Groupe->raise();
        gridLayoutWidget->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        menubar = new QMenuBar(Menu);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1076, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        Menu->setMenuBar(menubar);
        statusbar = new QStatusBar(Menu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Menu->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "MainWindow", nullptr));
        action->setText(QApplication::translate("Menu", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        Name_Groupe->setText(QApplication::translate("Menu", "<html><head/><body><p align=\"center\">\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \320\263\321\200\321\203\320\277\320\277\321\213</p></body></html>", nullptr));
        pushButton_2->setText(QApplication::translate("Menu", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\263\321\200\321\203\320\277\320\277\321\203", nullptr));
        label_7->setText(QApplication::translate("Menu", "\320\224\320\276", nullptr));
        label->setText(QApplication::translate("Menu", "\320\236\321\202", nullptr));
        pushButton->setText(QApplication::translate("Menu", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \321\200\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \321\215\320\272\320\267\320\260\320\274\320\265\320\275\320\276\320\262", nullptr));
        find_aud->setText(QApplication::translate("Menu", "\320\235\320\260\320\271\321\202\320\270 \321\201\320\262\320\276\320\261\320\276\320\264\320\275\321\203\321\216 \320\260\321\203\320\264\320\270\321\202\320\276\321\200\320\270\320\270\321\216 \320\262 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem = two_week->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Menu", "\320\247\320\270\321\201\320\273\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = two_week->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Menu", "\320\224\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\320\260\n"
"\320\230\320\274\321\217 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = two_week->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Menu", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = two_week->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Menu", "\342\204\226 \320\260\321\203\320\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = two_week->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("Menu", "\320\237\320\276\320\275\320\265\320\264\320\265\320\273\321\214\320\275\320\270\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = two_week->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("Menu", "\320\222\321\202\320\276\321\200\320\275\320\270\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = two_week->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("Menu", "\320\241\321\200\320\265\320\264\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = two_week->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("Menu", "\320\247\320\265\321\202\320\262\320\265\321\200\320\263", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = two_week->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("Menu", "\320\237\321\217\321\202\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = two_week->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("Menu", "\320\241\321\203\320\261\320\261\320\276\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = two_week->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QApplication::translate("Menu", "\320\222\320\276\321\201\320\272\321\200\320\265\321\201\320\265\320\275\321\214\320\265", nullptr));

        const bool __sortingEnabled = two_week->isSortingEnabled();
        two_week->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem11 = two_week->item(0, 0);
        ___qtablewidgetitem11->setText(QApplication::translate("Menu", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = two_week->item(1, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("Menu", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = two_week->item(2, 0);
        ___qtablewidgetitem13->setText(QApplication::translate("Menu", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = two_week->item(3, 0);
        ___qtablewidgetitem14->setText(QApplication::translate("Menu", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = two_week->item(4, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("Menu", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = two_week->item(5, 0);
        ___qtablewidgetitem16->setText(QApplication::translate("Menu", "9", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = two_week->item(6, 0);
        ___qtablewidgetitem17->setText(QApplication::translate("Menu", "10", nullptr));
        two_week->setSortingEnabled(__sortingEnabled);

        label_4->setText(QApplication::translate("Menu", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#35d4ff;\">3 \320\275\320\265\320\264\320\265\320\273\321\217</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("Menu", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">2 \320\275\320\265\320\264\320\265\320\273\321\217</span></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("Menu", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#35d4ff;\">5 \320\275\320\265\320\264\320\265\320\273\321\217</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = one_week->horizontalHeaderItem(0);
        ___qtablewidgetitem18->setText(QApplication::translate("Menu", "\320\247\320\270\321\201\320\273\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = one_week->horizontalHeaderItem(1);
        ___qtablewidgetitem19->setText(QApplication::translate("Menu", "\320\224\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\320\260\n"
"\320\230\320\274\321\217 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = one_week->horizontalHeaderItem(2);
        ___qtablewidgetitem20->setText(QApplication::translate("Menu", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = one_week->horizontalHeaderItem(3);
        ___qtablewidgetitem21->setText(QApplication::translate("Menu", "\342\204\226 \320\260\321\203\320\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = one_week->verticalHeaderItem(0);
        ___qtablewidgetitem22->setText(QApplication::translate("Menu", "\320\237\320\276\320\275\320\265\320\264\320\265\320\273\321\214\320\275\320\270\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = one_week->verticalHeaderItem(1);
        ___qtablewidgetitem23->setText(QApplication::translate("Menu", "\320\222\321\202\320\276\321\200\320\275\320\270\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = one_week->verticalHeaderItem(2);
        ___qtablewidgetitem24->setText(QApplication::translate("Menu", "\320\241\321\200\320\265\320\264\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = one_week->verticalHeaderItem(3);
        ___qtablewidgetitem25->setText(QApplication::translate("Menu", "\320\247\320\265\321\202\320\262\320\265\321\200\320\263", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = one_week->verticalHeaderItem(4);
        ___qtablewidgetitem26->setText(QApplication::translate("Menu", "\320\237\321\217\321\202\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = one_week->verticalHeaderItem(5);
        ___qtablewidgetitem27->setText(QApplication::translate("Menu", "\320\241\321\203\320\261\320\261\320\276\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = one_week->verticalHeaderItem(6);
        ___qtablewidgetitem28->setText(QApplication::translate("Menu", "\320\222\320\276\321\201\320\272\321\200\320\265\321\201\320\265\320\275\321\214\320\265", nullptr));

        const bool __sortingEnabled1 = one_week->isSortingEnabled();
        one_week->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem29 = one_week->item(0, 0);
        ___qtablewidgetitem29->setText(QApplication::translate("Menu", "28", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = one_week->item(1, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("Menu", "29", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = one_week->item(2, 0);
        ___qtablewidgetitem31->setText(QApplication::translate("Menu", "30", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = one_week->item(3, 0);
        ___qtablewidgetitem32->setText(QApplication::translate("Menu", "31", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = one_week->item(4, 0);
        ___qtablewidgetitem33->setText(QApplication::translate("Menu", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = one_week->item(5, 0);
        ___qtablewidgetitem34->setText(QApplication::translate("Menu", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = one_week->item(6, 0);
        ___qtablewidgetitem35->setText(QApplication::translate("Menu", "3", nullptr));
        one_week->setSortingEnabled(__sortingEnabled1);

        QTableWidgetItem *___qtablewidgetitem36 = five_week->horizontalHeaderItem(0);
        ___qtablewidgetitem36->setText(QApplication::translate("Menu", "\320\247\320\270\321\201\320\273\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = five_week->horizontalHeaderItem(1);
        ___qtablewidgetitem37->setText(QApplication::translate("Menu", "\320\224\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\320\260\n"
"\320\230\320\274\321\217 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = five_week->horizontalHeaderItem(2);
        ___qtablewidgetitem38->setText(QApplication::translate("Menu", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = five_week->horizontalHeaderItem(3);
        ___qtablewidgetitem39->setText(QApplication::translate("Menu", "\342\204\226 \320\260\321\203\320\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = five_week->verticalHeaderItem(0);
        ___qtablewidgetitem40->setText(QApplication::translate("Menu", "\320\237\320\276\320\275\320\265\320\264\320\265\320\273\321\214\320\275\320\270\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = five_week->verticalHeaderItem(1);
        ___qtablewidgetitem41->setText(QApplication::translate("Menu", "\320\222\321\202\320\276\321\200\320\275\320\270\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = five_week->verticalHeaderItem(2);
        ___qtablewidgetitem42->setText(QApplication::translate("Menu", "\320\241\321\200\320\265\320\264\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = five_week->verticalHeaderItem(3);
        ___qtablewidgetitem43->setText(QApplication::translate("Menu", "\320\247\320\265\321\202\320\262\320\265\321\200\320\263", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = five_week->verticalHeaderItem(4);
        ___qtablewidgetitem44->setText(QApplication::translate("Menu", "\320\237\321\217\321\202\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = five_week->verticalHeaderItem(5);
        ___qtablewidgetitem45->setText(QApplication::translate("Menu", "\320\241\321\203\320\261\320\261\320\276\321\202\320\260", nullptr));

        const bool __sortingEnabled2 = five_week->isSortingEnabled();
        five_week->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem46 = five_week->item(0, 0);
        ___qtablewidgetitem46->setText(QApplication::translate("Menu", "25", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = five_week->item(1, 0);
        ___qtablewidgetitem47->setText(QApplication::translate("Menu", "26", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = five_week->item(2, 0);
        ___qtablewidgetitem48->setText(QApplication::translate("Menu", "27", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = five_week->item(3, 0);
        ___qtablewidgetitem49->setText(QApplication::translate("Menu", "28", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = five_week->item(4, 0);
        ___qtablewidgetitem50->setText(QApplication::translate("Menu", "29", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = five_week->item(5, 0);
        ___qtablewidgetitem51->setText(QApplication::translate("Menu", "30", nullptr));
        five_week->setSortingEnabled(__sortingEnabled2);

        QTableWidgetItem *___qtablewidgetitem52 = three_week->horizontalHeaderItem(0);
        ___qtablewidgetitem52->setText(QApplication::translate("Menu", "\320\247\320\270\321\201\320\273\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = three_week->horizontalHeaderItem(1);
        ___qtablewidgetitem53->setText(QApplication::translate("Menu", "\320\224\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\320\260\n"
"\320\230\320\274\321\217 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = three_week->horizontalHeaderItem(2);
        ___qtablewidgetitem54->setText(QApplication::translate("Menu", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = three_week->horizontalHeaderItem(3);
        ___qtablewidgetitem55->setText(QApplication::translate("Menu", "\342\204\226 \320\260\321\203\320\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = three_week->verticalHeaderItem(0);
        ___qtablewidgetitem56->setText(QApplication::translate("Menu", "\320\237\320\276\320\275\320\265\320\264\320\265\320\273\321\214\320\275\320\270\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = three_week->verticalHeaderItem(1);
        ___qtablewidgetitem57->setText(QApplication::translate("Menu", "\320\222\321\202\320\276\321\200\320\275\320\270\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem58 = three_week->verticalHeaderItem(2);
        ___qtablewidgetitem58->setText(QApplication::translate("Menu", "\320\241\321\200\320\265\320\264\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem59 = three_week->verticalHeaderItem(3);
        ___qtablewidgetitem59->setText(QApplication::translate("Menu", "\320\247\320\265\321\202\320\262\320\265\321\200\320\263", nullptr));
        QTableWidgetItem *___qtablewidgetitem60 = three_week->verticalHeaderItem(4);
        ___qtablewidgetitem60->setText(QApplication::translate("Menu", "\320\237\321\217\321\202\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem61 = three_week->verticalHeaderItem(5);
        ___qtablewidgetitem61->setText(QApplication::translate("Menu", "\320\241\321\203\320\261\320\261\320\276\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem62 = three_week->verticalHeaderItem(6);
        ___qtablewidgetitem62->setText(QApplication::translate("Menu", "\320\222\320\276\321\201\320\272\321\200\320\265\321\201\320\265\320\275\321\214\320\265", nullptr));

        const bool __sortingEnabled3 = three_week->isSortingEnabled();
        three_week->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem63 = three_week->item(0, 0);
        ___qtablewidgetitem63->setText(QApplication::translate("Menu", "11", nullptr));
        QTableWidgetItem *___qtablewidgetitem64 = three_week->item(1, 0);
        ___qtablewidgetitem64->setText(QApplication::translate("Menu", "12", nullptr));
        QTableWidgetItem *___qtablewidgetitem65 = three_week->item(2, 0);
        ___qtablewidgetitem65->setText(QApplication::translate("Menu", "13", nullptr));
        QTableWidgetItem *___qtablewidgetitem66 = three_week->item(3, 0);
        ___qtablewidgetitem66->setText(QApplication::translate("Menu", "14", nullptr));
        QTableWidgetItem *___qtablewidgetitem67 = three_week->item(4, 0);
        ___qtablewidgetitem67->setText(QApplication::translate("Menu", "15", nullptr));
        QTableWidgetItem *___qtablewidgetitem68 = three_week->item(5, 0);
        ___qtablewidgetitem68->setText(QApplication::translate("Menu", "16", nullptr));
        QTableWidgetItem *___qtablewidgetitem69 = three_week->item(6, 0);
        ___qtablewidgetitem69->setText(QApplication::translate("Menu", "17", nullptr));
        three_week->setSortingEnabled(__sortingEnabled3);

        label_5->setText(QApplication::translate("Menu", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#35d4ff;\">4 \320\275\320\265\320\264\320\265\320\273\321\217</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem70 = four_week->horizontalHeaderItem(0);
        ___qtablewidgetitem70->setText(QApplication::translate("Menu", "\320\247\320\270\321\201\320\273\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem71 = four_week->horizontalHeaderItem(1);
        ___qtablewidgetitem71->setText(QApplication::translate("Menu", "\320\224\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\320\260\n"
"\320\230\320\274\321\217 \320\277\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem72 = four_week->horizontalHeaderItem(2);
        ___qtablewidgetitem72->setText(QApplication::translate("Menu", "\320\222\321\200\320\265\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem73 = four_week->horizontalHeaderItem(3);
        ___qtablewidgetitem73->setText(QApplication::translate("Menu", "\342\204\226 \320\260\321\203\320\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem74 = four_week->verticalHeaderItem(0);
        ___qtablewidgetitem74->setText(QApplication::translate("Menu", "\320\237\320\276\320\275\320\265\320\264\320\265\320\273\321\214\320\275\320\270\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem75 = four_week->verticalHeaderItem(1);
        ___qtablewidgetitem75->setText(QApplication::translate("Menu", "\320\222\321\202\320\276\321\200\320\275\320\270\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem76 = four_week->verticalHeaderItem(2);
        ___qtablewidgetitem76->setText(QApplication::translate("Menu", "\320\241\321\200\320\265\320\264\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem77 = four_week->verticalHeaderItem(3);
        ___qtablewidgetitem77->setText(QApplication::translate("Menu", "\320\247\320\265\321\202\320\262\320\265\321\200\320\263", nullptr));
        QTableWidgetItem *___qtablewidgetitem78 = four_week->verticalHeaderItem(4);
        ___qtablewidgetitem78->setText(QApplication::translate("Menu", "\320\237\321\217\321\202\320\275\320\270\321\206\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem79 = four_week->verticalHeaderItem(5);
        ___qtablewidgetitem79->setText(QApplication::translate("Menu", "\320\241\321\203\320\261\320\261\320\276\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem80 = four_week->verticalHeaderItem(6);
        ___qtablewidgetitem80->setText(QApplication::translate("Menu", "\320\222\320\276\321\201\320\272\321\200\320\265\321\201\320\265\320\275\321\214\320\265", nullptr));

        const bool __sortingEnabled4 = four_week->isSortingEnabled();
        four_week->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem81 = four_week->item(0, 0);
        ___qtablewidgetitem81->setText(QApplication::translate("Menu", "18", nullptr));
        QTableWidgetItem *___qtablewidgetitem82 = four_week->item(1, 0);
        ___qtablewidgetitem82->setText(QApplication::translate("Menu", "19", nullptr));
        QTableWidgetItem *___qtablewidgetitem83 = four_week->item(2, 0);
        ___qtablewidgetitem83->setText(QApplication::translate("Menu", "20", nullptr));
        QTableWidgetItem *___qtablewidgetitem84 = four_week->item(3, 0);
        ___qtablewidgetitem84->setText(QApplication::translate("Menu", "21", nullptr));
        QTableWidgetItem *___qtablewidgetitem85 = four_week->item(4, 0);
        ___qtablewidgetitem85->setText(QApplication::translate("Menu", "22", nullptr));
        QTableWidgetItem *___qtablewidgetitem86 = four_week->item(5, 0);
        ___qtablewidgetitem86->setText(QApplication::translate("Menu", "23", nullptr));
        QTableWidgetItem *___qtablewidgetitem87 = four_week->item(6, 0);
        ___qtablewidgetitem87->setText(QApplication::translate("Menu", "24", nullptr));
        four_week->setSortingEnabled(__sortingEnabled4);

        label_2->setText(QApplication::translate("Menu", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#35d4ff;\">1 \320\275\320\265\320\264\320\265\320\273\321\217</span></p></body></html>", nullptr));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        Background->setText(QString());
        menu->setTitle(QApplication::translate("Menu", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
