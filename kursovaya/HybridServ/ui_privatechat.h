/********************************************************************************
** Form generated from reading UI file 'privatechat.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVATECHAT_H
#define UI_PRIVATECHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrivateChat
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *butt_public;
    QPushButton *butt_connect;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLineEdit *line_ip;
    QTextEdit *textEdit1;
    QHBoxLayout *horizontalLayout;
    QLineEdit *line_message;
    QPushButton *butt_sendMessage1;

    void setupUi(QWidget *PrivateChat)
    {
        if (PrivateChat->objectName().isEmpty())
            PrivateChat->setObjectName("PrivateChat");
        PrivateChat->resize(1195, 799);
        PrivateChat->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        gridLayout = new QGridLayout(PrivateChat);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        butt_public = new QPushButton(PrivateChat);
        butt_public->setObjectName("butt_public");
        butt_public->setMinimumSize(QSize(140, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(12);
        font.setBold(true);
        butt_public->setFont(font);
        butt_public->setCursor(QCursor(Qt::PointingHandCursor));
        butt_public->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(170, 85, 255);"));

        verticalLayout_2->addWidget(butt_public);

        butt_connect = new QPushButton(PrivateChat);
        butt_connect->setObjectName("butt_connect");
        butt_connect->setMinimumSize(QSize(140, 50));
        butt_connect->setFont(font);
        butt_connect->setCursor(QCursor(Qt::PointingHandCursor));
        butt_connect->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 193, 193);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 10px;"));

        verticalLayout_2->addWidget(butt_connect);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        line_ip = new QLineEdit(PrivateChat);
        line_ip->setObjectName("line_ip");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_ip->sizePolicy().hasHeightForWidth());
        line_ip->setSizePolicy(sizePolicy);
        line_ip->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Black")});
        font1.setPointSize(14);
        font1.setBold(true);
        line_ip->setFont(font1);
        line_ip->setStyleSheet(QString::fromUtf8("padding-left: 5px;\n"
"border-radius: 10px; \n"
"background-color:rgb(29, 29, 29);\n"
"color: rgb(170, 85, 255);"));
        line_ip->setEchoMode(QLineEdit::Normal);

        verticalLayout->addWidget(line_ip);

        textEdit1 = new QTextEdit(PrivateChat);
        textEdit1->setObjectName("textEdit1");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(14);
        textEdit1->setFont(font2);
        textEdit1->setStyleSheet(QString::fromUtf8("border-radius: 10px; \n"
"background-color:rgb(29, 29, 29);\n"
"padding-left: 5px;"));
        textEdit1->setReadOnly(true);

        verticalLayout->addWidget(textEdit1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        line_message = new QLineEdit(PrivateChat);
        line_message->setObjectName("line_message");
        sizePolicy.setHeightForWidth(line_message->sizePolicy().hasHeightForWidth());
        line_message->setSizePolicy(sizePolicy);
        line_message->setMinimumSize(QSize(0, 50));
        line_message->setFont(font1);
        line_message->setStyleSheet(QString::fromUtf8("padding-left: 5px;\n"
"border-radius: 10px; \n"
"background-color:rgb(29, 29, 29);\n"
"color: rgb(170, 85, 255);"));
        line_message->setEchoMode(QLineEdit::Normal);

        horizontalLayout->addWidget(line_message);

        butt_sendMessage1 = new QPushButton(PrivateChat);
        butt_sendMessage1->setObjectName("butt_sendMessage1");
        butt_sendMessage1->setMinimumSize(QSize(70, 50));
        QFont font3;
        font3.setPointSize(12);
        butt_sendMessage1->setFont(font3);
        butt_sendMessage1->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 25px; \n"
"background-color: rgb(170, 85, 255);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(butt_sendMessage1);


        verticalLayout->addLayout(horizontalLayout);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(PrivateChat);

        QMetaObject::connectSlotsByName(PrivateChat);
    } // setupUi

    void retranslateUi(QWidget *PrivateChat)
    {
        PrivateChat->setWindowTitle(QCoreApplication::translate("PrivateChat", "Form", nullptr));
        butt_public->setText(QCoreApplication::translate("PrivateChat", "Public", nullptr));
        butt_connect->setText(QCoreApplication::translate("PrivateChat", "Connect", nullptr));
        line_ip->setPlaceholderText(QCoreApplication::translate("PrivateChat", "127.0.0.1", nullptr));
        line_message->setPlaceholderText(QCoreApplication::translate("PrivateChat", "Message", nullptr));
        butt_sendMessage1->setText(QCoreApplication::translate("PrivateChat", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrivateChat: public Ui_PrivateChat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIVATECHAT_H
