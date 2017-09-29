/********************************************************************************
** Form generated from reading UI file 'SDModelerController.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SDMODELERCONTROLLER_H
#define UI_SDMODELERCONTROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_SDModelerControllerClass
{
public:
    QWidget *centralWidget;
    QTabWidget *mainTabWidget;
    QWidget *diaTab;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer;
    QSpinBox *cuvetteThicknessSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *lambdaSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_5;
    QSpinBox *ringWidthSpinBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *concentrationSlider;
    QLabel *label_4;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSlider *energyOfImpSlider;
    QLabel *label_5;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSlider *widthOnHalfSlider;
    QLabel *label_6;
    QLabel *label_9;
    QCustomPlot *qcp;
    QWidget *modTab;

    void setupUi(QMainWindow *SDModelerControllerClass)
    {
        if (SDModelerControllerClass->objectName().isEmpty())
            SDModelerControllerClass->setObjectName(QStringLiteral("SDModelerControllerClass"));
        SDModelerControllerClass->resize(1024, 768);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SDModelerControllerClass->sizePolicy().hasHeightForWidth());
        SDModelerControllerClass->setSizePolicy(sizePolicy);
        SDModelerControllerClass->setMinimumSize(QSize(1024, 768));
        SDModelerControllerClass->setMaximumSize(QSize(1024, 768));
        centralWidget = new QWidget(SDModelerControllerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mainTabWidget = new QTabWidget(centralWidget);
        mainTabWidget->setObjectName(QStringLiteral("mainTabWidget"));
        mainTabWidget->setGeometry(QRect(0, 0, 1024, 730));
        diaTab = new QWidget();
        diaTab->setObjectName(QStringLiteral("diaTab"));
        verticalLayoutWidget_3 = new QWidget(diaTab);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(60, 70, 571, 291));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_10 = new QLabel(verticalLayoutWidget_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_5->addWidget(label_10);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        cuvetteThicknessSpinBox = new QSpinBox(verticalLayoutWidget_3);
        cuvetteThicknessSpinBox->setObjectName(QStringLiteral("cuvetteThicknessSpinBox"));
        cuvetteThicknessSpinBox->setMinimum(1);
        cuvetteThicknessSpinBox->setMaximum(1000);
        cuvetteThicknessSpinBox->setValue(1);

        horizontalLayout_5->addWidget(cuvetteThicknessSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_11 = new QLabel(verticalLayoutWidget_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_6->addWidget(label_11);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        lambdaSpinBox = new QSpinBox(verticalLayoutWidget_3);
        lambdaSpinBox->setObjectName(QStringLiteral("lambdaSpinBox"));
        lambdaSpinBox->setMinimum(1);
        lambdaSpinBox->setMaximum(1000);
        lambdaSpinBox->setValue(532);

        horizontalLayout_6->addWidget(lambdaSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_12 = new QLabel(verticalLayoutWidget_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_4->addWidget(label_12);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        ringWidthSpinBox = new QSpinBox(verticalLayoutWidget_3);
        ringWidthSpinBox->setObjectName(QStringLiteral("ringWidthSpinBox"));
        ringWidthSpinBox->setMinimum(1);
        ringWidthSpinBox->setMaximum(1000);
        ringWidthSpinBox->setValue(10);

        horizontalLayout_4->addWidget(ringWidthSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget_3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        concentrationSlider = new QSlider(verticalLayoutWidget_3);
        concentrationSlider->setObjectName(QStringLiteral("concentrationSlider"));
        concentrationSlider->setMinimum(1);
        concentrationSlider->setMaximum(10);
        concentrationSlider->setValue(5);
        concentrationSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(concentrationSlider);

        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        label_7 = new QLabel(verticalLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(verticalLayoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        energyOfImpSlider = new QSlider(verticalLayoutWidget_3);
        energyOfImpSlider->setObjectName(QStringLiteral("energyOfImpSlider"));
        energyOfImpSlider->setMinimum(10);
        energyOfImpSlider->setMaximum(100);
        energyOfImpSlider->setValue(55);
        energyOfImpSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(energyOfImpSlider);

        label_5 = new QLabel(verticalLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_3->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(verticalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        widthOnHalfSlider = new QSlider(verticalLayoutWidget_3);
        widthOnHalfSlider->setObjectName(QStringLiteral("widthOnHalfSlider"));
        widthOnHalfSlider->setMinimum(1);
        widthOnHalfSlider->setMaximum(10);
        widthOnHalfSlider->setValue(4);
        widthOnHalfSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(widthOnHalfSlider);

        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        label_9 = new QLabel(verticalLayoutWidget_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);

        qcp = new QCustomPlot(diaTab);
        qcp->setObjectName(QStringLiteral("qcp"));
        qcp->setGeometry(QRect(730, 90, 241, 241));
        mainTabWidget->addTab(diaTab, QString());
        verticalLayoutWidget_3->raise();
        qcp->raise();
        modTab = new QWidget();
        modTab->setObjectName(QStringLiteral("modTab"));
        mainTabWidget->addTab(modTab, QString());
        SDModelerControllerClass->setCentralWidget(centralWidget);

        retranslateUi(SDModelerControllerClass);
        QObject::connect(concentrationSlider, SIGNAL(valueChanged(int)), label_4, SLOT(setNum(int)));
        QObject::connect(energyOfImpSlider, SIGNAL(valueChanged(int)), label_5, SLOT(setNum(int)));
        QObject::connect(widthOnHalfSlider, SIGNAL(valueChanged(int)), label_6, SLOT(setNum(int)));
        QObject::connect(cuvetteThicknessSpinBox, SIGNAL(valueChanged(int)), SDModelerControllerClass, SLOT(cuvetteChanged(int)));
        QObject::connect(lambdaSpinBox, SIGNAL(valueChanged(int)), SDModelerControllerClass, SLOT(lambdaChanged(int)));
        QObject::connect(ringWidthSpinBox, SIGNAL(valueChanged(int)), SDModelerControllerClass, SLOT(ringWidthChanged(int)));
        QObject::connect(concentrationSlider, SIGNAL(valueChanged(int)), SDModelerControllerClass, SLOT(concentrationChanged(int)));
        QObject::connect(energyOfImpSlider, SIGNAL(valueChanged(int)), SDModelerControllerClass, SLOT(energyChanged(int)));
        QObject::connect(widthOnHalfSlider, SIGNAL(valueChanged(int)), SDModelerControllerClass, SLOT(widthChanged(int)));

        mainTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SDModelerControllerClass);
    } // setupUi

    void retranslateUi(QMainWindow *SDModelerControllerClass)
    {
        SDModelerControllerClass->setWindowTitle(QApplication::translate("SDModelerControllerClass", "SDModelerController", Q_NULLPTR));
        label_10->setText(QApplication::translate("SDModelerControllerClass", "\320\242\320\276\320\273\321\211\320\270\320\275\320\260 \320\272\321\216\320\262\320\265\321\202\321\213, \320\274\320\274", Q_NULLPTR));
        label_11->setText(QApplication::translate("SDModelerControllerClass", "\320\240\320\260\320\261\320\276\321\207\320\260\321\217 \320\264\320\273\320\270\320\275\320\260 \320\262\320\276\320\273\320\275\321\213, \320\275\320\274", Q_NULLPTR));
        label_12->setText(QApplication::translate("SDModelerControllerClass", "\320\250\320\270\321\200\320\270\320\275\320\260 \320\272\320\276\320\273\321\214\321\206\320\260, \320\274\320\272\320\274", Q_NULLPTR));
        label->setText(QApplication::translate("SDModelerControllerClass", "\320\232\320\276\320\275\321\206\320\265\320\275\321\202\321\200\320\260\321\206\320\270\321\217 \320\232\320\242", Q_NULLPTR));
        label_4->setText(QApplication::translate("SDModelerControllerClass", "5", Q_NULLPTR));
        label_7->setText(QApplication::translate("SDModelerControllerClass", "*10^(23)", Q_NULLPTR));
        label_2->setText(QApplication::translate("SDModelerControllerClass", "\320\255\320\275\320\265\321\200\320\263\320\270\321\217 \320\277\320\270\320\272\320\276\321\201\320\265\320\272\321\203\320\275\320\264\320\275\320\276\320\263\320\276 \320\270\320\274\320\277\321\203\320\273\321\214\321\201\320\260, \320\224\320\266", Q_NULLPTR));
        label_5->setText(QApplication::translate("SDModelerControllerClass", "55", Q_NULLPTR));
        label_8->setText(QApplication::translate("SDModelerControllerClass", "*10^(-5)", Q_NULLPTR));
        label_3->setText(QApplication::translate("SDModelerControllerClass", "\320\237\320\276\320\273\320\275\320\260\321\217 \321\210\320\270\321\200\320\270\320\275\320\260 \320\275\320\260 \321\203\321\200\320\276\320\262\320\275\320\265 \320\277\320\276\320\273\320\276\320\262\320\270\320\275\320\275\320\276\320\271 \320\260\320\274\320\277\320\273\320\270\321\202\321\203\320\264\321\213, \320\274\320\274", Q_NULLPTR));
        label_6->setText(QApplication::translate("SDModelerControllerClass", "4", Q_NULLPTR));
        label_9->setText(QApplication::translate("SDModelerControllerClass", "*10^(-1)", Q_NULLPTR));
        mainTabWidget->setTabText(mainTabWidget->indexOf(diaTab), QApplication::translate("SDModelerControllerClass", "\320\224\320\270\320\260\321\204\321\200\320\260\320\263\320\274\320\260", Q_NULLPTR));
        mainTabWidget->setTabText(mainTabWidget->indexOf(modTab), QApplication::translate("SDModelerControllerClass", "\320\234\320\276\320\264\320\265\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SDModelerControllerClass: public Ui_SDModelerControllerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SDMODELERCONTROLLER_H
