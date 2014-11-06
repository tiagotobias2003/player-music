/********************************************************************************
** Form generated from reading UI file 'controls.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLS_H
#define UI_CONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Controls
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QDial *dialVolume;
    QSlider *horizontalSliderPosition;
    QHBoxLayout *horizontalLayout_2;
    QLCDNumber *lcdNumberElapsed;
    QLabel *label;
    QLCDNumber *lcdNumberDuration;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonPlayPause;
    QPushButton *pushButtonPrev;
    QPushButton *pushButtonNext;

    void setupUi(QWidget *Controls)
    {
        if (Controls->objectName().isEmpty())
            Controls->setObjectName(QStringLiteral("Controls"));
        Controls->resize(976, 157);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Controls->sizePolicy().hasHeightForWidth());
        Controls->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(Controls);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        dialVolume = new QDial(Controls);
        dialVolume->setObjectName(QStringLiteral("dialVolume"));
        dialVolume->setEnabled(true);
        sizePolicy.setHeightForWidth(dialVolume->sizePolicy().hasHeightForWidth());
        dialVolume->setSizePolicy(sizePolicy);
        dialVolume->setMinimumSize(QSize(30, 30));
        dialVolume->setWrapping(false);
        dialVolume->setNotchesVisible(true);

        horizontalLayout_4->addWidget(dialVolume);

        horizontalSliderPosition = new QSlider(Controls);
        horizontalSliderPosition->setObjectName(QStringLiteral("horizontalSliderPosition"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalSliderPosition->sizePolicy().hasHeightForWidth());
        horizontalSliderPosition->setSizePolicy(sizePolicy1);
        horizontalSliderPosition->setStyleSheet(QLatin1String("QScrollBar::groove:horizontal {\n"
"     border: 0px solid #999999;\n"
"     height: 1px; \n"
"     background: gray;/*qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);*/\n"
"     margin: 1px 5;\n"
"	border-radius: 1px;\n"
" }\n"
"\n"
" QScrollBar::handle:horizontal {\n"
"     background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"     border: 0px solid #5c5c5c;\n"
"     width: 10px;\n"
"     height: 10px;\n"
"     margin: -5px; \n"
"     border-radius: 5px;\n"
" }"));
        horizontalSliderPosition->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSliderPosition);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lcdNumberElapsed = new QLCDNumber(Controls);
        lcdNumberElapsed->setObjectName(QStringLiteral("lcdNumberElapsed"));
        lcdNumberElapsed->setFrameShape(QFrame::StyledPanel);
        lcdNumberElapsed->setFrameShadow(QFrame::Plain);
        lcdNumberElapsed->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(lcdNumberElapsed);

        label = new QLabel(Controls);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        lcdNumberDuration = new QLCDNumber(Controls);
        lcdNumberDuration->setObjectName(QStringLiteral("lcdNumberDuration"));
        lcdNumberDuration->setFrameShape(QFrame::StyledPanel);
        lcdNumberDuration->setFrameShadow(QFrame::Plain);
        lcdNumberDuration->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(lcdNumberDuration);


        horizontalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        pushButtonPlayPause = new QPushButton(Controls);
        pushButtonPlayPause->setObjectName(QStringLiteral("pushButtonPlayPause"));
        sizePolicy.setHeightForWidth(pushButtonPlayPause->sizePolicy().hasHeightForWidth());
        pushButtonPlayPause->setSizePolicy(sizePolicy);
        pushButtonPlayPause->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButtonPlayPause);

        pushButtonPrev = new QPushButton(Controls);
        pushButtonPrev->setObjectName(QStringLiteral("pushButtonPrev"));
        sizePolicy.setHeightForWidth(pushButtonPrev->sizePolicy().hasHeightForWidth());
        pushButtonPrev->setSizePolicy(sizePolicy);
        pushButtonPrev->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButtonPrev);

        pushButtonNext = new QPushButton(Controls);
        pushButtonNext->setObjectName(QStringLiteral("pushButtonNext"));
        sizePolicy.setHeightForWidth(pushButtonNext->sizePolicy().hasHeightForWidth());
        pushButtonNext->setSizePolicy(sizePolicy);
        pushButtonNext->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButtonNext);


        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 50);
        verticalLayout->setStretch(1, 50);

        retranslateUi(Controls);
        QObject::connect(dialVolume, SIGNAL(valueChanged(int)), Controls, SLOT(onVolumeChanged(int)));
        QObject::connect(pushButtonNext, SIGNAL(clicked()), Controls, SLOT(onNextClicked()));
        QObject::connect(pushButtonPrev, SIGNAL(clicked()), Controls, SLOT(onPrevClicked()));
        QObject::connect(pushButtonPlayPause, SIGNAL(clicked()), Controls, SLOT(onPlayPauseClicked()));

        QMetaObject::connectSlotsByName(Controls);
    } // setupUi

    void retranslateUi(QWidget *Controls)
    {
        Controls->setWindowTitle(QApplication::translate("Controls", "Form", 0));
        label->setText(QApplication::translate("Controls", ":", 0));
        pushButtonPlayPause->setText(QApplication::translate("Controls", "play/pause", 0));
        pushButtonPrev->setText(QApplication::translate("Controls", "prev", 0));
        pushButtonNext->setText(QApplication::translate("Controls", "next", 0));
    } // retranslateUi

};

namespace Ui {
    class Controls: public Ui_Controls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLS_H
