#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "DataManager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addButton_clicked();
    void on_saveButton_clicked();
    void on_loadButton_clicked();
    void onStudentSelected();
    void onUsunStudentClicked();
    void onEdytujStudentClicked();

private:
    Ui::MainWindow *ui;
    DataManager dataManager;
    void refreshList();
};

#endif // MAINWINDOW_H
