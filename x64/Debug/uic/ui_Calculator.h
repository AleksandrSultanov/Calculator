/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorClass
{
public:
    QAction *actionDeveloper_Sultanov_Alexander_Version_1_0;
    QAction *actionVersion_1_0;
    QWidget *centralWidget;
    QLineEdit *lineEdit_input;
    QLineEdit *lineEdit_results;
    QPushButton *pushButton_5;
    QPushButton *pushButton_division;
    QPushButton *pushButton_delete_all;
    QPushButton *pushButton_1;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_2;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_0;
    QPushButton *pushButton_9;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_point;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_ctg;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_tg;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sqrt;
    QMenuBar *menuBar;
    QMenu *menuInfo;
    QMenu *menuAbout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalculatorClass)
    {
        if (CalculatorClass->objectName().isEmpty())
            CalculatorClass->setObjectName(QString::fromUtf8("CalculatorClass"));
        CalculatorClass->resize(496, 697);
        CalculatorClass->setMinimumSize(QSize(496, 697));
        CalculatorClass->setMaximumSize(QSize(496, 697));
        CalculatorClass->setCursor(QCursor(Qt::ArrowCursor));
        CalculatorClass->setStyleSheet(QString::fromUtf8("background-color:#282828"));
        CalculatorClass->setIconSize(QSize(0, 0));
        CalculatorClass->setToolButtonStyle(Qt::ToolButtonIconOnly);
        CalculatorClass->setDocumentMode(false);
        actionDeveloper_Sultanov_Alexander_Version_1_0 = new QAction(CalculatorClass);
        actionDeveloper_Sultanov_Alexander_Version_1_0->setObjectName(QString::fromUtf8("actionDeveloper_Sultanov_Alexander_Version_1_0"));
        actionVersion_1_0 = new QAction(CalculatorClass);
        actionVersion_1_0->setObjectName(QString::fromUtf8("actionVersion_1_0"));
        centralWidget = new QWidget(CalculatorClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit_input = new QLineEdit(centralWidget);
        lineEdit_input->setObjectName(QString::fromUtf8("lineEdit_input"));
        lineEdit_input->setGeometry(QRect(10, 0, 481, 51));
        QFont font;
        font.setPointSize(12);
        lineEdit_input->setFont(font);
        lineEdit_input->setFocusPolicy(Qt::ClickFocus);
        lineEdit_input->setLayoutDirection(Qt::RightToLeft);
        lineEdit_input->setStyleSheet(QString::fromUtf8("color: white; border:none"));
        lineEdit_input->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_results = new QLineEdit(centralWidget);
        lineEdit_results->setObjectName(QString::fromUtf8("lineEdit_results"));
        lineEdit_results->setGeometry(QRect(10, 80, 481, 51));
        QFont font1;
        font1.setPointSize(24);
        lineEdit_results->setFont(font1);
        lineEdit_results->setFocusPolicy(Qt::StrongFocus);
        lineEdit_results->setStyleSheet(QString::fromUtf8("border:none;color:white; text-align: right;"));
        lineEdit_results->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(200, 340, 100, 100));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: #000000; color: white"));
        pushButton_division = new QPushButton(centralWidget);
        pushButton_division->setObjectName(QString::fromUtf8("pushButton_division"));
        pushButton_division->setGeometry(QRect(400, 140, 100, 100));
        QFont font2;
        font2.setPointSize(10);
        pushButton_division->setFont(font2);
        pushButton_division->setStyleSheet(QString::fromUtf8("background-color: #FFac05; color: white; border:none;"));
        pushButton_delete_all = new QPushButton(centralWidget);
        pushButton_delete_all->setObjectName(QString::fromUtf8("pushButton_delete_all"));
        pushButton_delete_all->setGeometry(QRect(100, 140, 100, 100));
        pushButton_delete_all->setStyleSheet(QString::fromUtf8("background-color: #000000; color: white"));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(100, 440, 100, 100));
        pushButton_1->setStyleSheet(QString::fromUtf8("background-color: #000000; color: white"));
        pushButton_equal = new QPushButton(centralWidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(400, 540, 101, 101));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 172, 5, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        pushButton_equal->setPalette(palette);
        pushButton_equal->setFont(font2);
        pushButton_equal->setStyleSheet(QString::fromUtf8("background-color: #FFac05; color: white; border:none;"));
        pushButton_percent = new QPushButton(centralWidget);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(300, 140, 100, 100));
        pushButton_percent->setStyleSheet(QString::fromUtf8("background-color: #000000; color: white"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 440, 100, 100));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #000000; color: white"));
        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(400, 340, 100, 100));
        pushButton_minus->setFont(font);
        pushButton_minus->setFocusPolicy(Qt::StrongFocus);
        pushButton_minus->setStyleSheet(QString::fromUtf8("background-color: #FFac05; color: white; border:none;"));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(99, 540, 201, 100));
        pushButton_0->setStyleSheet(QString::fromUtf8("background-color: #000000; color: white"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(300, 240, 100, 100));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: #000000; color: white"));
        pushButton_delete = new QPushButton(centralWidget);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(200, 140, 100, 100));
        pushButton_delete->setStyleSheet(QString::fromUtf8("background-color: #000000; color: white"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 440, 100, 100));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #000000; color: white"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(200, 240, 100, 100));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: #000000; color: white"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(300, 340, 100, 100));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: #000000; color: white"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 340, 100, 100));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: #000000; color: white"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(100, 240, 100, 100));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: #000000; color: white"));
        pushButton_point = new QPushButton(centralWidget);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));
        pushButton_point->setGeometry(QRect(300, 540, 100, 100));
        pushButton_point->setStyleSheet(QString::fromUtf8("background-color: #000000; color: white"));
        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(400, 440, 100, 100));
        pushButton_plus->setFont(font2);
        pushButton_plus->setStyleSheet(QString::fromUtf8("background-color: #FFac05; color: white; border:none;"));
        pushButton_multiply = new QPushButton(centralWidget);
        pushButton_multiply->setObjectName(QString::fromUtf8("pushButton_multiply"));
        pushButton_multiply->setGeometry(QRect(400, 240, 100, 100));
        pushButton_multiply->setFont(font);
        pushButton_multiply->setStyleSheet(QString::fromUtf8("background-color: #FFac05; color: white; border:none;"));
        pushButton_ctg = new QPushButton(centralWidget);
        pushButton_ctg->setObjectName(QString::fromUtf8("pushButton_ctg"));
        pushButton_ctg->setGeometry(QRect(0, 140, 100, 100));
        pushButton_ctg->setStyleSheet(QString::fromUtf8("background-color: #3b3b3b; color: white; border:none;"));
        pushButton_sin = new QPushButton(centralWidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(0, 340, 100, 100));
        pushButton_sin->setStyleSheet(QString::fromUtf8("background-color: #3b3b3b; color: white; border:none;"));
        pushButton_tg = new QPushButton(centralWidget);
        pushButton_tg->setObjectName(QString::fromUtf8("pushButton_tg"));
        pushButton_tg->setGeometry(QRect(0, 240, 100, 100));
        pushButton_tg->setStyleSheet(QString::fromUtf8("background-color: #3b3b3b; color: white; border:none;"));
        pushButton_cos = new QPushButton(centralWidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(0, 440, 100, 100));
        pushButton_cos->setStyleSheet(QString::fromUtf8("background-color: #3b3b3b; color: white; border:none;"));
        pushButton_sqrt = new QPushButton(centralWidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(0, 540, 100, 100));
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("background-color: #3b3b3b; color: white; border:none;"));
        CalculatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalculatorClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 496, 30));
        menuBar->setStyleSheet(QString::fromUtf8("color:white"));
        menuInfo = new QMenu(menuBar);
        menuInfo->setObjectName(QString::fromUtf8("menuInfo"));
        menuInfo->setStyleSheet(QString::fromUtf8("color:white"));
        menuAbout = new QMenu(menuInfo);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        CalculatorClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(CalculatorClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setStyleSheet(QString::fromUtf8("color:white"));
        CalculatorClass->setStatusBar(statusBar);

        menuBar->addAction(menuInfo->menuAction());
        menuInfo->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionDeveloper_Sultanov_Alexander_Version_1_0);
        menuAbout->addAction(actionVersion_1_0);

        retranslateUi(CalculatorClass);

        QMetaObject::connectSlotsByName(CalculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatorClass)
    {
        CalculatorClass->setWindowTitle(QCoreApplication::translate("CalculatorClass", "Calculator", nullptr));
        actionDeveloper_Sultanov_Alexander_Version_1_0->setText(QCoreApplication::translate("CalculatorClass", "Developer: Sultanov Alexander.", nullptr));
        actionVersion_1_0->setText(QCoreApplication::translate("CalculatorClass", "Version: 1.0", nullptr));
        pushButton_5->setText(QCoreApplication::translate("CalculatorClass", "5", nullptr));
        pushButton_division->setText(QCoreApplication::translate("CalculatorClass", "/", nullptr));
        pushButton_delete_all->setText(QCoreApplication::translate("CalculatorClass", "AC", nullptr));
        pushButton_1->setText(QCoreApplication::translate("CalculatorClass", "1", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("CalculatorClass", "=", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("CalculatorClass", "%", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CalculatorClass", "2", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("CalculatorClass", "-", nullptr));
        pushButton_0->setText(QCoreApplication::translate("CalculatorClass", "0", nullptr));
        pushButton_9->setText(QCoreApplication::translate("CalculatorClass", "9", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("CalculatorClass", "Del", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CalculatorClass", "3", nullptr));
        pushButton_8->setText(QCoreApplication::translate("CalculatorClass", "8", nullptr));
        pushButton_6->setText(QCoreApplication::translate("CalculatorClass", "6", nullptr));
        pushButton_4->setText(QCoreApplication::translate("CalculatorClass", "4", nullptr));
        pushButton_7->setText(QCoreApplication::translate("CalculatorClass", "7", nullptr));
        pushButton_point->setText(QCoreApplication::translate("CalculatorClass", ".", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("CalculatorClass", "+", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("CalculatorClass", "*", nullptr));
        pushButton_ctg->setText(QCoreApplication::translate("CalculatorClass", "ctg", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("CalculatorClass", "sin", nullptr));
        pushButton_tg->setText(QCoreApplication::translate("CalculatorClass", "tg", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("CalculatorClass", "cos", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("CalculatorClass", "sqrt", nullptr));
        menuInfo->setTitle(QCoreApplication::translate("CalculatorClass", "Info", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("CalculatorClass", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorClass: public Ui_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
