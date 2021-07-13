/********************************************************************************
** Form generated from reading UI file 'settingsexportcsv.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSEXPORTCSV_H
#define UI_SETTINGSEXPORTCSV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsExportCSV
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayoutTitle;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QVBoxLayout *verticalLayoutContainerTxExport;
    QWidget *filtersContainer;
    QHBoxLayout *horizontalLayout;
    QLabel *labelSubtitleLocation;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBoxSortType;
    QComboBox *comboBoxSort;
    QPushButton *pushButtonDocuments;
    QSpacerItem *verticalSpacer_4;
    QLabel *labelDivider;
    QVBoxLayout *verticalLayoutAddressesExport;
    QWidget *filtersContainer1;
    QHBoxLayout *horizontalLayout1;
    QLabel *labelSubtitleLocationAddress;
    QSpacerItem *horizontalSpacer1;
    QComboBox *comboBoxSortAddressType;
    QPushButton *pushButtonAddressDocuments;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SettingsExportCSV)
    {
        if (SettingsExportCSV->objectName().isEmpty())
            SettingsExportCSV->setObjectName(QStringLiteral("SettingsExportCSV"));
        SettingsExportCSV->resize(400, 427);
        verticalLayout = new QVBoxLayout(SettingsExportCSV);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsExportCSV);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_2 = new QVBoxLayout(left);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTitle = new QVBoxLayout();
        verticalLayoutTitle->setSpacing(5);
        verticalLayoutTitle->setObjectName(QStringLiteral("verticalLayoutTitle"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        verticalLayoutTitle->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(left);
        labelSubtitle1->setObjectName(QStringLiteral("labelSubtitle1"));
        labelSubtitle1->setWordWrap(true);

        verticalLayoutTitle->addWidget(labelSubtitle1);


        verticalLayout_2->addLayout(verticalLayoutTitle);

        verticalLayoutContainerTxExport = new QVBoxLayout();
        verticalLayoutContainerTxExport->setSpacing(0);
        verticalLayoutContainerTxExport->setObjectName(QStringLiteral("verticalLayoutContainerTxExport"));
        filtersContainer = new QWidget(left);
        filtersContainer->setObjectName(QStringLiteral("filtersContainer"));
        horizontalLayout = new QHBoxLayout(filtersContainer);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 1, 0);
        labelSubtitleLocation = new QLabel(filtersContainer);
        labelSubtitleLocation->setObjectName(QStringLiteral("labelSubtitleLocation"));

        horizontalLayout->addWidget(labelSubtitleLocation);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        comboBoxSortType = new QComboBox(filtersContainer);
        comboBoxSortType->setObjectName(QStringLiteral("comboBoxSortType"));
        comboBoxSortType->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(comboBoxSortType);

        comboBoxSort = new QComboBox(filtersContainer);
        comboBoxSort->setObjectName(QStringLiteral("comboBoxSort"));
        comboBoxSort->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(comboBoxSort);


        verticalLayoutContainerTxExport->addWidget(filtersContainer);

        pushButtonDocuments = new QPushButton(left);
        pushButtonDocuments->setObjectName(QStringLiteral("pushButtonDocuments"));
        pushButtonDocuments->setMinimumSize(QSize(0, 50));
        pushButtonDocuments->setMaximumSize(QSize(16777215, 50));
        pushButtonDocuments->setFocusPolicy(Qt::NoFocus);

        verticalLayoutContainerTxExport->addWidget(pushButtonDocuments);


        verticalLayout_2->addLayout(verticalLayoutContainerTxExport);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        labelDivider = new QLabel(left);
        labelDivider->setObjectName(QStringLiteral("labelDivider"));
        labelDivider->setMinimumSize(QSize(0, 1));
        labelDivider->setMaximumSize(QSize(16777215, 1));

        verticalLayout_2->addWidget(labelDivider);

        verticalLayoutAddressesExport = new QVBoxLayout();
        verticalLayoutAddressesExport->setSpacing(0);
        verticalLayoutAddressesExport->setObjectName(QStringLiteral("verticalLayoutAddressesExport"));
        filtersContainer1 = new QWidget(left);
        filtersContainer1->setObjectName(QStringLiteral("filtersContainer1"));
        horizontalLayout1 = new QHBoxLayout(filtersContainer1);
        horizontalLayout1->setSpacing(0);
        horizontalLayout1->setObjectName(QStringLiteral("horizontalLayout1"));
        horizontalLayout1->setContentsMargins(0, 0, 1, 0);
        labelSubtitleLocationAddress = new QLabel(filtersContainer1);
        labelSubtitleLocationAddress->setObjectName(QStringLiteral("labelSubtitleLocationAddress"));

        horizontalLayout1->addWidget(labelSubtitleLocationAddress);

        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout1->addItem(horizontalSpacer1);

        comboBoxSortAddressType = new QComboBox(filtersContainer1);
        comboBoxSortAddressType->setObjectName(QStringLiteral("comboBoxSortAddressType"));
        comboBoxSortAddressType->setMinimumSize(QSize(165, 0));

        horizontalLayout1->addWidget(comboBoxSortAddressType);


        verticalLayoutAddressesExport->addWidget(filtersContainer1);

        pushButtonAddressDocuments = new QPushButton(left);
        pushButtonAddressDocuments->setObjectName(QStringLiteral("pushButtonAddressDocuments"));
        pushButtonAddressDocuments->setMinimumSize(QSize(0, 50));
        pushButtonAddressDocuments->setMaximumSize(QSize(16777215, 50));
        pushButtonAddressDocuments->setFocusPolicy(Qt::NoFocus);

        verticalLayoutAddressesExport->addWidget(pushButtonAddressDocuments);


        verticalLayout_2->addLayout(verticalLayoutAddressesExport);


        verticalLayout->addWidget(left);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(SettingsExportCSV);

        QMetaObject::connectSlotsByName(SettingsExportCSV);
    } // setupUi

    void retranslateUi(QWidget *SettingsExportCSV)
    {
        SettingsExportCSV->setWindowTitle(QApplication::translate("SettingsExportCSV", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsExportCSV", "Export Accounting", Q_NULLPTR));
        labelSubtitle1->setText(QApplication::translate("SettingsExportCSV", "Export your wallet's accounting data to a csv file.", Q_NULLPTR));
        labelSubtitleLocation->setText(QApplication::translate("SettingsExportCSV", "Where", Q_NULLPTR));
        pushButtonDocuments->setText(QApplication::translate("SettingsExportCSV", "Select folder...", Q_NULLPTR));
        labelDivider->setText(QString());
        labelSubtitleLocationAddress->setText(QApplication::translate("SettingsExportCSV", "Export Address Book", Q_NULLPTR));
        pushButtonAddressDocuments->setText(QApplication::translate("SettingsExportCSV", "Select folder...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsExportCSV: public Ui_SettingsExportCSV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSEXPORTCSV_H
