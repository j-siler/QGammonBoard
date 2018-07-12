/********************************************************************************
** Form generated from reading UI file 'Game.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <Point.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    Point *pt13;
    Point *pt14;
    Point *pt15;
    Point *pt16;
    Point *pt17;
    Point *pt18;
    QWidget *leftBoardDivider;
    QWidget *redOuterBoard;
    QHBoxLayout *horizontalLayout_3;
    Point *pt12;
    Point *pt11;
    Point *pt10;
    Point *pt09;
    Point *pt08;
    Point *pt07;
    QWidget *bar;
    QVBoxLayout *verticalLayout_3;
    QWidget *redBar;
    QWidget *inititalCube;
    QPushButton *pushButton;
    QWidget *blackBar;
    QWidget *rightBoard;
    QVBoxLayout *verticalLayout_2;
    QWidget *blackInnerBoard;
    QHBoxLayout *horizontalLayout_4;
    Point *pt19;
    Point *pt20;
    Point *pt21;
    Point *pt22;
    Point *pt23;
    Point *pt24;
    QWidget *rightBoardDivider;
    QWidget *redInnerBoard;
    QHBoxLayout *horizontalLayout_5;
    Point *pt06;
    Point *pt05;
    Point *pt04;
    Point *pt03;
    Point *pt02;
    Point *pt01;
    QWidget *off;
    QVBoxLayout *verticalLayout_4;
    QWidget *blackCube;
    QWidget *redOff;
    QWidget *blackOff;
    QWidget *redCube;
    QMenuBar *menubar;
    QMenu *menuBoard;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName(QStringLiteral("Game"));
        Game->resize(1057, 792);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(13);
        sizePolicy.setHeightForWidth(Game->sizePolicy().hasHeightForWidth());
        Game->setSizePolicy(sizePolicy);
        Game->setMouseTracking(true);
        centralwidget = new QWidget(Game);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        leftBoard = new QWidget(centralwidget);
        leftBoard->setObjectName(QStringLiteral("leftBoard"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(6);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leftBoard->sizePolicy().hasHeightForWidth());
        leftBoard->setSizePolicy(sizePolicy1);
        leftBoard->setMinimumSize(QSize(360, 0));
        verticalLayout = new QVBoxLayout(leftBoard);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        blackOuterBoard = new QWidget(leftBoard);
        blackOuterBoard->setObjectName(QStringLiteral("blackOuterBoard"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(6);
        sizePolicy2.setVerticalStretch(8);
        sizePolicy2.setHeightForWidth(blackOuterBoard->sizePolicy().hasHeightForWidth());
        blackOuterBoard->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(blackOuterBoard);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        pt13 = new Point(blackOuterBoard);
        pt13->setObjectName(QStringLiteral("pt13"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(pt13->sizePolicy().hasHeightForWidth());
        pt13->setSizePolicy(sizePolicy3);
        pt13->setMinimumSize(QSize(60, 0));
        pt13->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointBT.png")));
        pt13->setScaledContents(true);

        horizontalLayout_2->addWidget(pt13);

        pt14 = new Point(blackOuterBoard);
        pt14->setObjectName(QStringLiteral("pt14"));
        sizePolicy3.setHeightForWidth(pt14->sizePolicy().hasHeightForWidth());
        pt14->setSizePolicy(sizePolicy3);
        pt14->setMinimumSize(QSize(60, 0));
        pt14->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointWT.png")));
        pt14->setScaledContents(true);

        horizontalLayout_2->addWidget(pt14);

        pt15 = new Point(blackOuterBoard);
        pt15->setObjectName(QStringLiteral("pt15"));
        sizePolicy3.setHeightForWidth(pt15->sizePolicy().hasHeightForWidth());
        pt15->setSizePolicy(sizePolicy3);
        pt15->setMinimumSize(QSize(60, 0));
        pt15->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointBT.png")));
        pt15->setScaledContents(true);

        horizontalLayout_2->addWidget(pt15);

        pt16 = new Point(blackOuterBoard);
        pt16->setObjectName(QStringLiteral("pt16"));
        sizePolicy3.setHeightForWidth(pt16->sizePolicy().hasHeightForWidth());
        pt16->setSizePolicy(sizePolicy3);
        pt16->setMinimumSize(QSize(60, 0));
        pt16->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointWT.png")));
        pt16->setScaledContents(true);

        horizontalLayout_2->addWidget(pt16);

        pt17 = new Point(blackOuterBoard);
        pt17->setObjectName(QStringLiteral("pt17"));
        sizePolicy3.setHeightForWidth(pt17->sizePolicy().hasHeightForWidth());
        pt17->setSizePolicy(sizePolicy3);
        pt17->setMinimumSize(QSize(60, 0));
        pt17->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointBT.png")));
        pt17->setScaledContents(true);

        horizontalLayout_2->addWidget(pt17);

        pt18 = new Point(blackOuterBoard);
        pt18->setObjectName(QStringLiteral("pt18"));
        sizePolicy3.setHeightForWidth(pt18->sizePolicy().hasHeightForWidth());
        pt18->setSizePolicy(sizePolicy3);
        pt18->setMinimumSize(QSize(60, 0));
        pt18->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointWT.png")));
        pt18->setScaledContents(true);

        horizontalLayout_2->addWidget(pt18);


        verticalLayout->addWidget(blackOuterBoard);

        leftBoardDivider = new QWidget(leftBoard);
        leftBoardDivider->setObjectName(QStringLiteral("leftBoardDivider"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(6);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(leftBoardDivider->sizePolicy().hasHeightForWidth());
        leftBoardDivider->setSizePolicy(sizePolicy4);

        verticalLayout->addWidget(leftBoardDivider);

        redOuterBoard = new QWidget(leftBoard);
        redOuterBoard->setObjectName(QStringLiteral("redOuterBoard"));
        sizePolicy2.setHeightForWidth(redOuterBoard->sizePolicy().hasHeightForWidth());
        redOuterBoard->setSizePolicy(sizePolicy2);
        horizontalLayout_3 = new QHBoxLayout(redOuterBoard);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, 2, 2, 2);
        pt12 = new Point(redOuterBoard);
        pt12->setObjectName(QStringLiteral("pt12"));
        sizePolicy3.setHeightForWidth(pt12->sizePolicy().hasHeightForWidth());
        pt12->setSizePolicy(sizePolicy3);
        pt12->setMinimumSize(QSize(60, 0));
        pt12->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointWB.png")));
        pt12->setScaledContents(true);

        horizontalLayout_3->addWidget(pt12);

        pt11 = new Point(redOuterBoard);
        pt11->setObjectName(QStringLiteral("pt11"));
        sizePolicy3.setHeightForWidth(pt11->sizePolicy().hasHeightForWidth());
        pt11->setSizePolicy(sizePolicy3);
        pt11->setMinimumSize(QSize(60, 0));
        pt11->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointBB.png")));
        pt11->setScaledContents(true);

        horizontalLayout_3->addWidget(pt11);

        pt10 = new Point(redOuterBoard);
        pt10->setObjectName(QStringLiteral("pt10"));
        sizePolicy3.setHeightForWidth(pt10->sizePolicy().hasHeightForWidth());
        pt10->setSizePolicy(sizePolicy3);
        pt10->setMinimumSize(QSize(60, 0));
        pt10->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointWB.png")));
        pt10->setScaledContents(true);

        horizontalLayout_3->addWidget(pt10);

        pt09 = new Point(redOuterBoard);
        pt09->setObjectName(QStringLiteral("pt09"));
        sizePolicy3.setHeightForWidth(pt09->sizePolicy().hasHeightForWidth());
        pt09->setSizePolicy(sizePolicy3);
        pt09->setMinimumSize(QSize(60, 0));
        pt09->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointBB.png")));
        pt09->setScaledContents(true);

        horizontalLayout_3->addWidget(pt09);

        pt08 = new Point(redOuterBoard);
        pt08->setObjectName(QStringLiteral("pt08"));
        sizePolicy3.setHeightForWidth(pt08->sizePolicy().hasHeightForWidth());
        pt08->setSizePolicy(sizePolicy3);
        pt08->setMinimumSize(QSize(60, 0));
        pt08->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointWB.png")));
        pt08->setScaledContents(true);

        horizontalLayout_3->addWidget(pt08);

        pt07 = new Point(redOuterBoard);
        pt07->setObjectName(QStringLiteral("pt07"));
        sizePolicy3.setHeightForWidth(pt07->sizePolicy().hasHeightForWidth());
        pt07->setSizePolicy(sizePolicy3);
        pt07->setMinimumSize(QSize(60, 0));
        pt07->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointBB.png")));
        pt07->setScaledContents(true);

        horizontalLayout_3->addWidget(pt07);


        verticalLayout->addWidget(redOuterBoard);

        blackOuterBoard->raise();
        redOuterBoard->raise();
        leftBoardDivider->raise();

        horizontalLayout->addWidget(leftBoard);

        bar = new QWidget(centralwidget);
        bar->setObjectName(QStringLiteral("bar"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(bar->sizePolicy().hasHeightForWidth());
        bar->setSizePolicy(sizePolicy5);
        bar->setMinimumSize(QSize(60, 0));
        verticalLayout_3 = new QVBoxLayout(bar);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        redBar = new QWidget(bar);
        redBar->setObjectName(QStringLiteral("redBar"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(10);
        sizePolicy6.setHeightForWidth(redBar->sizePolicy().hasHeightForWidth());
        redBar->setSizePolicy(sizePolicy6);
        redBar->setMinimumSize(QSize(60, 0));

        verticalLayout_3->addWidget(redBar);

        inititalCube = new QWidget(bar);
        inititalCube->setObjectName(QStringLiteral("inititalCube"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(2);
        sizePolicy7.setHeightForWidth(inititalCube->sizePolicy().hasHeightForWidth());
        inititalCube->setSizePolicy(sizePolicy7);
        pushButton = new QPushButton(inititalCube);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 20, 51, 28));
        pushButton->setCheckable(false);
        pushButton->setAutoDefault(false);

        verticalLayout_3->addWidget(inititalCube);

        blackBar = new QWidget(bar);
        blackBar->setObjectName(QStringLiteral("blackBar"));
        sizePolicy6.setHeightForWidth(blackBar->sizePolicy().hasHeightForWidth());
        blackBar->setSizePolicy(sizePolicy6);
        blackBar->setMinimumSize(QSize(60, 0));

        verticalLayout_3->addWidget(blackBar);


        horizontalLayout->addWidget(bar);

        rightBoard = new QWidget(centralwidget);
        rightBoard->setObjectName(QStringLiteral("rightBoard"));
        sizePolicy1.setHeightForWidth(rightBoard->sizePolicy().hasHeightForWidth());
        rightBoard->setSizePolicy(sizePolicy1);
        rightBoard->setMinimumSize(QSize(360, 0));
        verticalLayout_2 = new QVBoxLayout(rightBoard);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        blackInnerBoard = new QWidget(rightBoard);
        blackInnerBoard->setObjectName(QStringLiteral("blackInnerBoard"));
        sizePolicy2.setHeightForWidth(blackInnerBoard->sizePolicy().hasHeightForWidth());
        blackInnerBoard->setSizePolicy(sizePolicy2);
        horizontalLayout_4 = new QHBoxLayout(blackInnerBoard);
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(2, 2, 2, 2);
        pt19 = new Point(blackInnerBoard);
        pt19->setObjectName(QStringLiteral("pt19"));
        sizePolicy3.setHeightForWidth(pt19->sizePolicy().hasHeightForWidth());
        pt19->setSizePolicy(sizePolicy3);
        pt19->setMinimumSize(QSize(60, 0));
        pt19->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointBT.png")));
        pt19->setScaledContents(true);

        horizontalLayout_4->addWidget(pt19);

        pt20 = new Point(blackInnerBoard);
        pt20->setObjectName(QStringLiteral("pt20"));
        sizePolicy3.setHeightForWidth(pt20->sizePolicy().hasHeightForWidth());
        pt20->setSizePolicy(sizePolicy3);
        pt20->setMinimumSize(QSize(60, 0));
        pt20->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointWT.png")));
        pt20->setScaledContents(true);

        horizontalLayout_4->addWidget(pt20);

        pt21 = new Point(blackInnerBoard);
        pt21->setObjectName(QStringLiteral("pt21"));
        sizePolicy3.setHeightForWidth(pt21->sizePolicy().hasHeightForWidth());
        pt21->setSizePolicy(sizePolicy3);
        pt21->setMinimumSize(QSize(60, 0));
        pt21->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointBT.png")));
        pt21->setScaledContents(true);

        horizontalLayout_4->addWidget(pt21);

        pt22 = new Point(blackInnerBoard);
        pt22->setObjectName(QStringLiteral("pt22"));
        sizePolicy3.setHeightForWidth(pt22->sizePolicy().hasHeightForWidth());
        pt22->setSizePolicy(sizePolicy3);
        pt22->setMinimumSize(QSize(60, 0));
        pt22->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointWT.png")));
        pt22->setScaledContents(true);

        horizontalLayout_4->addWidget(pt22);

        pt23 = new Point(blackInnerBoard);
        pt23->setObjectName(QStringLiteral("pt23"));
        sizePolicy3.setHeightForWidth(pt23->sizePolicy().hasHeightForWidth());
        pt23->setSizePolicy(sizePolicy3);
        pt23->setMinimumSize(QSize(60, 0));
        pt23->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointBT.png")));
        pt23->setScaledContents(true);

        horizontalLayout_4->addWidget(pt23);

        pt24 = new Point(blackInnerBoard);
        pt24->setObjectName(QStringLiteral("pt24"));
        sizePolicy3.setHeightForWidth(pt24->sizePolicy().hasHeightForWidth());
        pt24->setSizePolicy(sizePolicy3);
        pt24->setMinimumSize(QSize(60, 0));
        pt24->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointWT.png")));
        pt24->setScaledContents(true);

        horizontalLayout_4->addWidget(pt24);


        verticalLayout_2->addWidget(blackInnerBoard);

        rightBoardDivider = new QWidget(rightBoard);
        rightBoardDivider->setObjectName(QStringLiteral("rightBoardDivider"));
        sizePolicy4.setHeightForWidth(rightBoardDivider->sizePolicy().hasHeightForWidth());
        rightBoardDivider->setSizePolicy(sizePolicy4);

        verticalLayout_2->addWidget(rightBoardDivider);

        redInnerBoard = new QWidget(rightBoard);
        redInnerBoard->setObjectName(QStringLiteral("redInnerBoard"));
        sizePolicy2.setHeightForWidth(redInnerBoard->sizePolicy().hasHeightForWidth());
        redInnerBoard->setSizePolicy(sizePolicy2);
        horizontalLayout_5 = new QHBoxLayout(redInnerBoard);
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        pt06 = new Point(redInnerBoard);
        pt06->setObjectName(QStringLiteral("pt06"));
        sizePolicy3.setHeightForWidth(pt06->sizePolicy().hasHeightForWidth());
        pt06->setSizePolicy(sizePolicy3);
        pt06->setMinimumSize(QSize(60, 0));
        pt06->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointWB.png")));
        pt06->setScaledContents(true);

        horizontalLayout_5->addWidget(pt06);

        pt05 = new Point(redInnerBoard);
        pt05->setObjectName(QStringLiteral("pt05"));
        sizePolicy3.setHeightForWidth(pt05->sizePolicy().hasHeightForWidth());
        pt05->setSizePolicy(sizePolicy3);
        pt05->setMinimumSize(QSize(60, 0));
        pt05->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointBB.png")));
        pt05->setScaledContents(true);

        horizontalLayout_5->addWidget(pt05);

        pt04 = new Point(redInnerBoard);
        pt04->setObjectName(QStringLiteral("pt04"));
        sizePolicy3.setHeightForWidth(pt04->sizePolicy().hasHeightForWidth());
        pt04->setSizePolicy(sizePolicy3);
        pt04->setMinimumSize(QSize(60, 0));
        pt04->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointWB.png")));
        pt04->setScaledContents(true);

        horizontalLayout_5->addWidget(pt04);

        pt03 = new Point(redInnerBoard);
        pt03->setObjectName(QStringLiteral("pt03"));
        sizePolicy3.setHeightForWidth(pt03->sizePolicy().hasHeightForWidth());
        pt03->setSizePolicy(sizePolicy3);
        pt03->setMinimumSize(QSize(60, 0));
        pt03->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointBB.png")));
        pt03->setScaledContents(true);

        horizontalLayout_5->addWidget(pt03);

        pt02 = new Point(redInnerBoard);
        pt02->setObjectName(QStringLiteral("pt02"));
        sizePolicy3.setHeightForWidth(pt02->sizePolicy().hasHeightForWidth());
        pt02->setSizePolicy(sizePolicy3);
        pt02->setMinimumSize(QSize(60, 0));
        pt02->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointWB.png")));
        pt02->setScaledContents(true);

        horizontalLayout_5->addWidget(pt02);

        pt01 = new Point(redInnerBoard);
        pt01->setObjectName(QStringLiteral("pt01"));
        sizePolicy3.setHeightForWidth(pt01->sizePolicy().hasHeightForWidth());
        pt01->setSizePolicy(sizePolicy3);
        pt01->setMinimumSize(QSize(60, 0));
        pt01->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/PointBB.png")));
        pt01->setScaledContents(true);

        horizontalLayout_5->addWidget(pt01);


        verticalLayout_2->addWidget(redInnerBoard);


        horizontalLayout->addWidget(rightBoard);

        off = new QWidget(centralwidget);
        off->setObjectName(QStringLiteral("off"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(1);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(off->sizePolicy().hasHeightForWidth());
        off->setSizePolicy(sizePolicy8);
        verticalLayout_4 = new QVBoxLayout(off);
        verticalLayout_4->setSpacing(4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        blackCube = new QWidget(off);
        blackCube->setObjectName(QStringLiteral("blackCube"));
        sizePolicy7.setHeightForWidth(blackCube->sizePolicy().hasHeightForWidth());
        blackCube->setSizePolicy(sizePolicy7);

        verticalLayout_4->addWidget(blackCube);

        redOff = new QWidget(off);
        redOff->setObjectName(QStringLiteral("redOff"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(9);
        sizePolicy9.setHeightForWidth(redOff->sizePolicy().hasHeightForWidth());
        redOff->setSizePolicy(sizePolicy9);
        blackOff = new QWidget(redOff);
        blackOff->setObjectName(QStringLiteral("blackOff"));
        blackOff->setGeometry(QRect(-10, -50, 75, 297));
        sizePolicy9.setHeightForWidth(blackOff->sizePolicy().hasHeightForWidth());
        blackOff->setSizePolicy(sizePolicy9);

        verticalLayout_4->addWidget(redOff);

        redCube = new QWidget(off);
        redCube->setObjectName(QStringLiteral("redCube"));
        sizePolicy7.setHeightForWidth(redCube->sizePolicy().hasHeightForWidth());
        redCube->setSizePolicy(sizePolicy7);

        verticalLayout_4->addWidget(redCube);


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

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QMainWindow *Game)
    {
        Game->setWindowTitle(QApplication::translate("Game", "Game", Q_NULLPTR));
        pt13->setText(QString());
        pt14->setText(QString());
        pt15->setText(QString());
        pt16->setText(QString());
        pt17->setText(QString());
        pt18->setText(QString());
        pt12->setText(QString());
        pt11->setText(QString());
        pt10->setText(QString());
        pt09->setText(QString());
        pt08->setText(QString());
        pt07->setText(QString());
        pushButton->setText(QApplication::translate("Game", "Push Me", Q_NULLPTR));
        pt19->setText(QString());
        pt20->setText(QString());
        pt21->setText(QString());
        pt22->setText(QString());
        pt23->setText(QString());
        pt24->setText(QString());
        pt06->setText(QString());
        pt05->setText(QString());
        pt04->setText(QString());
        pt03->setText(QString());
        pt02->setText(QString());
        pt01->setText(QString());
        menuBoard->setTitle(QApplication::translate("Game", "Board", Q_NULLPTR));
        menuOptions->setTitle(QApplication::translate("Game", "Options", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
