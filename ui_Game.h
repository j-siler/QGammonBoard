/********************************************************************************
** Form generated from reading UI file 'Game.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *leftBoard;
    QVBoxLayout *verticalLayout;
    QWidget *blackOuterBoard;
    QHBoxLayout *horizontalLayout_2;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QGraphicsView *graphicsView_4;
    QGraphicsView *graphicsView_5;
    QGraphicsView *graphicsView_6;
    QWidget *redOuterBoard;
    QHBoxLayout *horizontalLayout_3;
    QGraphicsView *graphicsView_9;
    QGraphicsView *graphicsView_11;
    QGraphicsView *graphicsView_7;
    QGraphicsView *graphicsView_12;
    QGraphicsView *graphicsView_10;
    QGraphicsView *graphicsView_8;
    QWidget *bar;
    QVBoxLayout *verticalLayout_3;
    QWidget *redBar;
    QWidget *inititalCube;
    QWidget *blackBar;
    QWidget *rightBoard;
    QVBoxLayout *verticalLayout_2;
    QWidget *blackInnerBoard;
    QHBoxLayout *horizontalLayout_4;
    QGraphicsView *graphicsView_13;
    QGraphicsView *graphicsView_14;
    QGraphicsView *graphicsView_15;
    QGraphicsView *graphicsView_16;
    QGraphicsView *graphicsView_17;
    QGraphicsView *graphicsView_18;
    QWidget *redInnerBoard;
    QHBoxLayout *horizontalLayout_5;
    QGraphicsView *graphicsView_19;
    QGraphicsView *graphicsView_20;
    QGraphicsView *graphicsView_21;
    QGraphicsView *graphicsView_22;
    QGraphicsView *graphicsView_23;
    QGraphicsView *graphicsView_24;
    QWidget *off;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QWidget *widget_2;
    QWidget *widget_3;
    QWidget *widget_4;
    QMenuBar *menubar;
    QMenu *menuBoard;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName(QStringLiteral("Game"));
        Game->resize(1057, 551);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(13);
        sizePolicy.setHeightForWidth(Game->sizePolicy().hasHeightForWidth());
        Game->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Game);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        leftBoard = new QWidget(centralwidget);
        leftBoard->setObjectName(QStringLiteral("leftBoard"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(6);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leftBoard->sizePolicy().hasHeightForWidth());
        leftBoard->setSizePolicy(sizePolicy1);
        leftBoard->setMinimumSize(QSize(360, 0));
        verticalLayout = new QVBoxLayout(leftBoard);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        blackOuterBoard = new QWidget(leftBoard);
        blackOuterBoard->setObjectName(QStringLiteral("blackOuterBoard"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(6);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(blackOuterBoard->sizePolicy().hasHeightForWidth());
        blackOuterBoard->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(blackOuterBoard);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        graphicsView = new QGraphicsView(blackOuterBoard);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy3);
        graphicsView->setMinimumSize(QSize(60, 0));
        graphicsView->setInteractive(false);

        horizontalLayout_2->addWidget(graphicsView);

        graphicsView_2 = new QGraphicsView(blackOuterBoard);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        sizePolicy3.setHeightForWidth(graphicsView_2->sizePolicy().hasHeightForWidth());
        graphicsView_2->setSizePolicy(sizePolicy3);
        graphicsView_2->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(graphicsView_2);

        graphicsView_3 = new QGraphicsView(blackOuterBoard);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        sizePolicy3.setHeightForWidth(graphicsView_3->sizePolicy().hasHeightForWidth());
        graphicsView_3->setSizePolicy(sizePolicy3);
        graphicsView_3->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(graphicsView_3);

        graphicsView_4 = new QGraphicsView(blackOuterBoard);
        graphicsView_4->setObjectName(QStringLiteral("graphicsView_4"));
        sizePolicy3.setHeightForWidth(graphicsView_4->sizePolicy().hasHeightForWidth());
        graphicsView_4->setSizePolicy(sizePolicy3);
        graphicsView_4->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(graphicsView_4);

        graphicsView_5 = new QGraphicsView(blackOuterBoard);
        graphicsView_5->setObjectName(QStringLiteral("graphicsView_5"));
        sizePolicy3.setHeightForWidth(graphicsView_5->sizePolicy().hasHeightForWidth());
        graphicsView_5->setSizePolicy(sizePolicy3);
        graphicsView_5->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(graphicsView_5);

        graphicsView_6 = new QGraphicsView(blackOuterBoard);
        graphicsView_6->setObjectName(QStringLiteral("graphicsView_6"));
        sizePolicy3.setHeightForWidth(graphicsView_6->sizePolicy().hasHeightForWidth());
        graphicsView_6->setSizePolicy(sizePolicy3);
        graphicsView_6->setMinimumSize(QSize(60, 0));

        horizontalLayout_2->addWidget(graphicsView_6);


        verticalLayout->addWidget(blackOuterBoard);

        redOuterBoard = new QWidget(leftBoard);
        redOuterBoard->setObjectName(QStringLiteral("redOuterBoard"));
        sizePolicy2.setHeightForWidth(redOuterBoard->sizePolicy().hasHeightForWidth());
        redOuterBoard->setSizePolicy(sizePolicy2);
        horizontalLayout_3 = new QHBoxLayout(redOuterBoard);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        graphicsView_9 = new QGraphicsView(redOuterBoard);
        graphicsView_9->setObjectName(QStringLiteral("graphicsView_9"));
        sizePolicy3.setHeightForWidth(graphicsView_9->sizePolicy().hasHeightForWidth());
        graphicsView_9->setSizePolicy(sizePolicy3);
        graphicsView_9->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(graphicsView_9);

        graphicsView_11 = new QGraphicsView(redOuterBoard);
        graphicsView_11->setObjectName(QStringLiteral("graphicsView_11"));
        sizePolicy3.setHeightForWidth(graphicsView_11->sizePolicy().hasHeightForWidth());
        graphicsView_11->setSizePolicy(sizePolicy3);
        graphicsView_11->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(graphicsView_11);

        graphicsView_7 = new QGraphicsView(redOuterBoard);
        graphicsView_7->setObjectName(QStringLiteral("graphicsView_7"));
        sizePolicy3.setHeightForWidth(graphicsView_7->sizePolicy().hasHeightForWidth());
        graphicsView_7->setSizePolicy(sizePolicy3);
        graphicsView_7->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(graphicsView_7);

        graphicsView_12 = new QGraphicsView(redOuterBoard);
        graphicsView_12->setObjectName(QStringLiteral("graphicsView_12"));
        sizePolicy3.setHeightForWidth(graphicsView_12->sizePolicy().hasHeightForWidth());
        graphicsView_12->setSizePolicy(sizePolicy3);
        graphicsView_12->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(graphicsView_12);

        graphicsView_10 = new QGraphicsView(redOuterBoard);
        graphicsView_10->setObjectName(QStringLiteral("graphicsView_10"));
        sizePolicy3.setHeightForWidth(graphicsView_10->sizePolicy().hasHeightForWidth());
        graphicsView_10->setSizePolicy(sizePolicy3);
        graphicsView_10->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(graphicsView_10);

        graphicsView_8 = new QGraphicsView(redOuterBoard);
        graphicsView_8->setObjectName(QStringLiteral("graphicsView_8"));
        sizePolicy3.setHeightForWidth(graphicsView_8->sizePolicy().hasHeightForWidth());
        graphicsView_8->setSizePolicy(sizePolicy3);
        graphicsView_8->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(graphicsView_8);


        verticalLayout->addWidget(redOuterBoard);


        horizontalLayout->addWidget(leftBoard);

        bar = new QWidget(centralwidget);
        bar->setObjectName(QStringLiteral("bar"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(bar->sizePolicy().hasHeightForWidth());
        bar->setSizePolicy(sizePolicy4);
        bar->setMinimumSize(QSize(60, 0));
        verticalLayout_3 = new QVBoxLayout(bar);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        redBar = new QWidget(bar);
        redBar->setObjectName(QStringLiteral("redBar"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(10);
        sizePolicy5.setHeightForWidth(redBar->sizePolicy().hasHeightForWidth());
        redBar->setSizePolicy(sizePolicy5);
        redBar->setMinimumSize(QSize(60, 0));

        verticalLayout_3->addWidget(redBar);

        inititalCube = new QWidget(bar);
        inititalCube->setObjectName(QStringLiteral("inititalCube"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(2);
        sizePolicy6.setHeightForWidth(inititalCube->sizePolicy().hasHeightForWidth());
        inititalCube->setSizePolicy(sizePolicy6);

        verticalLayout_3->addWidget(inititalCube);

        blackBar = new QWidget(bar);
        blackBar->setObjectName(QStringLiteral("blackBar"));
        sizePolicy5.setHeightForWidth(blackBar->sizePolicy().hasHeightForWidth());
        blackBar->setSizePolicy(sizePolicy5);
        blackBar->setMinimumSize(QSize(60, 0));

        verticalLayout_3->addWidget(blackBar);


        horizontalLayout->addWidget(bar);

        rightBoard = new QWidget(centralwidget);
        rightBoard->setObjectName(QStringLiteral("rightBoard"));
        sizePolicy1.setHeightForWidth(rightBoard->sizePolicy().hasHeightForWidth());
        rightBoard->setSizePolicy(sizePolicy1);
        rightBoard->setMinimumSize(QSize(360, 0));
        verticalLayout_2 = new QVBoxLayout(rightBoard);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        blackInnerBoard = new QWidget(rightBoard);
        blackInnerBoard->setObjectName(QStringLiteral("blackInnerBoard"));
        sizePolicy2.setHeightForWidth(blackInnerBoard->sizePolicy().hasHeightForWidth());
        blackInnerBoard->setSizePolicy(sizePolicy2);
        horizontalLayout_4 = new QHBoxLayout(blackInnerBoard);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        graphicsView_13 = new QGraphicsView(blackInnerBoard);
        graphicsView_13->setObjectName(QStringLiteral("graphicsView_13"));
        sizePolicy3.setHeightForWidth(graphicsView_13->sizePolicy().hasHeightForWidth());
        graphicsView_13->setSizePolicy(sizePolicy3);
        graphicsView_13->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(graphicsView_13);

        graphicsView_14 = new QGraphicsView(blackInnerBoard);
        graphicsView_14->setObjectName(QStringLiteral("graphicsView_14"));
        sizePolicy3.setHeightForWidth(graphicsView_14->sizePolicy().hasHeightForWidth());
        graphicsView_14->setSizePolicy(sizePolicy3);
        graphicsView_14->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(graphicsView_14);

        graphicsView_15 = new QGraphicsView(blackInnerBoard);
        graphicsView_15->setObjectName(QStringLiteral("graphicsView_15"));
        sizePolicy3.setHeightForWidth(graphicsView_15->sizePolicy().hasHeightForWidth());
        graphicsView_15->setSizePolicy(sizePolicy3);
        graphicsView_15->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(graphicsView_15);

        graphicsView_16 = new QGraphicsView(blackInnerBoard);
        graphicsView_16->setObjectName(QStringLiteral("graphicsView_16"));
        sizePolicy3.setHeightForWidth(graphicsView_16->sizePolicy().hasHeightForWidth());
        graphicsView_16->setSizePolicy(sizePolicy3);
        graphicsView_16->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(graphicsView_16);

        graphicsView_17 = new QGraphicsView(blackInnerBoard);
        graphicsView_17->setObjectName(QStringLiteral("graphicsView_17"));
        sizePolicy3.setHeightForWidth(graphicsView_17->sizePolicy().hasHeightForWidth());
        graphicsView_17->setSizePolicy(sizePolicy3);
        graphicsView_17->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(graphicsView_17);

        graphicsView_18 = new QGraphicsView(blackInnerBoard);
        graphicsView_18->setObjectName(QStringLiteral("graphicsView_18"));
        sizePolicy3.setHeightForWidth(graphicsView_18->sizePolicy().hasHeightForWidth());
        graphicsView_18->setSizePolicy(sizePolicy3);
        graphicsView_18->setMinimumSize(QSize(60, 0));

        horizontalLayout_4->addWidget(graphicsView_18);


        verticalLayout_2->addWidget(blackInnerBoard);

        redInnerBoard = new QWidget(rightBoard);
        redInnerBoard->setObjectName(QStringLiteral("redInnerBoard"));
        sizePolicy2.setHeightForWidth(redInnerBoard->sizePolicy().hasHeightForWidth());
        redInnerBoard->setSizePolicy(sizePolicy2);
        horizontalLayout_5 = new QHBoxLayout(redInnerBoard);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        graphicsView_19 = new QGraphicsView(redInnerBoard);
        graphicsView_19->setObjectName(QStringLiteral("graphicsView_19"));
        sizePolicy3.setHeightForWidth(graphicsView_19->sizePolicy().hasHeightForWidth());
        graphicsView_19->setSizePolicy(sizePolicy3);
        graphicsView_19->setMinimumSize(QSize(60, 0));

        horizontalLayout_5->addWidget(graphicsView_19);

        graphicsView_20 = new QGraphicsView(redInnerBoard);
        graphicsView_20->setObjectName(QStringLiteral("graphicsView_20"));
        sizePolicy3.setHeightForWidth(graphicsView_20->sizePolicy().hasHeightForWidth());
        graphicsView_20->setSizePolicy(sizePolicy3);
        graphicsView_20->setMinimumSize(QSize(60, 0));

        horizontalLayout_5->addWidget(graphicsView_20);

        graphicsView_21 = new QGraphicsView(redInnerBoard);
        graphicsView_21->setObjectName(QStringLiteral("graphicsView_21"));
        sizePolicy3.setHeightForWidth(graphicsView_21->sizePolicy().hasHeightForWidth());
        graphicsView_21->setSizePolicy(sizePolicy3);
        graphicsView_21->setMinimumSize(QSize(60, 0));

        horizontalLayout_5->addWidget(graphicsView_21);

        graphicsView_22 = new QGraphicsView(redInnerBoard);
        graphicsView_22->setObjectName(QStringLiteral("graphicsView_22"));
        sizePolicy3.setHeightForWidth(graphicsView_22->sizePolicy().hasHeightForWidth());
        graphicsView_22->setSizePolicy(sizePolicy3);
        graphicsView_22->setMinimumSize(QSize(60, 0));

        horizontalLayout_5->addWidget(graphicsView_22);

        graphicsView_23 = new QGraphicsView(redInnerBoard);
        graphicsView_23->setObjectName(QStringLiteral("graphicsView_23"));
        sizePolicy3.setHeightForWidth(graphicsView_23->sizePolicy().hasHeightForWidth());
        graphicsView_23->setSizePolicy(sizePolicy3);
        graphicsView_23->setMinimumSize(QSize(60, 0));

        horizontalLayout_5->addWidget(graphicsView_23);

        graphicsView_24 = new QGraphicsView(redInnerBoard);
        graphicsView_24->setObjectName(QStringLiteral("graphicsView_24"));
        sizePolicy3.setHeightForWidth(graphicsView_24->sizePolicy().hasHeightForWidth());
        graphicsView_24->setSizePolicy(sizePolicy3);
        graphicsView_24->setMinimumSize(QSize(60, 0));

        horizontalLayout_5->addWidget(graphicsView_24);


        verticalLayout_2->addWidget(redInnerBoard);


        horizontalLayout->addWidget(rightBoard);

        off = new QWidget(centralwidget);
        off->setObjectName(QStringLiteral("off"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(1);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(off->sizePolicy().hasHeightForWidth());
        off->setSizePolicy(sizePolicy7);
        verticalLayout_4 = new QVBoxLayout(off);
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(off);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy6.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy6);

        verticalLayout_4->addWidget(widget);

        widget_2 = new QWidget(off);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(9);
        sizePolicy8.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy8);

        verticalLayout_4->addWidget(widget_2);

        widget_3 = new QWidget(off);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy8.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy8);

        verticalLayout_4->addWidget(widget_3);

        widget_4 = new QWidget(off);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy6.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy6);

        verticalLayout_4->addWidget(widget_4);


        horizontalLayout->addWidget(off);

        Game->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Game);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1057, 25));
        menuBoard = new QMenu(menubar);
        menuBoard->setObjectName(QStringLiteral("menuBoard"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        Game->setMenuBar(menubar);
        statusbar = new QStatusBar(Game);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Game->setStatusBar(statusbar);

        menubar->addAction(menuBoard->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menuBoard->addSeparator();
        menuOptions->addSeparator();

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QMainWindow *Game)
    {
        Game->setWindowTitle(QApplication::translate("Game", "Game", Q_NULLPTR));
        menuBoard->setTitle(QApplication::translate("Game", "Board", Q_NULLPTR));
        menuOptions->setTitle(QApplication::translate("Game", "Options", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
