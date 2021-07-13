/********************************************************************************
** Form generated from reading UI file 'splash.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASH_H
#define UI_SPLASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Splash
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QPushButton *imgLogo;
    QSpacerItem *horizontalSpacer_1;
    QLabel *lblLogo;
    QSpacerItem *horizontalSpacer_11;
    QWidget *horizontalWidget;
    QLabel *lblMessage;
    QWidget *layoutProgress;
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QSpacerItem *horizontalSpacer_12;
    QLabel *lblVersion;

    void setupUi(QWidget *Splash)
    {
        if (Splash->objectName().isEmpty())
            Splash->setObjectName(QStringLiteral("Splash"));
        Splash->resize(768, 431);
        Splash->setMinimumSize(QSize(768, 431));
        Splash->setMaximumSize(QSize(16777215, 700));
        verticalLayout_2 = new QVBoxLayout(Splash);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(Splash);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(768, 431));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setAlignment(Qt::AlignTop|Qt::AlignHCenter);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        imgLogo = new QPushButton(frame);
        imgLogo->setObjectName(QStringLiteral("imgLogo"));
        imgLogo->setMinimumSize(QSize(210, 149));
        imgLogo->setFocusPolicy(Qt::NoFocus);
        imgLogo->setIconSize(QSize(210, 149));

        verticalLayout->addWidget(imgLogo);

        horizontalSpacer_1 = new QSpacerItem(40, 19, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(horizontalSpacer_1);

        lblLogo = new QLabel(frame);
        lblLogo->setObjectName(QStringLiteral("lblLogo"));
        lblLogo->setGeometry(QRect(0, 0, 235, 45));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblLogo->sizePolicy().hasHeightForWidth());
        lblLogo->setSizePolicy(sizePolicy);
        lblLogo->setMinimumSize(QSize(0, 0));
        lblLogo->setMaximumSize(QSize(235, 45));
        lblLogo->setStyleSheet(QLatin1String("\n"
"										height: 45px;\n"
"										width: 235px;\n"
"										color: #66F;\n"
"										font-family: \"Montserrat Medium\";\n"
"										font-size: 37px;\n"
"										letter-spacing: 4.81px;\n"
"										line-height: 45px;\n"
"										text-align: right;\n"
"									"));
        lblLogo->setAlignment(Qt::AlignTop|Qt::AlignHCenter);

        verticalLayout->addWidget(lblLogo);

        horizontalSpacer_11 = new QSpacerItem(40, 9, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(horizontalSpacer_11);

        horizontalWidget = new QWidget(frame);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        horizontalWidget->setMinimumSize(QSize(235, 12));
        horizontalWidget->setMaximumSize(QSize(235, 12));
        lblMessage = new QLabel(horizontalWidget);
        lblMessage->setObjectName(QStringLiteral("lblMessage"));
        lblMessage->setGeometry(QRect(0, 0, 235, 12));
        sizePolicy.setHeightForWidth(lblMessage->sizePolicy().hasHeightForWidth());
        lblMessage->setSizePolicy(sizePolicy);
        lblMessage->setMinimumSize(QSize(0, 0));
        lblMessage->setMaximumSize(QSize(235, 22));
        lblMessage->setStyleSheet(QLatin1String("\n"
"											height: 11px;\n"
"											width: 91px;\n"
"											color: #828282;\n"
"											font-family: Nunito;\n"
"											font-size: 9px;\n"
"											letter-spacing: 1.04px;\n"
"											line-height: 12px;\n"
"										"));
        lblMessage->setAlignment(Qt::AlignTop|Qt::AlignLeft);

        verticalLayout->addWidget(horizontalWidget);

        layoutProgress = new QWidget(frame);
        layoutProgress->setObjectName(QStringLiteral("layoutProgress"));
        layoutProgress->setMinimumSize(QSize(235, 4));
        layoutProgress->setMaximumSize(QSize(235, 4));
        horizontalLayout = new QHBoxLayout(layoutProgress);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 2, 0, 0);
        progressBar = new QProgressBar(layoutProgress);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout->addWidget(progressBar);


        verticalLayout->addWidget(layoutProgress);

        horizontalSpacer_12 = new QSpacerItem(40, 86, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(horizontalSpacer_12);

        lblVersion = new QLabel(frame);
        lblVersion->setObjectName(QStringLiteral("lblVersion"));
        lblVersion->setGeometry(QRect(0, 0, 200, 16));
        sizePolicy.setHeightForWidth(lblVersion->sizePolicy().hasHeightForWidth());
        lblVersion->setSizePolicy(sizePolicy);
        lblVersion->setMinimumSize(QSize(0, 0));
        lblVersion->setMaximumSize(QSize(200, 16));
        lblVersion->setStyleSheet(QLatin1String("\n"
"										height: 16px;\n"
"										width: 85px;\n"
"										color: #242424;\n"
"										font-family: Nunito;\n"
"										font-size: 12px;\n"
"										letter-spacing: 0.2px;\n"
"										line-height: 16px;\n"
"										text-align: center;\n"
"									"));
        lblVersion->setAlignment(Qt::AlignTop|Qt::AlignHCenter);

        verticalLayout->addWidget(lblVersion);


        verticalLayout_2->addWidget(frame);


        retranslateUi(Splash);

        QMetaObject::connectSlotsByName(Splash);
    } // setupUi

    void retranslateUi(QWidget *Splash)
    {
        Splash->setWindowTitle(QApplication::translate("Splash", "Form", Q_NULLPTR));
        imgLogo->setText(QString());
        lblLogo->setText(QApplication::translate("Splash", "NESTEGG", Q_NULLPTR));
        lblMessage->setText(QApplication::translate("Splash", "Loading\342\200\246", Q_NULLPTR));
        lblVersion->setText(QApplication::translate("Splash", "VERSION 1.4.1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Splash: public Ui_Splash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASH_H
