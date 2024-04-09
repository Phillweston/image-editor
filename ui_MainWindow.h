/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionAbout_Image_Editor;
    QAction *actionAbout_Qt;
    QAction *actionRotate_Clockwise;
    QAction *actionRotate_anticlockwise;
    QAction *actionFlip_x;
    QAction *actionFlip_y;
    QAction *actionGrayscale;
    QAction *actionColormask;
    QAction *actionBrightness;
    QAction *actionContrast;
    QAction *actionScale;
    QAction *actionBlur;
    QAction *actionSharpen;
    QAction *actionEmboss;
    QAction *actionEdge_detect;
    QAction *actionZoomInc;
    QAction *actionZoomDec;
    QAction *actionZoom_Adapt;
    QAction *actionSave;
    QAction *actionExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuRotation;
    QMenu *menuFlip;
    QMenu *menuColor;
    QMenu *menuFilters;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/resources/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/resources/undo.png"), QSize(), QIcon::Normal, QIcon::On);
        actionUndo->setIcon(icon1);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/resources/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon2);
        actionAbout_Image_Editor = new QAction(MainWindow);
        actionAbout_Image_Editor->setObjectName(QString::fromUtf8("actionAbout_Image_Editor"));
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionRotate_Clockwise = new QAction(MainWindow);
        actionRotate_Clockwise->setObjectName(QString::fromUtf8("actionRotate_Clockwise"));
        actionRotate_anticlockwise = new QAction(MainWindow);
        actionRotate_anticlockwise->setObjectName(QString::fromUtf8("actionRotate_anticlockwise"));
        actionFlip_x = new QAction(MainWindow);
        actionFlip_x->setObjectName(QString::fromUtf8("actionFlip_x"));
        actionFlip_y = new QAction(MainWindow);
        actionFlip_y->setObjectName(QString::fromUtf8("actionFlip_y"));
        actionGrayscale = new QAction(MainWindow);
        actionGrayscale->setObjectName(QString::fromUtf8("actionGrayscale"));
        actionColormask = new QAction(MainWindow);
        actionColormask->setObjectName(QString::fromUtf8("actionColormask"));
        actionBrightness = new QAction(MainWindow);
        actionBrightness->setObjectName(QString::fromUtf8("actionBrightness"));
        actionContrast = new QAction(MainWindow);
        actionContrast->setObjectName(QString::fromUtf8("actionContrast"));
        actionScale = new QAction(MainWindow);
        actionScale->setObjectName(QString::fromUtf8("actionScale"));
        actionBlur = new QAction(MainWindow);
        actionBlur->setObjectName(QString::fromUtf8("actionBlur"));
        actionSharpen = new QAction(MainWindow);
        actionSharpen->setObjectName(QString::fromUtf8("actionSharpen"));
        actionEmboss = new QAction(MainWindow);
        actionEmboss->setObjectName(QString::fromUtf8("actionEmboss"));
        actionEdge_detect = new QAction(MainWindow);
        actionEdge_detect->setObjectName(QString::fromUtf8("actionEdge_detect"));
        actionZoomInc = new QAction(MainWindow);
        actionZoomInc->setObjectName(QString::fromUtf8("actionZoomInc"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/resources/zoom-in.png"), QSize(), QIcon::Normal, QIcon::On);
        actionZoomInc->setIcon(icon3);
        actionZoomDec = new QAction(MainWindow);
        actionZoomDec->setObjectName(QString::fromUtf8("actionZoomDec"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/resources/zoom-out.png"), QSize(), QIcon::Normal, QIcon::On);
        actionZoomDec->setIcon(icon4);
        actionZoom_Adapt = new QAction(MainWindow);
        actionZoom_Adapt->setObjectName(QString::fromUtf8("actionZoom_Adapt"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/resources/zoom-adapt.png"), QSize(), QIcon::Normal, QIcon::On);
        actionZoom_Adapt->setIcon(icon5);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuRotation = new QMenu(menuEdit);
        menuRotation->setObjectName(QString::fromUtf8("menuRotation"));
        menuFlip = new QMenu(menuEdit);
        menuFlip->setObjectName(QString::fromUtf8("menuFlip"));
        menuColor = new QMenu(menuEdit);
        menuColor->setObjectName(QString::fromUtf8("menuColor"));
        menuFilters = new QMenu(menubar);
        menuFilters->setObjectName(QString::fromUtf8("menuFilters"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuFilters->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(menuRotation->menuAction());
        menuEdit->addAction(menuFlip->menuAction());
        menuEdit->addAction(menuColor->menuAction());
        menuEdit->addAction(actionScale);
        menuRotation->addAction(actionRotate_Clockwise);
        menuRotation->addAction(actionRotate_anticlockwise);
        menuFlip->addAction(actionFlip_x);
        menuFlip->addAction(actionFlip_y);
        menuColor->addAction(actionGrayscale);
        menuColor->addAction(actionColormask);
        menuColor->addAction(actionBrightness);
        menuColor->addAction(actionContrast);
        menuFilters->addAction(actionBlur);
        menuFilters->addAction(actionSharpen);
        menuFilters->addAction(actionEmboss);
        menuFilters->addAction(actionEdge_detect);
        menuAbout->addAction(actionAbout_Image_Editor);
        menuAbout->addAction(actionAbout_Qt);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionZoomInc);
        toolBar->addAction(actionZoomDec);
        toolBar->addAction(actionZoom_Adapt);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Image Editor", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout_Image_Editor->setText(QCoreApplication::translate("MainWindow", "About Image Editor", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        actionRotate_Clockwise->setText(QCoreApplication::translate("MainWindow", "Rotate clockwise", nullptr));
        actionRotate_anticlockwise->setText(QCoreApplication::translate("MainWindow", "Rotate anticlockwise", nullptr));
        actionFlip_x->setText(QCoreApplication::translate("MainWindow", "Flip X", nullptr));
        actionFlip_y->setText(QCoreApplication::translate("MainWindow", "Flip Y", nullptr));
        actionGrayscale->setText(QCoreApplication::translate("MainWindow", "Grayscale", nullptr));
        actionColormask->setText(QCoreApplication::translate("MainWindow", "Colormask", nullptr));
        actionBrightness->setText(QCoreApplication::translate("MainWindow", "Brightness", nullptr));
        actionContrast->setText(QCoreApplication::translate("MainWindow", "Contrast", nullptr));
        actionScale->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        actionBlur->setText(QCoreApplication::translate("MainWindow", "Blur", nullptr));
        actionSharpen->setText(QCoreApplication::translate("MainWindow", "Sharpen", nullptr));
        actionEmboss->setText(QCoreApplication::translate("MainWindow", "Emboss", nullptr));
        actionEdge_detect->setText(QCoreApplication::translate("MainWindow", "Edge detect", nullptr));
        actionZoomInc->setText(QCoreApplication::translate("MainWindow", "Zoom +", nullptr));
#if QT_CONFIG(shortcut)
        actionZoomInc->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+=", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomDec->setText(QCoreApplication::translate("MainWindow", "Zoom -", nullptr));
#if QT_CONFIG(shortcut)
        actionZoomDec->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_Adapt->setText(QCoreApplication::translate("MainWindow", "Zoom Adapt", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_Adapt->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Return", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuRotation->setTitle(QCoreApplication::translate("MainWindow", "Rotation", nullptr));
        menuFlip->setTitle(QCoreApplication::translate("MainWindow", "Flip", nullptr));
        menuColor->setTitle(QCoreApplication::translate("MainWindow", "Color", nullptr));
        menuFilters->setTitle(QCoreApplication::translate("MainWindow", "Filters", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
