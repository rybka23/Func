/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *sbFrom;
    QDoubleSpinBox *sbTo;
    QPushButton *pbSymmetry;
    QPushButton *pbSymmetry_2;
    QDoubleSpinBox *sbFrom_2;
    QDoubleSpinBox *sbTo_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(25, 60, 661, 500));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 50, 25));
        QFont font;
        font.setPointSize(11);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        sbFrom = new QDoubleSpinBox(centralwidget);
        sbFrom->setObjectName("sbFrom");
        sbFrom->setGeometry(QRect(409, 570, 165, 25));
        sbFrom->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        sbFrom->setAccelerated(true);
        sbFrom->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        sbFrom->setMinimum(-1000.000000000000000);
        sbFrom->setMaximum(1000.000000000000000);
        sbFrom->setSingleStep(5.000000000000000);
        sbFrom->setValue(-10.000000000000000);
        sbTo = new QDoubleSpinBox(centralwidget);
        sbTo->setObjectName("sbTo");
        sbTo->setGeometry(QRect(606, 570, 165, 25));
        sbTo->setAccelerated(true);
        sbTo->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        sbTo->setMinimum(-1000.000000000000000);
        sbTo->setMaximum(1000.000000000000000);
        sbTo->setSingleStep(5.000000000000000);
        sbTo->setValue(10.000000000000000);
        pbSymmetry = new QPushButton(centralwidget);
        pbSymmetry->setObjectName("pbSymmetry");
        pbSymmetry->setGeometry(QRect(580, 573, 20, 21));
        pbSymmetry->setMaximumSize(QSize(20, 30));
        pbSymmetry->setAutoFillBackground(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons/stock_link.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSymmetry->setIcon(icon);
        pbSymmetry->setCheckable(true);
        pbSymmetry->setChecked(true);
        pbSymmetry->setFlat(true);
        pbSymmetry_2 = new QPushButton(centralwidget);
        pbSymmetry_2->setObjectName("pbSymmetry_2");
        pbSymmetry_2->setGeometry(QRect(194, 573, 20, 21));
        pbSymmetry_2->setMaximumSize(QSize(20, 30));
        pbSymmetry_2->setAutoFillBackground(true);
        pbSymmetry_2->setIcon(icon);
        pbSymmetry_2->setCheckable(true);
        pbSymmetry_2->setChecked(true);
        pbSymmetry_2->setFlat(true);
        sbFrom_2 = new QDoubleSpinBox(centralwidget);
        sbFrom_2->setObjectName("sbFrom_2");
        sbFrom_2->setGeometry(QRect(23, 570, 165, 25));
        sbFrom_2->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        sbFrom_2->setAccelerated(true);
        sbFrom_2->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        sbFrom_2->setMinimum(-1000.000000000000000);
        sbFrom_2->setMaximum(1000.000000000000000);
        sbFrom_2->setSingleStep(5.000000000000000);
        sbFrom_2->setValue(-10.000000000000000);
        sbTo_2 = new QDoubleSpinBox(centralwidget);
        sbTo_2->setObjectName("sbTo_2");
        sbTo_2->setGeometry(QRect(220, 570, 165, 25));
        sbTo_2->setAccelerated(true);
        sbTo_2->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        sbTo_2->setMinimum(-1000.000000000000000);
        sbTo_2->setMaximum(1000.000000000000000);
        sbTo_2->setSingleStep(5.000000000000000);
        sbTo_2->setValue(10.000000000000000);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 570, 20, 20));
        QFont font1;
        font1.setPointSize(14);
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(390, 570, 20, 20));
        label_4->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "f(x)", nullptr));
        pbSymmetry->setText(QString());
        pbSymmetry_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
