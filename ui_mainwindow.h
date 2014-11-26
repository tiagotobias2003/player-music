/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "controls.h"
#include "mediainfo.h"
#include "spectrograph.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    Controls *control;
    QListView *listViewPlaylist;
    QVBoxLayout *verticalLayout_4;
    Spectrograph *visualizer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser;
    MediaInfo *widgetInfo;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(795, 512);
        MainWindow->setStyleSheet(QStringLiteral("QWidget{background-color:black;}"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        control = new Controls(centralWidget);
        control->setObjectName(QStringLiteral("control"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(control->sizePolicy().hasHeightForWidth());
        control->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(control);

        listViewPlaylist = new QListView(centralWidget);
        listViewPlaylist->setObjectName(QStringLiteral("listViewPlaylist"));
        listViewPlaylist->setStyleSheet(QStringLiteral("QWidget{color:rgb(206, 206, 206);}"));
        listViewPlaylist->setUniformItemSizes(false);

        verticalLayout_3->addWidget(listViewPlaylist);

        verticalLayout_3->setStretch(0, 10);
        verticalLayout_3->setStretch(1, 90);

        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(8);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        visualizer = new Spectrograph(centralWidget);
        visualizer->setObjectName(QStringLiteral("visualizer"));

        verticalLayout_4->addWidget(visualizer);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);


        verticalLayout_4->addWidget(widget);

        widgetInfo = new MediaInfo(centralWidget);
        widgetInfo->setObjectName(QStringLiteral("widgetInfo"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetInfo->sizePolicy().hasHeightForWidth());
        widgetInfo->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(widgetInfo);

        verticalLayout_4->setStretch(0, 30);
        verticalLayout_4->setStretch(1, 30);
        verticalLayout_4->setStretch(2, 40);

        horizontalLayout->addLayout(verticalLayout_4);

        horizontalLayout->setStretch(0, 30);
        horizontalLayout->setStretch(1, 70);
        MainWindow->setCentralWidget(centralWidget);
        visualizer->raise();
        widgetInfo->raise();
        listViewPlaylist->raise();
        control->raise();
        widget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 795, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionLoad);

        retranslateUi(MainWindow);
        QObject::connect(actionLoad, SIGNAL(triggered()), MainWindow, SLOT(loadMedia()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionLoad->setText(QApplication::translate("MainWindow", "Load", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
