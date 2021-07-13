/********************************************************************************
** Form generated from reading UI file 'sendconfirmdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCONFIRMDIALOG_H
#define UI_SENDCONFIRMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TxDetailDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_1;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnEsc;
    QSpacerItem *verticalSpacer;
    QWidget *layoutScroll;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_7;
    QWidget *content;
    QVBoxLayout *verticalLayout_2;
    QWidget *contentID;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *contentID_int;
    QLabel *labelId;
    QLabel *textId;
    QPushButton *pushCopy;
    QLabel *labelDividerID;
    QWidget *contentOutputsLabel;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *contentOutputsLabel_int;
    QLabel *labelSend;
    QWidget *widget;
    QVBoxLayout *verticalLayout_6;
    QLabel *textSendLabel;
    QLabel *textSend;
    QPushButton *pushOutputs;
    QScrollArea *outputsScrollArea;
    QWidget *container_outputs_base;
    QLabel *labelDividerOutputs;
    QWidget *gridAmounts;
    QGridLayout *contentAmountInputs;
    QLabel *textAmount;
    QLabel *labelAmount;
    QLabel *labelInputs;
    QHBoxLayout *horizontalLayout;
    QLabel *textInputs;
    QPushButton *pushInputs;
    QFrame *gridInputs;
    QGridLayout *gridLayoutInput;
    QLabel *labelOutputIndex;
    QLabel *labelTitlePrevTx;
    QLabel *labelDividerPrevtx;
    QHBoxLayout *contentFeeSize;
    QVBoxLayout *contentFee;
    QLabel *labelFee;
    QLabel *textFee;
    QWidget *contentSize;
    QVBoxLayout *contentSize_layout;
    QLabel *labelSize;
    QLabel *textSize;
    QLabel *labelDividerFeeSize;
    QWidget *contentChangeAddress;
    QVBoxLayout *contentChangeAddress_layout;
    QLabel *labelChange;
    QLabel *textChange;
    QLabel *labelDividerChange;
    QWidget *gridConfDateStatus;
    QGridLayout *contentConfDateStatus;
    QLabel *textStatus;
    QLabel *labelConfirmations;
    QLabel *labelStatus;
    QLabel *textConfirmations;
    QLabel *labelDate;
    QLabel *textDate;
    QLabel *labelDividerConfs;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelWarning;
    QWidget *containerButtons;
    QHBoxLayout *horizontalLayout1;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnCancel;
    QPushButton *btnSave;

    void setupUi(QWidget *TxDetailDialog)
    {
        if (TxDetailDialog->objectName().isEmpty())
            TxDetailDialog->setObjectName(QStringLiteral("TxDetailDialog"));
        TxDetailDialog->resize(604, 698);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TxDetailDialog->sizePolicy().hasHeightForWidth());
        TxDetailDialog->setSizePolicy(sizePolicy);
        TxDetailDialog->setMinimumSize(QSize(574, 500));
        TxDetailDialog->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(TxDetailDialog);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(TxDetailDialog);
        frame->setObjectName(QStringLiteral("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, 10, 20, -1);
        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_1);

        labelTitle = new QLabel(frame);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setMinimumSize(QSize(0, 40));
        labelTitle->setMaximumSize(QSize(16777215, 40));
        labelTitle->setStyleSheet(QStringLiteral("padding-left:24px;"));
        labelTitle->setAlignment(Qt::AlignCenter);
        labelTitle->setMargin(7);

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnEsc = new QPushButton(frame);
        btnEsc->setObjectName(QStringLiteral("btnEsc"));
        btnEsc->setMinimumSize(QSize(24, 24));
        btnEsc->setMaximumSize(QSize(24, 24));
        btnEsc->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btnEsc);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        layoutScroll = new QWidget(frame);
        layoutScroll->setObjectName(QStringLiteral("layoutScroll"));
        layoutScroll->setMinimumSize(QSize(0, 0));
        verticalLayout_4 = new QVBoxLayout(layoutScroll);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, -1);
        scrollArea = new QScrollArea(layoutScroll);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QLatin1String("#scrollArea {\n"
"background:transparent;\n"
"}"));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 586, 644));
        scrollAreaWidgetContents->setAutoFillBackground(false);
        scrollAreaWidgetContents->setStyleSheet(QLatin1String("#scrollAreaWidgetContents {\n"
"background:transparent;\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        content = new QWidget(scrollAreaWidgetContents);
        content->setObjectName(QStringLiteral("content"));
        verticalLayout_2 = new QVBoxLayout(content);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(16, 0, 16, -1);
        contentID = new QWidget(content);
        contentID->setObjectName(QStringLiteral("contentID"));
        horizontalLayout_12 = new QHBoxLayout(contentID);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, -1, 0, -1);
        contentID_int = new QVBoxLayout();
        contentID_int->setObjectName(QStringLiteral("contentID_int"));
        labelId = new QLabel(contentID);
        labelId->setObjectName(QStringLiteral("labelId"));
        labelId->setMaximumSize(QSize(16777215, 16777215));

        contentID_int->addWidget(labelId);

        textId = new QLabel(contentID);
        textId->setObjectName(QStringLiteral("textId"));
        textId->setText(QStringLiteral("N/A"));

        contentID_int->addWidget(textId);


        horizontalLayout_12->addLayout(contentID_int);

        pushCopy = new QPushButton(contentID);
        pushCopy->setObjectName(QStringLiteral("pushCopy"));
        pushCopy->setMinimumSize(QSize(34, 34));
        pushCopy->setMaximumSize(QSize(34, 34));
        pushCopy->setFocusPolicy(Qt::NoFocus);
        pushCopy->setIconSize(QSize(24, 24));

        horizontalLayout_12->addWidget(pushCopy);


        verticalLayout_2->addWidget(contentID);

        labelDividerID = new QLabel(content);
        labelDividerID->setObjectName(QStringLiteral("labelDividerID"));
        labelDividerID->setMaximumSize(QSize(16777215, 1));
        labelDividerID->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDividerID);

        contentOutputsLabel = new QWidget(content);
        contentOutputsLabel->setObjectName(QStringLiteral("contentOutputsLabel"));
        horizontalLayout_11 = new QHBoxLayout(contentOutputsLabel);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 9, 0, 9);
        contentOutputsLabel_int = new QVBoxLayout();
        contentOutputsLabel_int->setObjectName(QStringLiteral("contentOutputsLabel_int"));
        contentOutputsLabel_int->setContentsMargins(0, 1, 6, 1);
        labelSend = new QLabel(contentOutputsLabel);
        labelSend->setObjectName(QStringLiteral("labelSend"));
        labelSend->setMaximumSize(QSize(16777215, 16777215));

        contentOutputsLabel_int->addWidget(labelSend);

        widget = new QWidget(contentOutputsLabel);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_6 = new QVBoxLayout(widget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        textSendLabel = new QLabel(widget);
        textSendLabel->setObjectName(QStringLiteral("textSendLabel"));
        textSendLabel->setText(QStringLiteral("N/A"));

        verticalLayout_6->addWidget(textSendLabel);

        textSend = new QLabel(widget);
        textSend->setObjectName(QStringLiteral("textSend"));
        textSend->setText(QStringLiteral("N/A"));

        verticalLayout_6->addWidget(textSend);


        contentOutputsLabel_int->addWidget(widget);


        horizontalLayout_11->addLayout(contentOutputsLabel_int);

        pushOutputs = new QPushButton(contentOutputsLabel);
        pushOutputs->setObjectName(QStringLiteral("pushOutputs"));
        pushOutputs->setMinimumSize(QSize(34, 20));
        pushOutputs->setMaximumSize(QSize(38, 20));
        pushOutputs->setFocusPolicy(Qt::NoFocus);
        pushOutputs->setStyleSheet(QStringLiteral(""));

        horizontalLayout_11->addWidget(pushOutputs);


        verticalLayout_2->addWidget(contentOutputsLabel);

        outputsScrollArea = new QScrollArea(content);
        outputsScrollArea->setObjectName(QStringLiteral("outputsScrollArea"));
        outputsScrollArea->setMinimumSize(QSize(0, 50));
        outputsScrollArea->setStyleSheet(QLatin1String("#outputsScrollArea {\n"
"background:transparent;\n"
"}"));
        outputsScrollArea->setWidgetResizable(true);
        container_outputs_base = new QWidget();
        container_outputs_base->setObjectName(QStringLiteral("container_outputs_base"));
        container_outputs_base->setGeometry(QRect(0, 0, 552, 48));
        container_outputs_base->setStyleSheet(QLatin1String("#container_outputs_base {\n"
"background:transparent;\n"
"}"));
        outputsScrollArea->setWidget(container_outputs_base);

        verticalLayout_2->addWidget(outputsScrollArea);

        labelDividerOutputs = new QLabel(content);
        labelDividerOutputs->setObjectName(QStringLiteral("labelDividerOutputs"));
        labelDividerOutputs->setMaximumSize(QSize(16777215, 1));
        labelDividerOutputs->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDividerOutputs);

        gridAmounts = new QWidget(content);
        gridAmounts->setObjectName(QStringLiteral("gridAmounts"));
        contentAmountInputs = new QGridLayout(gridAmounts);
        contentAmountInputs->setObjectName(QStringLiteral("contentAmountInputs"));
        contentAmountInputs->setHorizontalSpacing(12);
        contentAmountInputs->setContentsMargins(0, 9, 0, 9);
        textAmount = new QLabel(gridAmounts);
        textAmount->setObjectName(QStringLiteral("textAmount"));
        textAmount->setText(QStringLiteral("N/A"));

        contentAmountInputs->addWidget(textAmount, 1, 0, 1, 1);

        labelAmount = new QLabel(gridAmounts);
        labelAmount->setObjectName(QStringLiteral("labelAmount"));
        labelAmount->setMaximumSize(QSize(16777215, 16777215));

        contentAmountInputs->addWidget(labelAmount, 0, 0, 1, 1);

        labelInputs = new QLabel(gridAmounts);
        labelInputs->setObjectName(QStringLiteral("labelInputs"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelInputs->sizePolicy().hasHeightForWidth());
        labelInputs->setSizePolicy(sizePolicy1);
        labelInputs->setMaximumSize(QSize(16777215, 16777215));
        labelInputs->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        contentAmountInputs->addWidget(labelInputs, 0, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        textInputs = new QLabel(gridAmounts);
        textInputs->setObjectName(QStringLiteral("textInputs"));
        textInputs->setText(QStringLiteral("N/A"));
        textInputs->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(textInputs);

        pushInputs = new QPushButton(gridAmounts);
        pushInputs->setObjectName(QStringLiteral("pushInputs"));
        pushInputs->setMaximumSize(QSize(34, 20));
        pushInputs->setFocusPolicy(Qt::NoFocus);
        pushInputs->setLayoutDirection(Qt::LeftToRight);
        pushInputs->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(pushInputs);


        contentAmountInputs->addLayout(horizontalLayout, 1, 3, 1, 1);


        verticalLayout_2->addWidget(gridAmounts);

        gridInputs = new QFrame(content);
        gridInputs->setObjectName(QStringLiteral("gridInputs"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gridInputs->sizePolicy().hasHeightForWidth());
        gridInputs->setSizePolicy(sizePolicy2);
        gridInputs->setMinimumSize(QSize(0, 90));
        gridInputs->setLineWidth(0);
        gridLayoutInput = new QGridLayout(gridInputs);
        gridLayoutInput->setObjectName(QStringLiteral("gridLayoutInput"));
        gridLayoutInput->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayoutInput->setVerticalSpacing(0);
        gridLayoutInput->setContentsMargins(0, -1, 0, -1);
        labelOutputIndex = new QLabel(gridInputs);
        labelOutputIndex->setObjectName(QStringLiteral("labelOutputIndex"));
        labelOutputIndex->setLayoutDirection(Qt::LeftToRight);
        labelOutputIndex->setTextFormat(Qt::AutoText);
        labelOutputIndex->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelOutputIndex->setMargin(0);

        gridLayoutInput->addWidget(labelOutputIndex, 0, 1, 1, 1);

        labelTitlePrevTx = new QLabel(gridInputs);
        labelTitlePrevTx->setObjectName(QStringLiteral("labelTitlePrevTx"));

        gridLayoutInput->addWidget(labelTitlePrevTx, 0, 0, 1, 1, Qt::AlignLeft);

        gridLayoutInput->setColumnStretch(0, 5);

        verticalLayout_2->addWidget(gridInputs);

        labelDividerPrevtx = new QLabel(content);
        labelDividerPrevtx->setObjectName(QStringLiteral("labelDividerPrevtx"));
        labelDividerPrevtx->setMaximumSize(QSize(16777215, 1));
        labelDividerPrevtx->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDividerPrevtx);

        contentFeeSize = new QHBoxLayout();
        contentFeeSize->setObjectName(QStringLiteral("contentFeeSize"));
        contentFeeSize->setContentsMargins(-1, 9, -1, 9);
        contentFee = new QVBoxLayout();
        contentFee->setObjectName(QStringLiteral("contentFee"));
        contentFee->setContentsMargins(-1, 0, -1, 0);
        labelFee = new QLabel(content);
        labelFee->setObjectName(QStringLiteral("labelFee"));
        labelFee->setMaximumSize(QSize(16777215, 16777215));

        contentFee->addWidget(labelFee);

        textFee = new QLabel(content);
        textFee->setObjectName(QStringLiteral("textFee"));
        textFee->setText(QStringLiteral("N/A"));

        contentFee->addWidget(textFee);


        contentFeeSize->addLayout(contentFee);

        contentSize = new QWidget(content);
        contentSize->setObjectName(QStringLiteral("contentSize"));
        contentSize_layout = new QVBoxLayout(contentSize);
        contentSize_layout->setObjectName(QStringLiteral("contentSize_layout"));
        contentSize_layout->setContentsMargins(-1, 0, 0, 0);
        labelSize = new QLabel(contentSize);
        labelSize->setObjectName(QStringLiteral("labelSize"));
        labelSize->setMaximumSize(QSize(16777215, 16777215));
        labelSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        contentSize_layout->addWidget(labelSize);

        textSize = new QLabel(contentSize);
        textSize->setObjectName(QStringLiteral("textSize"));
        textSize->setText(QStringLiteral("N/A"));
        textSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        contentSize_layout->addWidget(textSize);


        contentFeeSize->addWidget(contentSize);


        verticalLayout_2->addLayout(contentFeeSize);

        labelDividerFeeSize = new QLabel(content);
        labelDividerFeeSize->setObjectName(QStringLiteral("labelDividerFeeSize"));
        labelDividerFeeSize->setMaximumSize(QSize(16777215, 1));
        labelDividerFeeSize->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDividerFeeSize);

        contentChangeAddress = new QWidget(content);
        contentChangeAddress->setObjectName(QStringLiteral("contentChangeAddress"));
        contentChangeAddress_layout = new QVBoxLayout(contentChangeAddress);
        contentChangeAddress_layout->setObjectName(QStringLiteral("contentChangeAddress_layout"));
        contentChangeAddress_layout->setContentsMargins(0, 9, 0, 9);
        labelChange = new QLabel(contentChangeAddress);
        labelChange->setObjectName(QStringLiteral("labelChange"));
        labelChange->setMaximumSize(QSize(16777215, 16777215));

        contentChangeAddress_layout->addWidget(labelChange);

        textChange = new QLabel(contentChangeAddress);
        textChange->setObjectName(QStringLiteral("textChange"));

        contentChangeAddress_layout->addWidget(textChange);


        verticalLayout_2->addWidget(contentChangeAddress);

        labelDividerChange = new QLabel(content);
        labelDividerChange->setObjectName(QStringLiteral("labelDividerChange"));
        labelDividerChange->setMaximumSize(QSize(16777215, 1));
        labelDividerChange->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDividerChange);

        gridConfDateStatus = new QWidget(content);
        gridConfDateStatus->setObjectName(QStringLiteral("gridConfDateStatus"));
        contentConfDateStatus = new QGridLayout(gridConfDateStatus);
        contentConfDateStatus->setObjectName(QStringLiteral("contentConfDateStatus"));
        contentConfDateStatus->setContentsMargins(0, -1, 0, -1);
        textStatus = new QLabel(gridConfDateStatus);
        textStatus->setObjectName(QStringLiteral("textStatus"));
        textStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        contentConfDateStatus->addWidget(textStatus, 1, 3, 1, 1);

        labelConfirmations = new QLabel(gridConfDateStatus);
        labelConfirmations->setObjectName(QStringLiteral("labelConfirmations"));
        labelConfirmations->setMaximumSize(QSize(16777215, 16777215));
        labelConfirmations->setAlignment(Qt::AlignCenter);

        contentConfDateStatus->addWidget(labelConfirmations, 0, 1, 1, 1);

        labelStatus = new QLabel(gridConfDateStatus);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));
        labelStatus->setMaximumSize(QSize(16777215, 16777215));
        labelStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        contentConfDateStatus->addWidget(labelStatus, 0, 3, 1, 1);

        textConfirmations = new QLabel(gridConfDateStatus);
        textConfirmations->setObjectName(QStringLiteral("textConfirmations"));
        textConfirmations->setText(QStringLiteral("N/A"));
        textConfirmations->setAlignment(Qt::AlignCenter);

        contentConfDateStatus->addWidget(textConfirmations, 1, 1, 1, 1);

        labelDate = new QLabel(gridConfDateStatus);
        labelDate->setObjectName(QStringLiteral("labelDate"));
        labelDate->setMaximumSize(QSize(16777215, 16777215));
        labelDate->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        contentConfDateStatus->addWidget(labelDate, 0, 0, 1, 1);

        textDate = new QLabel(gridConfDateStatus);
        textDate->setObjectName(QStringLiteral("textDate"));
        textDate->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        contentConfDateStatus->addWidget(textDate, 1, 0, 1, 1);


        verticalLayout_2->addWidget(gridConfDateStatus);

        labelDividerConfs = new QLabel(content);
        labelDividerConfs->setObjectName(QStringLiteral("labelDividerConfs"));
        labelDividerConfs->setMaximumSize(QSize(16777215, 1));
        labelDividerConfs->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDividerConfs);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        labelWarning = new QLabel(content);
        labelWarning->setObjectName(QStringLiteral("labelWarning"));
        labelWarning->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelWarning);


        verticalLayout_7->addWidget(content);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);


        verticalLayout->addWidget(layoutScroll);

        containerButtons = new QWidget(frame);
        containerButtons->setObjectName(QStringLiteral("containerButtons"));
        horizontalLayout1 = new QHBoxLayout(containerButtons);
        horizontalLayout1->setObjectName(QStringLiteral("horizontalLayout1"));
        horizontalLayout1->setContentsMargins(10, -1, 20, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout1->addItem(horizontalSpacer_3);

        btnCancel = new QPushButton(containerButtons);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setMinimumSize(QSize(200, 50));
        btnCancel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout1->addWidget(btnCancel);

        btnSave = new QPushButton(containerButtons);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setMinimumSize(QSize(200, 50));
        btnSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout1->addWidget(btnSave);

        horizontalLayout1->setStretch(0, 1);
        horizontalLayout1->setStretch(1, 2);
        horizontalLayout1->setStretch(2, 2);

        verticalLayout->addWidget(containerButtons);


        verticalLayout_3->addWidget(frame);


        retranslateUi(TxDetailDialog);

        QMetaObject::connectSlotsByName(TxDetailDialog);
    } // setupUi

    void retranslateUi(QWidget *TxDetailDialog)
    {
        TxDetailDialog->setWindowTitle(QApplication::translate("TxDetailDialog", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("TxDetailDialog", "Transaction Details", Q_NULLPTR));
        btnEsc->setText(QString());
        labelId->setText(QApplication::translate("TxDetailDialog", "ID", Q_NULLPTR));
        pushCopy->setText(QString());
        labelDividerID->setText(QString());
        labelSend->setText(QApplication::translate("TxDetailDialog", "Sending to", Q_NULLPTR));
        pushOutputs->setText(QString());
        labelDividerOutputs->setText(QString());
        labelAmount->setText(QApplication::translate("TxDetailDialog", "Total amount", Q_NULLPTR));
        labelInputs->setText(QApplication::translate("TxDetailDialog", "Coin inputs", Q_NULLPTR));
        pushInputs->setText(QString());
        labelOutputIndex->setText(QApplication::translate("TxDetailDialog", "Output Index", Q_NULLPTR));
        labelTitlePrevTx->setText(QApplication::translate("TxDetailDialog", "Previous Transaction", Q_NULLPTR));
        labelDividerPrevtx->setText(QString());
        labelFee->setText(QApplication::translate("TxDetailDialog", "Fee", Q_NULLPTR));
        labelSize->setText(QApplication::translate("TxDetailDialog", "Size", Q_NULLPTR));
        labelDividerFeeSize->setText(QString());
        labelChange->setText(QApplication::translate("TxDetailDialog", "Change address", Q_NULLPTR));
        textChange->setText(QApplication::translate("TxDetailDialog", "D7VFR83SQbie\342\200\246BhjcWJtcfip5krte2Z ", Q_NULLPTR));
        labelDividerChange->setText(QString());
        textStatus->setText(QApplication::translate("TxDetailDialog", "Spendable", Q_NULLPTR));
        labelConfirmations->setText(QApplication::translate("TxDetailDialog", "Confirmations", Q_NULLPTR));
        labelStatus->setText(QApplication::translate("TxDetailDialog", "Status", Q_NULLPTR));
        labelDate->setText(QApplication::translate("TxDetailDialog", "Date", Q_NULLPTR));
        textDate->setText(QApplication::translate("TxDetailDialog", "May 25, 2017", Q_NULLPTR));
        labelDividerConfs->setText(QString());
        labelWarning->setText(QApplication::translate("TxDetailDialog", "TextLabel", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("TxDetailDialog", "CANCEL", Q_NULLPTR));
        btnSave->setText(QApplication::translate("TxDetailDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TxDetailDialog: public Ui_TxDetailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCONFIRMDIALOG_H
