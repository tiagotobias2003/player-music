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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MediaInfo
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QWidget *MediaInfo)
    {
        if (MediaInfo->objectName().isEmpty())
            MediaInfo->setObjectName(QStringLiteral("MediaInfo"));
        MediaInfo->resize(498, 266);
        horizontalLayout = new QHBoxLayout(MediaInfo);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(MediaInfo);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


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
