/********************************************************************************
** Form generated from reading UI file 'openuridialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENURIDIALOG_H
#define UI_OPENURIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_OpenURIDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelTitle;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelSubtitle;
    QHBoxLayout *horizontalLayout;
    QValidatedLineEdit *uriEdit;
    QPushButton *selectFileButton;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonOK;

    void setupUi(QDialog *OpenURIDialog)
    {
        if (OpenURIDialog->objectName().isEmpty())
            OpenURIDialog->setObjectName(QStringLiteral("OpenURIDialog"));
        OpenURIDialog->resize(564, 260);
        verticalLayout = new QVBoxLayout(OpenURIDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(OpenURIDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 20, 20, 16);
        labelTitle = new QLabel(frame);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelTitle);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        labelSubtitle = new QLabel(frame);
        labelSubtitle->setObjectName(QStringLiteral("labelSubtitle"));

        verticalLayout_2->addWidget(labelSubtitle);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        uriEdit = new QValidatedLineEdit(frame);
        uriEdit->setObjectName(QStringLiteral("uriEdit"));
        uriEdit->setStyleSheet(QLatin1String("#uriEdit{\n"
"	border-top-right-radius:0px;\n"
"	border-bottom-right-radius:0px;\n"
"}"));

        horizontalLayout->addWidget(uriEdit);

        selectFileButton = new QPushButton(frame);
        selectFileButton->setObjectName(QStringLiteral("selectFileButton"));
        selectFileButton->setMinimumSize(QSize(0, 41));
        selectFileButton->setStyleSheet(QLatin1String("#selectFileButton{\n"
"	border-top-left-radius:0px;\n"
"	border-bottom-left-radius:0px;\n"
"}"));
        selectFileButton->setText(QStringLiteral("..."));
        selectFileButton->setAutoDefault(false);

        horizontalLayout->addWidget(selectFileButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        widget = new QWidget(frame);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 50));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(289, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonCancel = new QPushButton(widget);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setMinimumSize(QSize(100, 40));

        horizontalLayout_2->addWidget(pushButtonCancel);

        pushButtonOK = new QPushButton(widget);
        pushButtonOK->setObjectName(QStringLiteral("pushButtonOK"));
        pushButtonOK->setMinimumSize(QSize(100, 40));

        horizontalLayout_2->addWidget(pushButtonOK);


        verticalLayout_2->addWidget(widget);


        verticalLayout->addWidget(frame);


        retranslateUi(OpenURIDialog);

        QMetaObject::connectSlotsByName(OpenURIDialog);
    } // setupUi

    void retranslateUi(QDialog *OpenURIDialog)
    {
        OpenURIDialog->setWindowTitle(QApplication::translate("OpenURIDialog", "Open URI", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("OpenURIDialog", "Open payment request from URI or file", Q_NULLPTR));
        labelSubtitle->setText(QApplication::translate("OpenURIDialog", "TextLabel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        selectFileButton->setToolTip(QApplication::translate("OpenURIDialog", "Select payment request file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButtonCancel->setText(QApplication::translate("OpenURIDialog", "CANCEL", Q_NULLPTR));
        pushButtonOK->setText(QApplication::translate("OpenURIDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OpenURIDialog: public Ui_OpenURIDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENURIDIALOG_H
