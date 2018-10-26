/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStart;
    QAction *actionClose;
    QAction *actionClear;
    QAction *actionSet;
    QAction *actionWindowsSet;
    QAction *actionNew_Achieve;
    QAction *actionSkin;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *Congratulation;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(882, 527);
        MainWindow->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/huaji.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("/*#MainWindow { \n"
"border-image: url(:/Background/praedestinatio.jpg);\n"
"} \n"
"#MainWindow * { \n"
"border-image:url(); \n"
"} */"));
        MainWindow->setInputMethodHints(Qt::ImhNone);
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QStringLiteral("actionStart"));
        actionStart->setIcon(icon);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/delete_64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon1);
        actionClose->setPriority(QAction::NormalPriority);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/trash_64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon2);
        actionSet = new QAction(MainWindow);
        actionSet->setObjectName(QStringLiteral("actionSet"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/gear_64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSet->setIcon(icon3);
        actionWindowsSet = new QAction(MainWindow);
        actionWindowsSet->setObjectName(QStringLiteral("actionWindowsSet"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/label_64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWindowsSet->setIcon(icon4);
        actionNew_Achieve = new QAction(MainWindow);
        actionNew_Achieve->setObjectName(QStringLiteral("actionNew_Achieve"));
        actionNew_Achieve->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/buy_64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Achieve->setIcon(icon5);
        actionSkin = new QAction(MainWindow);
        actionSkin->setObjectName(QStringLiteral("actionSkin"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/chain-link.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSkin->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMouseTracking(true);
        centralWidget->setStyleSheet(QStringLiteral("/*background-image: url(:/Background/praedestinatio.jpg);*/"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(90, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(138, 227, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(597, 104, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 2, 1, 1);

        Congratulation = new QLabel(widget);
        Congratulation->setObjectName(QStringLiteral("Congratulation"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Congratulation->sizePolicy().hasHeightForWidth());
        Congratulation->setSizePolicy(sizePolicy);
        Congratulation->setMaximumSize(QSize(65536, 65536));
        Congratulation->setBaseSize(QSize(600, 230));
        Congratulation->setAutoFillBackground(false);
        Congratulation->setStyleSheet(QStringLiteral(""));
        Congratulation->setPixmap(QPixmap(QString::fromUtf8(":/icon/Congratulation.png")));
        Congratulation->setScaledContents(true);
        Congratulation->setAlignment(Qt::AlignCenter);
        Congratulation->setWordWrap(false);

        gridLayout_2->addWidget(Congratulation, 2, 2, 1, 1);


        gridLayout->addWidget(widget, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy1);
        mainToolBar->setMouseTracking(false);
        mainToolBar->setTabletTracking(false);
        mainToolBar->setContextMenuPolicy(Qt::DefaultContextMenu);
        mainToolBar->setLayoutDirection(Qt::LeftToRight);
        mainToolBar->setAutoFillBackground(false);
        mainToolBar->setInputMethodHints(Qt::ImhNone);
        mainToolBar->setOrientation(Qt::Horizontal);
        mainToolBar->setIconSize(QSize(24, 24));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->addToolBar(Qt::BottomToolBarArea, mainToolBar);

        mainToolBar->addAction(actionStart);
        mainToolBar->addAction(actionClear);
        mainToolBar->addAction(actionSet);
        mainToolBar->addAction(actionWindowsSet);
        mainToolBar->addAction(actionClose);
        mainToolBar->addAction(actionNew_Achieve);
        mainToolBar->addAction(actionSkin);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionStart->setText(QApplication::translate("MainWindow", "Start", nullptr));
        actionClose->setText(QApplication::translate("MainWindow", "Close", nullptr));
#ifndef QT_NO_TOOLTIP
        actionClose->setToolTip(QApplication::translate("MainWindow", "Close Windows", nullptr));
#endif // QT_NO_TOOLTIP
        actionClear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Emoji Clear</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        actionSet->setText(QApplication::translate("MainWindow", "Set", nullptr));
        actionWindowsSet->setText(QApplication::translate("MainWindow", "WindowsSet", nullptr));
#ifndef QT_NO_TOOLTIP
        actionWindowsSet->setToolTip(QApplication::translate("MainWindow", "Windows Set", nullptr));
#endif // QT_NO_TOOLTIP
        actionNew_Achieve->setText(QApplication::translate("MainWindow", "New_Achieve", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNew_Achieve->setToolTip(QApplication::translate("MainWindow", "Auxiliary tool", nullptr));
#endif // QT_NO_TOOLTIP
        actionSkin->setText(QApplication::translate("MainWindow", "Skin", nullptr));
        Congratulation->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
