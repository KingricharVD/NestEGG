/********************************************************************************
** Form generated from reading UI file 'coincontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COINCONTROLDIALOG_H
#define UI_COINCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "coincontroltreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_CoinControlDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameContainer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QWidget *layoutAmount;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelCoinControlAmountText;
    QLabel *labelCoinControlAmount;
    QPushButton *pushButtonAmount;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutQuantity;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelCoinControlQuantityText;
    QLabel *labelCoinControlQuantity;
    QPushButton *pushButtonQuantity;
    QSpacerItem *horizontalSpacer_22;
    QWidget *layoutFee;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelCoinControlFeeText;
    QLabel *labelCoinControlFee;
    QPushButton *pushButtonFee;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayoutPanel;
    QPushButton *pushButtonSelectAll;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonToggleLock;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *radioTreeMode;
    QRadioButton *radioListMode;
    QLabel *labelLocked;
    QHBoxLayout *horizontalLayout_13;
    CoinControlTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *layoutBytes;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelCoinControlBytesText;
    QLabel *labelCoinControlBytes;
    QPushButton *pushButtonBytes;
    QWidget *layoutDust;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelCoinControlLowOutputText;
    QLabel *labelCoinControlLowOutput;
    QPushButton *pushButtonDust;
    QWidget *layoutChange;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelCoinControlChangeText;
    QLabel *labelCoinControlChange;
    QPushButton *pushButtonChange;
    QWidget *layoutAfter;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelCoinControlAfterFeeText;
    QLabel *labelCoinControlAfterFee;
    QPushButton *pushButtonAlterFee;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonOk;

    void setupUi(QDialog *CoinControlDialog)
    {
        if (CoinControlDialog->objectName().isEmpty())
            CoinControlDialog->setObjectName(QStringLiteral("CoinControlDialog"));
        CoinControlDialog->resize(1000, 650);
        CoinControlDialog->setMinimumSize(QSize(950, 650));
        CoinControlDialog->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(CoinControlDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameContainer = new QFrame(CoinControlDialog);
        frameContainer->setObjectName(QStringLiteral("frameContainer"));
        frameContainer->setToolTipDuration(0);
        frameContainer->setFrameShape(QFrame::StyledPanel);
        frameContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameContainer);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, 20);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(20, -1, 30, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_4);

        labelTitle = new QLabel(frameContainer);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setMinimumSize(QSize(0, 40));
        labelTitle->setMaximumSize(QSize(16777215, 40));
        labelTitle->setAlignment(Qt::AlignCenter);
        labelTitle->setMargin(7);

        horizontalLayout_12->addWidget(labelTitle);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(20, -1, 20, -1);
        layoutAmount = new QWidget(frameContainer);
        layoutAmount->setObjectName(QStringLiteral("layoutAmount"));
        horizontalLayout_9 = new QHBoxLayout(layoutAmount);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        labelCoinControlAmountText = new QLabel(layoutAmount);
        labelCoinControlAmountText->setObjectName(QStringLiteral("labelCoinControlAmountText"));

        horizontalLayout_9->addWidget(labelCoinControlAmountText);

        labelCoinControlAmount = new QLabel(layoutAmount);
        labelCoinControlAmount->setObjectName(QStringLiteral("labelCoinControlAmount"));

        horizontalLayout_9->addWidget(labelCoinControlAmount);

        pushButtonAmount = new QPushButton(layoutAmount);
        pushButtonAmount->setObjectName(QStringLiteral("pushButtonAmount"));
        pushButtonAmount->setMinimumSize(QSize(0, 24));
        pushButtonAmount->setMaximumSize(QSize(24, 26));
        pushButtonAmount->setFocusPolicy(Qt::NoFocus);
        pushButtonAmount->setStyleSheet(QLatin1String("padding-bottom:2px;\n"
"padding-right:4px;"));

        horizontalLayout_9->addWidget(pushButtonAmount, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_9->setStretch(1, 1);

        horizontalLayout_8->addWidget(layoutAmount);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        layoutQuantity = new QWidget(frameContainer);
        layoutQuantity->setObjectName(QStringLiteral("layoutQuantity"));
        horizontalLayout_10 = new QHBoxLayout(layoutQuantity);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        labelCoinControlQuantityText = new QLabel(layoutQuantity);
        labelCoinControlQuantityText->setObjectName(QStringLiteral("labelCoinControlQuantityText"));

        horizontalLayout_10->addWidget(labelCoinControlQuantityText);

        labelCoinControlQuantity = new QLabel(layoutQuantity);
        labelCoinControlQuantity->setObjectName(QStringLiteral("labelCoinControlQuantity"));

        horizontalLayout_10->addWidget(labelCoinControlQuantity);

        pushButtonQuantity = new QPushButton(layoutQuantity);
        pushButtonQuantity->setObjectName(QStringLiteral("pushButtonQuantity"));
        pushButtonQuantity->setMinimumSize(QSize(0, 24));
        pushButtonQuantity->setMaximumSize(QSize(24, 26));
        pushButtonQuantity->setFocusPolicy(Qt::NoFocus);
        pushButtonQuantity->setStyleSheet(QLatin1String("padding-bottom:2px;\n"
"               padding-right:4px;"));

        horizontalLayout_10->addWidget(pushButtonQuantity, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_10->setStretch(1, 1);

        horizontalLayout_8->addWidget(layoutQuantity);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_22);

        layoutFee = new QWidget(frameContainer);
        layoutFee->setObjectName(QStringLiteral("layoutFee"));
        horizontalLayout_11 = new QHBoxLayout(layoutFee);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        labelCoinControlFeeText = new QLabel(layoutFee);
        labelCoinControlFeeText->setObjectName(QStringLiteral("labelCoinControlFeeText"));

        horizontalLayout_11->addWidget(labelCoinControlFeeText);

        labelCoinControlFee = new QLabel(layoutFee);
        labelCoinControlFee->setObjectName(QStringLiteral("labelCoinControlFee"));

        horizontalLayout_11->addWidget(labelCoinControlFee);

        pushButtonFee = new QPushButton(layoutFee);
        pushButtonFee->setObjectName(QStringLiteral("pushButtonFee"));
        pushButtonFee->setMinimumSize(QSize(0, 24));
        pushButtonFee->setMaximumSize(QSize(24, 26));
        pushButtonFee->setFocusPolicy(Qt::NoFocus);
        pushButtonFee->setStyleSheet(QLatin1String("padding-bottom:2px;\n"
"               padding-right:4px;"));

        horizontalLayout_11->addWidget(pushButtonFee, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_11->setStretch(1, 1);

        horizontalLayout_8->addWidget(layoutFee);


        verticalLayout_2->addLayout(horizontalLayout_8);

        frame = new QFrame(frameContainer);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 40));
        frame->setStyleSheet(QLatin1String("#frame {\n"
"	border:0;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 0, 20, 0);
        horizontalLayoutPanel = new QHBoxLayout();
        horizontalLayoutPanel->setSpacing(20);
        horizontalLayoutPanel->setObjectName(QStringLiteral("horizontalLayoutPanel"));
        pushButtonSelectAll = new QPushButton(frame);
        pushButtonSelectAll->setObjectName(QStringLiteral("pushButtonSelectAll"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonSelectAll->sizePolicy().hasHeightForWidth());
        pushButtonSelectAll->setSizePolicy(sizePolicy);
        pushButtonSelectAll->setMinimumSize(QSize(160, 40));
        pushButtonSelectAll->setMaximumSize(QSize(16777215, 40));
        pushButtonSelectAll->setCheckable(true);
        pushButtonSelectAll->setChecked(false);
        pushButtonSelectAll->setAutoExclusive(false);
        pushButtonSelectAll->setAutoDefault(false);

        horizontalLayoutPanel->addWidget(pushButtonSelectAll);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayoutPanel->addItem(horizontalSpacer_6);

        pushButtonToggleLock = new QPushButton(frame);
        pushButtonToggleLock->setObjectName(QStringLiteral("pushButtonToggleLock"));
        sizePolicy.setHeightForWidth(pushButtonToggleLock->sizePolicy().hasHeightForWidth());
        pushButtonToggleLock->setSizePolicy(sizePolicy);
        pushButtonToggleLock->setMinimumSize(QSize(160, 40));
        pushButtonToggleLock->setMaximumSize(QSize(16777215, 40));
        pushButtonToggleLock->setCheckable(true);
        pushButtonToggleLock->setAutoExclusive(false);
        pushButtonToggleLock->setAutoDefault(false);

        horizontalLayoutPanel->addWidget(pushButtonToggleLock);

        horizontalSpacer_7 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutPanel->addItem(horizontalSpacer_7);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QLatin1String("#groupBox_2 {\n"
"    background-color:transparent;\n"
"    border-radius:0;\n"
"}"));
        horizontalLayout_14 = new QHBoxLayout(groupBox_2);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        radioTreeMode = new QRadioButton(groupBox_2);
        radioTreeMode->setObjectName(QStringLiteral("radioTreeMode"));
        sizePolicy.setHeightForWidth(radioTreeMode->sizePolicy().hasHeightForWidth());
        radioTreeMode->setSizePolicy(sizePolicy);

        horizontalLayout_14->addWidget(radioTreeMode);

        radioListMode = new QRadioButton(groupBox_2);
        radioListMode->setObjectName(QStringLiteral("radioListMode"));
        sizePolicy.setHeightForWidth(radioListMode->sizePolicy().hasHeightForWidth());
        radioListMode->setSizePolicy(sizePolicy);
        radioListMode->setChecked(false);

        horizontalLayout_14->addWidget(radioListMode);


        horizontalLayoutPanel->addWidget(groupBox_2, 0, Qt::AlignRight);

        labelLocked = new QLabel(frame);
        labelLocked->setObjectName(QStringLiteral("labelLocked"));

        horizontalLayoutPanel->addWidget(labelLocked);


        horizontalLayout->addLayout(horizontalLayoutPanel);


        verticalLayout_2->addWidget(frame);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(20, -1, 20, -1);
        treeWidget = new CoinControlTreeWidget(frameContainer);
        treeWidget->headerItem()->setText(0, QString());
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        treeWidget->setStyleSheet(QStringLiteral(""));
        treeWidget->setSortingEnabled(false);
        treeWidget->setColumnCount(6);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(true));
        treeWidget->header()->setStretchLastSection(false);

        horizontalLayout_13->addWidget(treeWidget);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, 20, -1);
        layoutBytes = new QWidget(frameContainer);
        layoutBytes->setObjectName(QStringLiteral("layoutBytes"));
        horizontalLayout_4 = new QHBoxLayout(layoutBytes);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelCoinControlBytesText = new QLabel(layoutBytes);
        labelCoinControlBytesText->setObjectName(QStringLiteral("labelCoinControlBytesText"));

        horizontalLayout_4->addWidget(labelCoinControlBytesText);

        labelCoinControlBytes = new QLabel(layoutBytes);
        labelCoinControlBytes->setObjectName(QStringLiteral("labelCoinControlBytes"));

        horizontalLayout_4->addWidget(labelCoinControlBytes);

        pushButtonBytes = new QPushButton(layoutBytes);
        pushButtonBytes->setObjectName(QStringLiteral("pushButtonBytes"));
        pushButtonBytes->setMinimumSize(QSize(0, 24));
        pushButtonBytes->setMaximumSize(QSize(24, 26));
        pushButtonBytes->setFocusPolicy(Qt::NoFocus);
        pushButtonBytes->setStyleSheet(QLatin1String("padding-bottom:2px;\n"
"               padding-right:4px;"));

        horizontalLayout_4->addWidget(pushButtonBytes, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_4->setStretch(1, 1);

        horizontalLayout_3->addWidget(layoutBytes);

        layoutDust = new QWidget(frameContainer);
        layoutDust->setObjectName(QStringLiteral("layoutDust"));
        horizontalLayout_5 = new QHBoxLayout(layoutDust);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelCoinControlLowOutputText = new QLabel(layoutDust);
        labelCoinControlLowOutputText->setObjectName(QStringLiteral("labelCoinControlLowOutputText"));

        horizontalLayout_5->addWidget(labelCoinControlLowOutputText);

        labelCoinControlLowOutput = new QLabel(layoutDust);
        labelCoinControlLowOutput->setObjectName(QStringLiteral("labelCoinControlLowOutput"));

        horizontalLayout_5->addWidget(labelCoinControlLowOutput);

        pushButtonDust = new QPushButton(layoutDust);
        pushButtonDust->setObjectName(QStringLiteral("pushButtonDust"));
        pushButtonDust->setMinimumSize(QSize(0, 24));
        pushButtonDust->setMaximumSize(QSize(24, 26));
        pushButtonDust->setFocusPolicy(Qt::NoFocus);
        pushButtonDust->setStyleSheet(QLatin1String("padding-bottom:2px;\n"
"               padding-right:4px;"));

        horizontalLayout_5->addWidget(pushButtonDust, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_5->setStretch(1, 1);

        horizontalLayout_3->addWidget(layoutDust);

        layoutChange = new QWidget(frameContainer);
        layoutChange->setObjectName(QStringLiteral("layoutChange"));
        horizontalLayout_6 = new QHBoxLayout(layoutChange);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelCoinControlChangeText = new QLabel(layoutChange);
        labelCoinControlChangeText->setObjectName(QStringLiteral("labelCoinControlChangeText"));

        horizontalLayout_6->addWidget(labelCoinControlChangeText);

        labelCoinControlChange = new QLabel(layoutChange);
        labelCoinControlChange->setObjectName(QStringLiteral("labelCoinControlChange"));

        horizontalLayout_6->addWidget(labelCoinControlChange);

        pushButtonChange = new QPushButton(layoutChange);
        pushButtonChange->setObjectName(QStringLiteral("pushButtonChange"));
        pushButtonChange->setMinimumSize(QSize(0, 24));
        pushButtonChange->setMaximumSize(QSize(24, 26));
        pushButtonChange->setFocusPolicy(Qt::NoFocus);
        pushButtonChange->setStyleSheet(QLatin1String("padding-bottom:2px;\n"
"               padding-right:4px;"));

        horizontalLayout_6->addWidget(pushButtonChange, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_6->setStretch(1, 1);

        horizontalLayout_3->addWidget(layoutChange);

        layoutAfter = new QWidget(frameContainer);
        layoutAfter->setObjectName(QStringLiteral("layoutAfter"));
        horizontalLayout_7 = new QHBoxLayout(layoutAfter);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        labelCoinControlAfterFeeText = new QLabel(layoutAfter);
        labelCoinControlAfterFeeText->setObjectName(QStringLiteral("labelCoinControlAfterFeeText"));

        horizontalLayout_7->addWidget(labelCoinControlAfterFeeText);

        labelCoinControlAfterFee = new QLabel(layoutAfter);
        labelCoinControlAfterFee->setObjectName(QStringLiteral("labelCoinControlAfterFee"));

        horizontalLayout_7->addWidget(labelCoinControlAfterFee);

        pushButtonAlterFee = new QPushButton(layoutAfter);
        pushButtonAlterFee->setObjectName(QStringLiteral("pushButtonAlterFee"));
        pushButtonAlterFee->setMinimumSize(QSize(0, 24));
        pushButtonAlterFee->setMaximumSize(QSize(24, 26));
        pushButtonAlterFee->setFocusPolicy(Qt::NoFocus);
        pushButtonAlterFee->setStyleSheet(QLatin1String("padding-bottom:2px;\n"
"               padding-right:4px;"));

        horizontalLayout_7->addWidget(pushButtonAlterFee, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        horizontalLayout_7->setStretch(1, 1);

        horizontalLayout_3->addWidget(layoutAfter);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, -1, 26, -1);
        horizontalSpacer_3 = new QSpacerItem(558, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButtonOk = new QPushButton(frameContainer);
        pushButtonOk->setObjectName(QStringLiteral("pushButtonOk"));
        pushButtonOk->setMinimumSize(QSize(150, 35));

        horizontalLayout_2->addWidget(pushButtonOk);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(frameContainer);


        retranslateUi(CoinControlDialog);

        QMetaObject::connectSlotsByName(CoinControlDialog);
    } // setupUi

    void retranslateUi(QDialog *CoinControlDialog)
    {
        CoinControlDialog->setWindowTitle(QApplication::translate("CoinControlDialog", "Coin Selection", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("CoinControlDialog", "Select EGG Outputs to Spend", Q_NULLPTR));
        labelCoinControlAmountText->setText(QApplication::translate("CoinControlDialog", "Amount", Q_NULLPTR));
        labelCoinControlAmount->setText(QApplication::translate("CoinControlDialog", "0.00 EGG", Q_NULLPTR));
        pushButtonAmount->setText(QString());
        labelCoinControlQuantityText->setText(QApplication::translate("CoinControlDialog", "Quantity:", Q_NULLPTR));
        labelCoinControlQuantity->setText(QApplication::translate("CoinControlDialog", "0", Q_NULLPTR));
        pushButtonQuantity->setText(QString());
        labelCoinControlFeeText->setText(QApplication::translate("CoinControlDialog", "Fee:", Q_NULLPTR));
        labelCoinControlFee->setText(QApplication::translate("CoinControlDialog", "0.00 EGG", Q_NULLPTR));
        pushButtonFee->setText(QString());
        pushButtonSelectAll->setText(QApplication::translate("CoinControlDialog", "Select all", Q_NULLPTR));
        pushButtonToggleLock->setText(QApplication::translate("CoinControlDialog", "Toggle lock state", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        radioTreeMode->setText(QApplication::translate("CoinControlDialog", "Tree mode", Q_NULLPTR));
        radioListMode->setText(QApplication::translate("CoinControlDialog", "List mode", Q_NULLPTR));
        labelLocked->setText(QApplication::translate("CoinControlDialog", "(1 locked)", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("CoinControlDialog", "Confirmations", Q_NULLPTR));
        ___qtreewidgetitem->setText(4, QApplication::translate("CoinControlDialog", "Date", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("CoinControlDialog", "Received with address", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("CoinControlDialog", "Received with label", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("CoinControlDialog", "Amount", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtreewidgetitem->setToolTip(5, QApplication::translate("CoinControlDialog", "Confirmed", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelCoinControlBytesText->setText(QApplication::translate("CoinControlDialog", "Bytes:", Q_NULLPTR));
        labelCoinControlBytes->setText(QApplication::translate("CoinControlDialog", "0", Q_NULLPTR));
        pushButtonBytes->setText(QString());
        labelCoinControlLowOutputText->setText(QApplication::translate("CoinControlDialog", "Dust:", Q_NULLPTR));
        labelCoinControlLowOutput->setText(QApplication::translate("CoinControlDialog", "no", Q_NULLPTR));
        pushButtonDust->setText(QString());
        labelCoinControlChangeText->setText(QApplication::translate("CoinControlDialog", "Change:", Q_NULLPTR));
        labelCoinControlChange->setText(QApplication::translate("CoinControlDialog", "0", Q_NULLPTR));
        pushButtonChange->setText(QString());
        labelCoinControlAfterFeeText->setText(QApplication::translate("CoinControlDialog", "After Fee: ", Q_NULLPTR));
        labelCoinControlAfterFee->setText(QApplication::translate("CoinControlDialog", "0.00 EGG", Q_NULLPTR));
        pushButtonAlterFee->setText(QString());
        pushButtonOk->setText(QApplication::translate("CoinControlDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CoinControlDialog: public Ui_CoinControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COINCONTROLDIALOG_H
