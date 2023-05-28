/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *butt_hostServ_3;
    QPushButton *butt_hostServ_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *butt_sendMessage;
    QLineEdit *nick;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1120, 787);
        MainWindow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(245, 224, 176, 255), stop:0.09 rgba(246, 189, 237, 255), stop:0.14 rgba(194, 207, 246, 255), stop:0.19 rgba(184, 160, 168, 255), stop:0.25 rgba(171, 186, 248, 255), stop:0.32 rgba(243, 248, 224, 255), stop:0.385 rgba(249, 162, 183, 255), stop:0.47 rgba(100, 115, 124, 255), stop:0.58 rgba(251, 205, 202, 255), stop:0.65 rgba(170, 128, 185, 255), stop:0.75 rgba(252, 222, 204, 255), stop:0.805 rgba(206, 122, 218, 255), stop:0.86 rgba(254, 223, 175, 255), stop:0.91 rgba(254, 236, 244, 255), stop:1 rgba(255, 191, 221, 255));\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        butt_hostServ_3 = new QPushButton(centralwidget);
        butt_hostServ_3->setObjectName("butt_hostServ_3");
        butt_hostServ_3->setMinimumSize(QSize(140, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(12);
        font.setBold(true);
        butt_hostServ_3->setFont(font);
        butt_hostServ_3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 85, 255);\n"
"border-radius: 10px;"));

        verticalLayout->addWidget(butt_hostServ_3);

        butt_hostServ_2 = new QPushButton(centralwidget);
        butt_hostServ_2->setObjectName("butt_hostServ_2");
        butt_hostServ_2->setMinimumSize(QSize(140, 50));
        butt_hostServ_2->setFont(font);
        butt_hostServ_2->setCursor(QCursor(Qt::PointingHandCursor));
        butt_hostServ_2->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;"));

        verticalLayout->addWidget(butt_hostServ_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setPointSize(14);
        font1.setBold(true);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("padding-left: 5px;\n"
"border-radius: 10px; \n"
"background-color:rgb(29, 29, 29);\n"
"color:  rgb(170, 85, 255);"));
        lineEdit->setEchoMode(QLineEdit::Normal);

        horizontalLayout->addWidget(lineEdit);

        butt_sendMessage = new QPushButton(centralwidget);
        butt_sendMessage->setObjectName("butt_sendMessage");
        butt_sendMessage->setMinimumSize(QSize(70, 50));
        QFont font2;
        font2.setPointSize(12);
        butt_sendMessage->setFont(font2);
        butt_sendMessage->setStyleSheet(QString::fromUtf8("background-color:  rgb(170, 85, 255);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 25px; \n"
""));

        horizontalLayout->addWidget(butt_sendMessage);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        nick = new QLineEdit(centralwidget);
        nick->setObjectName("nick");
        sizePolicy.setHeightForWidth(nick->sizePolicy().hasHeightForWidth());
        nick->setSizePolicy(sizePolicy);
        nick->setMinimumSize(QSize(0, 50));
        nick->setFont(font1);
        nick->setStyleSheet(QString::fromUtf8("padding-left: 5px;\n"
"border-radius: 10px; \n"
"background-color:rgb(29, 29, 29);\n"
"color: rgb(170, 85, 255);"));

        gridLayout->addWidget(nick, 0, 0, 1, 1);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(14);
        font3.setBold(false);
        textEdit->setFont(font3);
        textEdit->setStyleSheet(QString::fromUtf8("background-color:rgb(29, 29, 29);\n"
"border-radius: 10px; \n"
"color: rgb(193, 193, 193);\n"
"padding-left: 5px;\n"
"padding-top: 5px;"));
        textEdit->setReadOnly(true);

        gridLayout->addWidget(textEdit, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        butt_hostServ_3->setText(QCoreApplication::translate("MainWindow", "Private chat", nullptr));
        butt_hostServ_2->setText(QCoreApplication::translate("MainWindow", "Go online", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Message", nullptr));
        butt_sendMessage->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        nick->setText(QString());
        nick->setPlaceholderText(QCoreApplication::translate("MainWindow", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
