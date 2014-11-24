/********************************************************************************
** Form generated from reading UI file 'mediainfo.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIAINFO_H
#define UI_MEDIAINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MediaInfo
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;

    void setupUi(QWidget *MediaInfo)
    {
        if (MediaInfo->objectName().isEmpty())
            MediaInfo->setObjectName(QStringLiteral("MediaInfo"));
        MediaInfo->resize(498, 456);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MediaInfo->sizePolicy().hasHeightForWidth());
        MediaInfo->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(MediaInfo);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(MediaInfo);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QStringLiteral("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setEnabled(true);
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 478, 436));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(scrollAreaWidgetContents_6);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("QWidget{color:white;}"));

        verticalLayout_2->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents_6);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(MediaInfo);

        QMetaObject::connectSlotsByName(MediaInfo);
    } // setupUi

    void retranslateUi(QWidget *MediaInfo)
    {
        MediaInfo->setWindowTitle(QApplication::translate("MediaInfo", "Form", 0));
        label->setText(QApplication::translate("MediaInfo", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MediaInfo: public Ui_MediaInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIAINFO_H
