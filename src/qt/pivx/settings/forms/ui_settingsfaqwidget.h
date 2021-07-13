/********************************************************************************
** Form generated from reading UI file 'settingsfaqwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSFAQWIDGET_H
#define UI_SETTINGSFAQWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/pivx/pfborderimage.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsFaqWidget
{
public:
    QHBoxLayout *horizontalLayout;
    PFBorderImage *container;
    QVBoxLayout *verticalLayoutcont;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonExit;
    QHBoxLayout *horizontalLayout_6;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *containerButtons;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pushButton_Intro;
    QPushButton *pushButton_UnspendablePIV;
    QPushButton *pushButton_Stake;
    QPushButton *pushButton_Support;
    QPushButton *pushButton_Masternode;
    QPushButton *pushButton_MNController;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelWebLink;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonWebLink;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *right;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollAreaFaq;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_Intro;
    QHBoxLayout *horizontalLayout_Intro;
    QLabel *labelNumber_Intro;
    QVBoxLayout *verticalLayout_Intro;
    QLabel *labelSubtitle_Intro;
    QSpacerItem *verticalSpacer1_Intro;
    QLabel *labelContent_Intro;
    QSpacerItem *verticalSpacer2_Intro;
    QWidget *widget_UnspendablePIV;
    QHBoxLayout *horizontalPage_UnspendablePIV;
    QLabel *labelNumber_UnspendablePIV;
    QVBoxLayout *verticalLayout_UnspendablePIV;
    QLabel *labelSubtitle_UnspendablePIV;
    QSpacerItem *verticalSpacer1_UnspendablePIV;
    QLabel *labelContent_UnspendablePIV;
    QSpacerItem *verticalSpacer2_UnspendablePIV;
    QWidget *widget_Stake;
    QHBoxLayout *horizontalpage_Stake;
    QLabel *labelNumber_Stake;
    QVBoxLayout *verticalLayoutpage_Stake;
    QLabel *labelSubtitle_Stake;
    QSpacerItem *verticalSpacer1_Stake;
    QLabel *labelContent_Stake;
    QSpacerItem *verticalSpacer2_Stake;
    QWidget *widget_Support;
    QHBoxLayout *horizontalpage_Support;
    QLabel *labelNumber_Support;
    QVBoxLayout *verticalLayoutpage_Support;
    QLabel *labelSubtitle_Support;
    QSpacerItem *verticalSpacer1_Support;
    QLabel *labelContent_Support;
    QSpacerItem *verticalSpacer2_Support;
    QWidget *widget_Masternode;
    QHBoxLayout *horizontalpage_Masternode;
    QLabel *labelNumber_Masternode;
    QVBoxLayout *verticalLayoutpage_Masternode;
    QLabel *labelSubtitle_Masternode;
    QSpacerItem *verticalSpacer1_Masternode;
    QLabel *labelContent_Masternode;
    QSpacerItem *verticalSpacer2_Masternode;
    QWidget *widget_MNController;
    QHBoxLayout *horizontalpage_MNController;
    QLabel *labelNumber_MNController;
    QVBoxLayout *verticalLayoutpage_MNController;
    QLabel *labelSubtitle_MNController;
    QSpacerItem *verticalSpacer1_MNController;
    QLabel *labelContent_MNController;
    QSpacerItem *verticalSpacer2_MNController;

    void setupUi(QWidget *SettingsFaqWidget)
    {
        if (SettingsFaqWidget->objectName().isEmpty())
            SettingsFaqWidget->setObjectName(QStringLiteral("SettingsFaqWidget"));
        SettingsFaqWidget->resize(1203, 1741);
        horizontalLayout = new QHBoxLayout(SettingsFaqWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        container = new PFBorderImage(SettingsFaqWidget);
        container->setObjectName(QStringLiteral("container"));
        verticalLayoutcont = new QVBoxLayout(container);
        verticalLayoutcont->setObjectName(QStringLiteral("verticalLayoutcont"));
        verticalLayoutcont->setContentsMargins(36, 44, 36, 44);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, -1, 10, -1);
        labelTitle = new QLabel(container);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonExit = new QPushButton(container);
        pushButtonExit->setObjectName(QStringLiteral("pushButtonExit"));

        horizontalLayout_3->addWidget(pushButtonExit);


        verticalLayoutcont->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        left = new QWidget(container);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        containerButtons = new QWidget(left);
        containerButtons->setObjectName(QStringLiteral("containerButtons"));
        verticalLayout = new QVBoxLayout(containerButtons);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(containerButtons);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_9 = new QVBoxLayout(groupBox);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButton_Intro = new QPushButton(groupBox);
        pushButton_Intro->setObjectName(QStringLiteral("pushButton_Intro"));
        pushButton_Intro->setMinimumSize(QSize(0, 50));
        pushButton_Intro->setMaximumSize(QSize(16777215, 50));
        pushButton_Intro->setFocusPolicy(Qt::NoFocus);
        pushButton_Intro->setCheckable(true);
        pushButton_Intro->setChecked(true);
        pushButton_Intro->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_Intro);

        pushButton_UnspendablePIV = new QPushButton(groupBox);
        pushButton_UnspendablePIV->setObjectName(QStringLiteral("pushButton_UnspendablePIV"));
        pushButton_UnspendablePIV->setMinimumSize(QSize(0, 50));
        pushButton_UnspendablePIV->setMaximumSize(QSize(16777215, 50));
        pushButton_UnspendablePIV->setFocusPolicy(Qt::NoFocus);
        pushButton_UnspendablePIV->setCheckable(true);
        pushButton_UnspendablePIV->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_UnspendablePIV);

        pushButton_Stake = new QPushButton(groupBox);
        pushButton_Stake->setObjectName(QStringLiteral("pushButton_Stake"));
        pushButton_Stake->setMinimumSize(QSize(0, 50));
        pushButton_Stake->setFocusPolicy(Qt::NoFocus);
        pushButton_Stake->setCheckable(true);
        pushButton_Stake->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_Stake);

        pushButton_Support = new QPushButton(groupBox);
        pushButton_Support->setObjectName(QStringLiteral("pushButton_Support"));
        pushButton_Support->setMinimumSize(QSize(0, 50));
        pushButton_Support->setFocusPolicy(Qt::NoFocus);
        pushButton_Support->setCheckable(true);
        pushButton_Support->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_Support);

        pushButton_Masternode = new QPushButton(groupBox);
        pushButton_Masternode->setObjectName(QStringLiteral("pushButton_Masternode"));
        pushButton_Masternode->setMinimumSize(QSize(0, 50));
        pushButton_Masternode->setFocusPolicy(Qt::NoFocus);
        pushButton_Masternode->setCheckable(true);
        pushButton_Masternode->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_Masternode);

        pushButton_MNController = new QPushButton(groupBox);
        pushButton_MNController->setObjectName(QStringLiteral("pushButton_MNController"));
        pushButton_MNController->setMinimumSize(QSize(0, 50));
        pushButton_MNController->setFocusPolicy(Qt::NoFocus);
        pushButton_MNController->setCheckable(true);
        pushButton_MNController->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_MNController);


        verticalLayout->addWidget(groupBox);


        verticalLayout_2->addWidget(containerButtons);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelWebLink = new QLabel(left);
        labelWebLink->setObjectName(QStringLiteral("labelWebLink"));

        horizontalLayout_2->addWidget(labelWebLink);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButtonWebLink = new QPushButton(left);
        pushButtonWebLink->setObjectName(QStringLiteral("pushButtonWebLink"));
        pushButtonWebLink->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pushButtonWebLink);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_6->addWidget(left);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        right = new QWidget(container);
        right->setObjectName(QStringLiteral("right"));
        verticalLayout_5 = new QVBoxLayout(right);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        scrollAreaFaq = new QScrollArea(right);
        scrollAreaFaq->setObjectName(QStringLiteral("scrollAreaFaq"));
        scrollAreaFaq->setStyleSheet(QStringLiteral("#scrollAreaFaq { background:transparent; }"));
        scrollAreaFaq->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaFaq->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollAreaFaq->setWidgetResizable(true);
        scrollAreaFaq->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 642, 1614));
        scrollAreaWidgetContents->setAutoFillBackground(false);
        scrollAreaWidgetContents->setStyleSheet(QStringLiteral("#scrollAreaWidgetContents { background:transparent; }"));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget_Intro = new QWidget(scrollAreaWidgetContents);
        widget_Intro->setObjectName(QStringLiteral("widget_Intro"));
        widget_Intro->setMinimumSize(QSize(300, 0));
        horizontalLayout_Intro = new QHBoxLayout(widget_Intro);
        horizontalLayout_Intro->setObjectName(QStringLiteral("horizontalLayout_Intro"));
        labelNumber_Intro = new QLabel(widget_Intro);
        labelNumber_Intro->setObjectName(QStringLiteral("labelNumber_Intro"));
        labelNumber_Intro->setMinimumSize(QSize(24, 24));
        labelNumber_Intro->setMaximumSize(QSize(16777215, 24));
        labelNumber_Intro->setAlignment(Qt::AlignCenter);

        horizontalLayout_Intro->addWidget(labelNumber_Intro, 0, Qt::AlignTop);

        verticalLayout_Intro = new QVBoxLayout();
        verticalLayout_Intro->setObjectName(QStringLiteral("verticalLayout_Intro"));
        verticalLayout_Intro->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_Intro = new QLabel(widget_Intro);
        labelSubtitle_Intro->setObjectName(QStringLiteral("labelSubtitle_Intro"));
        labelSubtitle_Intro->setWordWrap(true);

        verticalLayout_Intro->addWidget(labelSubtitle_Intro);

        verticalSpacer1_Intro = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_Intro->addItem(verticalSpacer1_Intro);

        labelContent_Intro = new QLabel(widget_Intro);
        labelContent_Intro->setObjectName(QStringLiteral("labelContent_Intro"));
        labelContent_Intro->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_Intro->setWordWrap(true);

        verticalLayout_Intro->addWidget(labelContent_Intro);

        verticalSpacer2_Intro = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Intro->addItem(verticalSpacer2_Intro);


        horizontalLayout_Intro->addLayout(verticalLayout_Intro);

        horizontalLayout_Intro->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_Intro);

        widget_UnspendablePIV = new QWidget(scrollAreaWidgetContents);
        widget_UnspendablePIV->setObjectName(QStringLiteral("widget_UnspendablePIV"));
        horizontalPage_UnspendablePIV = new QHBoxLayout(widget_UnspendablePIV);
        horizontalPage_UnspendablePIV->setObjectName(QStringLiteral("horizontalPage_UnspendablePIV"));
        labelNumber_UnspendablePIV = new QLabel(widget_UnspendablePIV);
        labelNumber_UnspendablePIV->setObjectName(QStringLiteral("labelNumber_UnspendablePIV"));
        labelNumber_UnspendablePIV->setMinimumSize(QSize(24, 24));
        labelNumber_UnspendablePIV->setMaximumSize(QSize(16777215, 24));
        labelNumber_UnspendablePIV->setAlignment(Qt::AlignCenter);

        horizontalPage_UnspendablePIV->addWidget(labelNumber_UnspendablePIV, 0, Qt::AlignTop);

        verticalLayout_UnspendablePIV = new QVBoxLayout();
        verticalLayout_UnspendablePIV->setSpacing(0);
        verticalLayout_UnspendablePIV->setObjectName(QStringLiteral("verticalLayout_UnspendablePIV"));
        verticalLayout_UnspendablePIV->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_UnspendablePIV = new QLabel(widget_UnspendablePIV);
        labelSubtitle_UnspendablePIV->setObjectName(QStringLiteral("labelSubtitle_UnspendablePIV"));
        labelSubtitle_UnspendablePIV->setWordWrap(true);

        verticalLayout_UnspendablePIV->addWidget(labelSubtitle_UnspendablePIV);

        verticalSpacer1_UnspendablePIV = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_UnspendablePIV->addItem(verticalSpacer1_UnspendablePIV);

        labelContent_UnspendablePIV = new QLabel(widget_UnspendablePIV);
        labelContent_UnspendablePIV->setObjectName(QStringLiteral("labelContent_UnspendablePIV"));
        labelContent_UnspendablePIV->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_UnspendablePIV->setWordWrap(true);

        verticalLayout_UnspendablePIV->addWidget(labelContent_UnspendablePIV);

        verticalSpacer2_UnspendablePIV = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_UnspendablePIV->addItem(verticalSpacer2_UnspendablePIV);


        horizontalPage_UnspendablePIV->addLayout(verticalLayout_UnspendablePIV);

        horizontalPage_UnspendablePIV->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_UnspendablePIV);

        widget_Stake = new QWidget(scrollAreaWidgetContents);
        widget_Stake->setObjectName(QStringLiteral("widget_Stake"));
        horizontalpage_Stake = new QHBoxLayout(widget_Stake);
        horizontalpage_Stake->setObjectName(QStringLiteral("horizontalpage_Stake"));
        labelNumber_Stake = new QLabel(widget_Stake);
        labelNumber_Stake->setObjectName(QStringLiteral("labelNumber_Stake"));
        labelNumber_Stake->setMinimumSize(QSize(24, 24));
        labelNumber_Stake->setMaximumSize(QSize(16777215, 24));
        labelNumber_Stake->setAlignment(Qt::AlignCenter);

        horizontalpage_Stake->addWidget(labelNumber_Stake, 0, Qt::AlignTop);

        verticalLayoutpage_Stake = new QVBoxLayout();
        verticalLayoutpage_Stake->setObjectName(QStringLiteral("verticalLayoutpage_Stake"));
        verticalLayoutpage_Stake->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_Stake = new QLabel(widget_Stake);
        labelSubtitle_Stake->setObjectName(QStringLiteral("labelSubtitle_Stake"));
        labelSubtitle_Stake->setWordWrap(true);

        verticalLayoutpage_Stake->addWidget(labelSubtitle_Stake);

        verticalSpacer1_Stake = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutpage_Stake->addItem(verticalSpacer1_Stake);

        labelContent_Stake = new QLabel(widget_Stake);
        labelContent_Stake->setObjectName(QStringLiteral("labelContent_Stake"));
        labelContent_Stake->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_Stake->setWordWrap(true);

        verticalLayoutpage_Stake->addWidget(labelContent_Stake);

        verticalSpacer2_Stake = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutpage_Stake->addItem(verticalSpacer2_Stake);


        horizontalpage_Stake->addLayout(verticalLayoutpage_Stake);

        horizontalpage_Stake->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_Stake);

        widget_Support = new QWidget(scrollAreaWidgetContents);
        widget_Support->setObjectName(QStringLiteral("widget_Support"));
        horizontalpage_Support = new QHBoxLayout(widget_Support);
        horizontalpage_Support->setObjectName(QStringLiteral("horizontalpage_Support"));
        labelNumber_Support = new QLabel(widget_Support);
        labelNumber_Support->setObjectName(QStringLiteral("labelNumber_Support"));
        labelNumber_Support->setMinimumSize(QSize(24, 24));
        labelNumber_Support->setMaximumSize(QSize(16777215, 24));
        labelNumber_Support->setAlignment(Qt::AlignCenter);

        horizontalpage_Support->addWidget(labelNumber_Support, 0, Qt::AlignTop);

        verticalLayoutpage_Support = new QVBoxLayout();
        verticalLayoutpage_Support->setObjectName(QStringLiteral("verticalLayoutpage_Support"));
        verticalLayoutpage_Support->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_Support = new QLabel(widget_Support);
        labelSubtitle_Support->setObjectName(QStringLiteral("labelSubtitle_Support"));
        labelSubtitle_Support->setWordWrap(true);

        verticalLayoutpage_Support->addWidget(labelSubtitle_Support);

        verticalSpacer1_Support = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutpage_Support->addItem(verticalSpacer1_Support);

        labelContent_Support = new QLabel(widget_Support);
        labelContent_Support->setObjectName(QStringLiteral("labelContent_Support"));
        labelContent_Support->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_Support->setWordWrap(true);

        verticalLayoutpage_Support->addWidget(labelContent_Support);

        verticalSpacer2_Support = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutpage_Support->addItem(verticalSpacer2_Support);


        horizontalpage_Support->addLayout(verticalLayoutpage_Support);

        horizontalpage_Support->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_Support);

        widget_Masternode = new QWidget(scrollAreaWidgetContents);
        widget_Masternode->setObjectName(QStringLiteral("widget_Masternode"));
        horizontalpage_Masternode = new QHBoxLayout(widget_Masternode);
        horizontalpage_Masternode->setObjectName(QStringLiteral("horizontalpage_Masternode"));
        labelNumber_Masternode = new QLabel(widget_Masternode);
        labelNumber_Masternode->setObjectName(QStringLiteral("labelNumber_Masternode"));
        labelNumber_Masternode->setMinimumSize(QSize(24, 24));
        labelNumber_Masternode->setMaximumSize(QSize(16777215, 24));
        labelNumber_Masternode->setAlignment(Qt::AlignCenter);

        horizontalpage_Masternode->addWidget(labelNumber_Masternode, 0, Qt::AlignTop);

        verticalLayoutpage_Masternode = new QVBoxLayout();
        verticalLayoutpage_Masternode->setObjectName(QStringLiteral("verticalLayoutpage_Masternode"));
        verticalLayoutpage_Masternode->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_Masternode = new QLabel(widget_Masternode);
        labelSubtitle_Masternode->setObjectName(QStringLiteral("labelSubtitle_Masternode"));
        labelSubtitle_Masternode->setWordWrap(true);

        verticalLayoutpage_Masternode->addWidget(labelSubtitle_Masternode);

        verticalSpacer1_Masternode = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutpage_Masternode->addItem(verticalSpacer1_Masternode);

        labelContent_Masternode = new QLabel(widget_Masternode);
        labelContent_Masternode->setObjectName(QStringLiteral("labelContent_Masternode"));
        labelContent_Masternode->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_Masternode->setWordWrap(true);

        verticalLayoutpage_Masternode->addWidget(labelContent_Masternode);

        verticalSpacer2_Masternode = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutpage_Masternode->addItem(verticalSpacer2_Masternode);


        horizontalpage_Masternode->addLayout(verticalLayoutpage_Masternode);

        horizontalpage_Masternode->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_Masternode);

        widget_MNController = new QWidget(scrollAreaWidgetContents);
        widget_MNController->setObjectName(QStringLiteral("widget_MNController"));
        horizontalpage_MNController = new QHBoxLayout(widget_MNController);
        horizontalpage_MNController->setObjectName(QStringLiteral("horizontalpage_MNController"));
        labelNumber_MNController = new QLabel(widget_MNController);
        labelNumber_MNController->setObjectName(QStringLiteral("labelNumber_MNController"));
        labelNumber_MNController->setMinimumSize(QSize(24, 24));
        labelNumber_MNController->setMaximumSize(QSize(16777215, 24));
        labelNumber_MNController->setAlignment(Qt::AlignCenter);

        horizontalpage_MNController->addWidget(labelNumber_MNController, 0, Qt::AlignTop);

        verticalLayoutpage_MNController = new QVBoxLayout();
        verticalLayoutpage_MNController->setObjectName(QStringLiteral("verticalLayoutpage_MNController"));
        verticalLayoutpage_MNController->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_MNController = new QLabel(widget_MNController);
        labelSubtitle_MNController->setObjectName(QStringLiteral("labelSubtitle_MNController"));
        labelSubtitle_MNController->setWordWrap(true);

        verticalLayoutpage_MNController->addWidget(labelSubtitle_MNController);

        verticalSpacer1_MNController = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutpage_MNController->addItem(verticalSpacer1_MNController);

        labelContent_MNController = new QLabel(widget_MNController);
        labelContent_MNController->setObjectName(QStringLiteral("labelContent_MNController"));
        labelContent_MNController->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_MNController->setWordWrap(true);

        verticalLayoutpage_MNController->addWidget(labelContent_MNController);

        verticalSpacer2_MNController = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutpage_MNController->addItem(verticalSpacer2_MNController);


        horizontalpage_MNController->addLayout(verticalLayoutpage_MNController);

        horizontalpage_MNController->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_MNController);

        scrollAreaFaq->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollAreaFaq);


        verticalLayout_5->addLayout(verticalLayout_6);


        horizontalLayout_6->addWidget(right);

        horizontalLayout_6->setStretch(0, 2);
        horizontalLayout_6->setStretch(2, 3);

        verticalLayoutcont->addLayout(horizontalLayout_6);


        horizontalLayout->addWidget(container);


        retranslateUi(SettingsFaqWidget);

        QMetaObject::connectSlotsByName(SettingsFaqWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsFaqWidget)
    {
        SettingsFaqWidget->setWindowTitle(QApplication::translate("SettingsFaqWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsFaqWidget", "Frequently Asked Questions", Q_NULLPTR));
        pushButtonExit->setText(QApplication::translate("SettingsFaqWidget", "Exit", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_Intro->setText(QApplication::translate("SettingsFaqWidget", "1) What is NestEgg?", Q_NULLPTR));
        pushButton_UnspendablePIV->setText(QApplication::translate("SettingsFaqWidget", "2) Why are my EGG unspendable?", Q_NULLPTR));
        pushButton_Stake->setText(QApplication::translate("SettingsFaqWidget", "3) How do I stake EGG?", Q_NULLPTR));
        pushButton_Support->setText(QApplication::translate("SettingsFaqWidget", "4) Where I should go if I need support?", Q_NULLPTR));
        pushButton_Masternode->setText(QApplication::translate("SettingsFaqWidget", "5) What is a Masternode?", Q_NULLPTR));
        pushButton_MNController->setText(QApplication::translate("SettingsFaqWidget", "6) What is a Masternode Controller?", Q_NULLPTR));
        labelWebLink->setText(QApplication::translate("SettingsFaqWidget", "You can read more here", Q_NULLPTR));
        pushButtonWebLink->setText(QApplication::translate("SettingsFaqWidget", "https://nesteggcoin.com/", Q_NULLPTR));
        labelNumber_Intro->setText(QApplication::translate("SettingsFaqWidget", "1", Q_NULLPTR));
        labelSubtitle_Intro->setText(QApplication::translate("SettingsFaqWidget", "What is NestEgg?", Q_NULLPTR));
        labelContent_Intro->setText(QApplication::translate("SettingsFaqWidget", "\n"
"                           <html><body><p style='margin-top:0in;margin-right:0in;margin-bottom:10.0pt;margin-left:0in;line-height:115%;font-size:15px;font-family:\"Calibri\",\"sans-serif\";text-align:justify;'>NestEGG Coin was developed to give the average person an opportunity to benefit from the ever growing and increasing value of cryptocurrency. We found many coins that were based on really nothing but a concept or perceived value. EGG coin will be based on a diverse portfolio of coins like Bitcoin, Litecoin etc. as well as masternodes.</p> <p style='margin-top:0in;margin-right:0in;margin-bottom:10.0pt;margin-left:0in;line-height:115%;font-size:15px;font-family:\"Calibri\",\"sans-serif\";text-align:justify;'>By combining both coin appreciation of the held coins and the generated income of the masternodes we will be able to continually increase our coin&apos;s value. We also maintain several of our own masternodes as assets. We believe whole heartedly in our concept and therefore should hold several ot"
                        "her masternodes as<span style='font-size:15px;line-height:115%;font-family:\"Calibri\",\"sans-serif\";'>&nbsp;assets.</span></p></body></html>\n"
"                         ", Q_NULLPTR));
        labelNumber_UnspendablePIV->setText(QApplication::translate("SettingsFaqWidget", "2", Q_NULLPTR));
        labelSubtitle_UnspendablePIV->setText(QApplication::translate("SettingsFaqWidget", "Why are my EGG unspendable?", Q_NULLPTR));
        labelContent_UnspendablePIV->setText(QApplication::translate("SettingsFaqWidget", "\n"
"                           <html><head/><body><p align=\"justify\">\n"
"                           Newly received NestEgg requires 6 confirmations on the network\n"
"                           to become eligible for spending which can take ~6 minutes.\n"
"                           </p><p align=\"justify\">\n"
"                           Your NestEgg wallet also needs to be completely synchronized\n"
"                           to see and spend balances on the network.\n"
"                           </p></body></html>\n"
"                         ", Q_NULLPTR));
        labelNumber_Stake->setText(QApplication::translate("SettingsFaqWidget", "3", Q_NULLPTR));
        labelSubtitle_Stake->setText(QApplication::translate("SettingsFaqWidget", "How do I stake EGG?", Q_NULLPTR));
        labelContent_Stake->setText(QApplication::translate("SettingsFaqWidget", "<html><head/><body><ol style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li align=\"justify\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Make sure your wallet is completely synchronized and you are using the latest release. </li><li align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You must have a balance of NestEgg with a minimum of 600 confirmations. </li><li align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Your wallet must stay online and be unlocked for staking purposes. </li><li align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Once all those steps are followed staking should be enabled. </li><li align=\"justify\" style=\""
                        " margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You can see the status of staking in the wallet by mousing over the package icon in the row on the top left of the wallet interface. There package will be lit up and will state &quot;Staking Enabled&quot; to indicate it is staking. Using the command line interface (nestegg-cli); the command <span style=\" font-style:italic;\">getstakingstatus</span> will confirm that staking is active. </li></ol></body></html>", Q_NULLPTR));
        labelNumber_Support->setText(QApplication::translate("SettingsFaqWidget", "4", Q_NULLPTR));
        labelSubtitle_Support->setText(QApplication::translate("SettingsFaqWidget", "Where should I go if I need support?", Q_NULLPTR));
        labelContent_Support->setText(QApplication::translate("SettingsFaqWidget", "\n"
"                           <html><head/><body><p align=\"justify\">\n"
"                           We have support channels in most of our official chat groups, for example\n"
"                           <a style='color: #b088ff' href='https://discord.gg/8KT55TM'>\n"
"                           #support in our Discord</a>.\n"
"                           </p></body></html>\n"
"                         ", Q_NULLPTR));
        labelNumber_Masternode->setText(QApplication::translate("SettingsFaqWidget", "5", Q_NULLPTR));
        labelSubtitle_Masternode->setText(QApplication::translate("SettingsFaqWidget", "What is a Masternode?", Q_NULLPTR));
        labelContent_Masternode->setText(QApplication::translate("SettingsFaqWidget", "\n"
"                           <html><head/><body><p align=\"justify\">\n"
"                           A masternode is a computer running a full node NestEgg core wallet with a\n"
"                           requirement of 25,000 EGG secured collateral to provide extra services\n"
"                           to the network and in return, receive a portion of the block reward\n"
"                           regularly.  These services include:\n"
"                           </p><p align=\"justify\">\n"
"\n"
"                           <ul>\n"
"                           <li>Instant transactions (SwiftX)</li>\n"
"                           <li>Validation of transactions within each block</li>\n"
"                           <li>Act as an additional full node in the network</li>\n"
"                           </ul>\n"
"\n"
"                           </p><p align=\"justify\">\n"
"                           For providing such services, masternodes are also paid a certain portion\n"
"                           of rew"
                        "ard for each block. This can serve as a passive income to the\n"
"                           masternode owners minus their running cost.\n"
"                           </p><p align=\"justify\">\n"
"\n"
"                           Masternode Perks:\n"
"                           </p><p align=\"justify\">\n"
"                           <ul>\n"
"                           <li>Earn Masternode Rewards</li>\n"
"                           <li>Commodity option for future sale</li>\n"
"                           <li>Help secure the NestEgg network</li>\n"
"                           </ul>\n"
"                           </p><p align=\"justify\">\n"
"\n"
"                           Requirements:\n"
"                           </p><p align=\"justify\">\n"
"                           <ul>\n"
"                           <li>25,000 EGG per single Masternode instance</li>\n"
"                           <li>Must be stored in a core wallet</li>\n"
"                           <li>Need dedicated IP address</li>\n"
"              "
                        "             <li>Masternode wallet to remain online</li>\n"
"                           </ul>\n"
"                           </p></body></html>\n"
"                         ", Q_NULLPTR));
        labelNumber_MNController->setText(QApplication::translate("SettingsFaqWidget", "6", Q_NULLPTR));
        labelSubtitle_MNController->setText(QApplication::translate("SettingsFaqWidget", "What is a Masternode Controller?", Q_NULLPTR));
        labelContent_MNController->setText(QApplication::translate("SettingsFaqWidget", "<html><head/><body><p align=\"justify\">A Masternode Controller wallet is where the 25,000 EGG collateral can reside during a Controller-Remote masternode setup. It is a wallet that can activate the remote masternode wallet(s) and allows you to keep your collateral coins offline while the remote masternode remains online. </p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsFaqWidget: public Ui_SettingsFaqWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSFAQWIDGET_H
