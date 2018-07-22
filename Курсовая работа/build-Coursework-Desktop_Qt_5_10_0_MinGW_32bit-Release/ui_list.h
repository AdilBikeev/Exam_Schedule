/********************************************************************************
** Form generated from reading UI file 'list.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIST_H
#define UI_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_List
{
public:
    QAction *action;
    QWidget *centralwidget;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *List)
    {
        if (List->objectName().isEmpty())
            List->setObjectName(QStringLiteral("List"));
        List->resize(1253, 785);
        List->setStyleSheet(QStringLiteral("background-color: rgb(51, 103, 153);"));
        action = new QAction(List);
        action->setObjectName(QStringLiteral("action"));
        centralwidget = new QWidget(List);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 270, 801, 20));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(30, 290, 1200, 331));
        textEdit->setMinimumSize(QSize(1200, 10));
        textEdit->setStyleSheet(QStringLiteral("color: rgb(251, 255, 2);"));
        textEdit->setReadOnly(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 60, 801, 141));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/List/List/\320\227\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272.jpg);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 0, 1241, 761));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/List/List/\320\244\320\276\320\275.jpg);"));
        List->setCentralWidget(centralwidget);
        label_3->raise();
        label->raise();
        textEdit->raise();
        label_2->raise();
        menubar = new QMenuBar(List);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1253, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        List->setMenuBar(menubar);
        statusbar = new QStatusBar(List);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        List->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(List);

        QMetaObject::connectSlotsByName(List);
    } // setupUi

    void retranslateUi(QMainWindow *List)
    {
        List->setWindowTitle(QApplication::translate("List", "MainWindow", nullptr));
        action->setText(QApplication::translate("List", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        label->setText(QApplication::translate("List", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:600; color:#000000;\">\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\321\203\321\201\321\202\321\213\321\205 \320\260\321\203\320\264\320\270\321\202\320\276\321\200\320\270\320\271</span></p></body></html>", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        menu->setTitle(QApplication::translate("List", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class List: public Ui_List {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIST_H
