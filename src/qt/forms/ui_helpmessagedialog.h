/********************************************************************************
** Form generated from reading UI file 'helpmessagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPMESSAGEDIALOG_H
#define UI_HELPMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpMessageDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *helpContainer;
    QVBoxLayout *verticalLayout_4;
    QLabel *graphic;
    QVBoxLayout *verticalLayout;
    QTextEdit *helpMessage;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *aboutMessage;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOk;

    void setupUi(QDialog *HelpMessageDialog)
    {
        if (HelpMessageDialog->objectName().isEmpty())
            HelpMessageDialog->setObjectName(QStringLiteral("HelpMessageDialog"));
        HelpMessageDialog->resize(600, 500);
        HelpMessageDialog->setMinimumSize(QSize(600, 500));
        QFont font;
        font.setPointSize(10);
        HelpMessageDialog->setFont(font);
        HelpMessageDialog->setWindowTitle(QStringLiteral("NestEgg Core - Command-line options"));
        HelpMessageDialog->setStyleSheet(QLatin1String("#HelpMessageDialog {\n"
"	background-color:#FFFFFF;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(HelpMessageDialog);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        helpContainer = new QWidget(HelpMessageDialog);
        helpContainer->setObjectName(QStringLiteral("helpContainer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(helpContainer->sizePolicy().hasHeightForWidth());
        helpContainer->setSizePolicy(sizePolicy);
        helpContainer->setMinimumSize(QSize(0, 200));
        helpContainer->setStyleSheet(QLatin1String("#helpContainer{\n"
"	background-color:white;\n"
"	padding:9px;\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(helpContainer);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(9, 9, 9, 9);
        graphic = new QLabel(helpContainer);
        graphic->setObjectName(QStringLiteral("graphic"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphic->sizePolicy().hasHeightForWidth());
        graphic->setSizePolicy(sizePolicy1);
        graphic->setMinimumSize(QSize(0, 100));
        graphic->setPixmap(QPixmap(QString::fromUtf8(":/images/about")));

        verticalLayout_4->addWidget(graphic);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 100, -1, -1);
        helpMessage = new QTextEdit(helpContainer);
        helpMessage->setObjectName(QStringLiteral("helpMessage"));
        helpMessage->setMinimumSize(QSize(0, 0));
        helpMessage->setStyleSheet(QLatin1String("#helpMessage {\n"
"background-color:#FFFFFF;\n"
"	color:#707070;\n"
"}"));
        helpMessage->setReadOnly(true);

        verticalLayout->addWidget(helpMessage);

        scrollArea = new QScrollArea(helpContainer);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QLatin1String("#scrollArea {\n"
"background-color:#FFFFFF;\n"
"}"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 564, 263));
        scrollAreaWidgetContents->setStyleSheet(QLatin1String("#scrollAreaWidgetContents {\n"
"background-color:#FFFFFF;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        aboutMessage = new QLabel(scrollAreaWidgetContents);
        aboutMessage->setObjectName(QStringLiteral("aboutMessage"));
        aboutMessage->setMinimumSize(QSize(0, 245));
        aboutMessage->setCursor(QCursor(Qt::IBeamCursor));
        aboutMessage->setStyleSheet(QLatin1String("#aboutMessage {\n"
"background-color:#FFFFFF;\n"
"	color:#707070;\n"
"}"));
        aboutMessage->setTextFormat(Qt::PlainText);
        aboutMessage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        aboutMessage->setOpenExternalLinks(true);
        aboutMessage->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(aboutMessage);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        widget = new QWidget(helpContainer);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(50);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        widget->setMinimumSize(QSize(0, 60));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(421, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonOk = new QPushButton(widget);
        pushButtonOk->setObjectName(QStringLiteral("pushButtonOk"));
        pushButtonOk->setMinimumSize(QSize(150, 50));

        horizontalLayout_2->addWidget(pushButtonOk, 0, Qt::AlignVCenter);


        verticalLayout->addWidget(widget, 0, Qt::AlignVCenter);


        verticalLayout_4->addLayout(verticalLayout);


        verticalLayout_3->addWidget(helpContainer);


        retranslateUi(HelpMessageDialog);

        QMetaObject::connectSlotsByName(HelpMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *HelpMessageDialog)
    {
        pushButtonOk->setText(QApplication::translate("HelpMessageDialog", "OK", Q_NULLPTR));
        Q_UNUSED(HelpMessageDialog);
    } // retranslateUi

};

namespace Ui {
    class HelpMessageDialog: public Ui_HelpMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPMESSAGEDIALOG_H
