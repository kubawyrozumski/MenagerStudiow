/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *addButton;
    QPushButton *saveButton;
    QPushButton *loadButton;
    QPushButton *usunButton;
    QPushButton *edytujButton;
    QLineEdit *imieLineEdit;
    QLineEdit *nazwiskoLineEdit;
    QCheckBox *aktywnyCheckBox;
    QComboBox *trybComboBox;
    QComboBox *kierunekComboBox;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(20, 20, 75, 23));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(110, 20, 75, 23));
        loadButton = new QPushButton(centralwidget);
        loadButton->setObjectName("loadButton");
        loadButton->setGeometry(QRect(200, 20, 75, 23));
        usunButton = new QPushButton(centralwidget);
        usunButton->setObjectName("usunButton");
        usunButton->setGeometry(QRect(290, 20, 75, 23));
        edytujButton = new QPushButton(centralwidget);
        edytujButton->setObjectName("edytujButton");
        edytujButton->setGeometry(QRect(380, 20, 75, 23));
        imieLineEdit = new QLineEdit(centralwidget);
        imieLineEdit->setObjectName("imieLineEdit");
        imieLineEdit->setGeometry(QRect(20, 60, 150, 23));
        nazwiskoLineEdit = new QLineEdit(centralwidget);
        nazwiskoLineEdit->setObjectName("nazwiskoLineEdit");
        nazwiskoLineEdit->setGeometry(QRect(180, 60, 150, 23));
        aktywnyCheckBox = new QCheckBox(centralwidget);
        aktywnyCheckBox->setObjectName("aktywnyCheckBox");
        aktywnyCheckBox->setGeometry(QRect(340, 60, 100, 23));
        trybComboBox = new QComboBox(centralwidget);
        trybComboBox->addItem(QString());
        trybComboBox->addItem(QString());
        trybComboBox->setObjectName("trybComboBox");
        trybComboBox->setGeometry(QRect(20, 100, 150, 23));
        kierunekComboBox = new QComboBox(centralwidget);
        kierunekComboBox->addItem(QString());
        kierunekComboBox->addItem(QString());
        kierunekComboBox->addItem(QString());
        kierunekComboBox->setObjectName("kierunekComboBox");
        kierunekComboBox->setGeometry(QRect(180, 100, 150, 23));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 140, 550, 200));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Menad\305\274er Studi\303\263w", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Dodaj", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Zapisz", nullptr));
        loadButton->setText(QCoreApplication::translate("MainWindow", "Wczytaj", nullptr));
        usunButton->setText(QCoreApplication::translate("MainWindow", "Usu\305\204", nullptr));
        edytujButton->setText(QCoreApplication::translate("MainWindow", "Edytuj", nullptr));
        imieLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Imi\304\231", nullptr));
        nazwiskoLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Nazwisko", nullptr));
        aktywnyCheckBox->setText(QCoreApplication::translate("MainWindow", "Aktywny", nullptr));
        trybComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Stacjonarne", nullptr));
        trybComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Nie-stacjonarne", nullptr));

        kierunekComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Informatyka", nullptr));
        kierunekComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Automatyka", nullptr));
        kierunekComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Elektronika", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
