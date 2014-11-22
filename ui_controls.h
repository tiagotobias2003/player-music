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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Controls
{
public:
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLCDNumber *lcdNumberElapsed;
    QFrame *line;
    QLCDNumber *lcdNumberDuration;
    QSlider *dialVolume;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonPrev;
    QPushButton *pushButtonPlayPause;
    QPushButton *pushButtonNext;
    QSlider *horizontalSliderPosition;

    void setupUi(QWidget *Controls)
    {
        if (Controls->objectName().isEmpty())
            Controls->setObjectName(QStringLiteral("Controls"));
        Controls->resize(216, 186);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Controls->sizePolicy().hasHeightForWidth());
        Controls->setSizePolicy(sizePolicy);
        Controls->setStyleSheet(QStringLiteral("QWidget{background-color:black;}"));
        horizontalLayout_5 = new QHBoxLayout(Controls);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lcdNumberElapsed = new QLCDNumber(Controls);
        lcdNumberElapsed->setObjectName(QStringLiteral("lcdNumberElapsed"));
        lcdNumberElapsed->setFrameShape(QFrame::StyledPanel);
        lcdNumberElapsed->setFrameShadow(QFrame::Plain);
        lcdNumberElapsed->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(lcdNumberElapsed);

        line = new QFrame(Controls);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        lcdNumberDuration = new QLCDNumber(Controls);
        lcdNumberDuration->setObjectName(QStringLiteral("lcdNumberDuration"));
        lcdNumberDuration->setFrameShape(QFrame::StyledPanel);
        lcdNumberDuration->setFrameShadow(QFrame::Plain);
        lcdNumberDuration->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_2->addWidget(lcdNumberDuration);

        dialVolume = new QSlider(Controls);
        dialVolume->setObjectName(QStringLiteral("dialVolume"));
        dialVolume->setSliderPosition(99);
        dialVolume->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(dialVolume);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        pushButtonPrev = new QPushButton(Controls);
        pushButtonPrev->setObjectName(QStringLiteral("pushButtonPrev"));
        sizePolicy.setHeightForWidth(pushButtonPrev->sizePolicy().hasHeightForWidth());
        pushButtonPrev->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/prev.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPrev->setIcon(icon);
        pushButtonPrev->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButtonPrev);

        pushButtonPlayPause = new QPushButton(Controls);
        pushButtonPlayPause->setObjectName(QStringLiteral("pushButtonPlayPause"));
        sizePolicy.setHeightForWidth(pushButtonPlayPause->sizePolicy().hasHeightForWidth());
        pushButtonPlayPause->setSizePolicy(sizePolicy);
        pushButtonPlayPause->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPlayPause->setIcon(icon1);
        pushButtonPlayPause->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButtonPlayPause);

        pushButtonNext = new QPushButton(Controls);
        pushButtonNext->setObjectName(QStringLiteral("pushButtonNext"));
        sizePolicy.setHeightForWidth(pushButtonNext->sizePolicy().hasHeightForWidth());
        pushButtonNext->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNext->setIcon(icon2);
        pushButtonNext->setIconSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButtonNext);


        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_3);

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

        verticalLayout->addWidget(horizontalSliderPosition);


        horizontalLayout_5->addLayout(verticalLayout);


        retranslateUi(Controls);
        QObject::connect(pushButtonNext, SIGNAL(clicked()), Controls, SLOT(onNextClicked()));
        QObject::connect(pushButtonPrev, SIGNAL(clicked()), Controls, SLOT(onPrevClicked()));
        QObject::connect(pushButtonPlayPause, SIGNAL(clicked()), Controls, SLOT(onPlayPauseClicked()));
        QObject::connect(dialVolume, SIGNAL(valueChanged(int)), Controls, SLOT(onVolumeChanged(int)));

        QMetaObject::connectSlotsByName(Controls);
    } // setupUi

    void retranslateUi(QWidget *Controls)
    {
        Controls->setWindowTitle(QApplication::translate("Controls", "Form", 0));
        pushButtonPrev->setText(QString());
        pushButtonPlayPause->setText(QString());
        pushButtonNext->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Controls: public Ui_Controls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLS_H
