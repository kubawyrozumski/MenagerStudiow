#include "MainWindow.h"
#include <QMessageBox>
#include "Exception.h"
#include "Student.h"
#include "DataManager.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    //connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::on_addButton_clicked);
    //connect(ui->saveButton, &QPushButton::clicked, this, &MainWindow::on_saveButton_clicked); W Qt, jeśli kliknięcie przycisku zostało już połączone w Designerze 
                                                                                               // z tą funkcją on_addButton_clicked(), to nie trzeba dodawać connect() w kodzie.
                                                                                               //Podwójne połączenie = funkcja uruchamiana 2 razy → student dodaje się 2 razy.
    //connect(ui->loadButton, &QPushButton::clicked, this, &MainWindow::on_loadButton_clicked);
    connect(ui->listWidget, &QListWidget::itemClicked, this, &MainWindow::onStudentSelected);
    connect(ui->usunButton, &QPushButton::clicked, this, &MainWindow::onUsunStudentClicked);
    connect(ui->edytujButton, &QPushButton::clicked, this, &MainWindow::onEdytujStudentClicked);

    refreshList();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::refreshList() {
    ui->listWidget->clear();
    for (const Student& s : dataManager.getStudentList()) {
        ui->listWidget->addItem(QString::fromStdString(s.getFullName()));
    }
}

void MainWindow::on_addButton_clicked() {
    try {
        Student s;
        s.setImie(ui->imieLineEdit->text().toStdString());
        s.setNazwisko(ui->nazwiskoLineEdit->text().toStdString());
        s.setAktywny(ui->aktywnyCheckBox->isChecked());
        s.setTrybStudiow(ui->trybComboBox->currentText().toStdString());
        s.setKierunek(ui->kierunekComboBox->currentText().toStdString());

        dataManager.addStudent(s);
        refreshList();
        QMessageBox::information(this, "Sukces", "Dodano studenta.");
    }
    catch (const NameTooLongException& e) {
        QMessageBox::warning(this, "Błąd", QString::fromStdString(e.what()));
    }
}

void MainWindow::on_saveButton_clicked() {
    dataManager.saveToFile("studenci.txt");
    QMessageBox::information(this, "Sukces", "Zapisano dane do pliku.");
}

void MainWindow::on_loadButton_clicked() {
    dataManager.loadFromFile("studenci.txt");
    refreshList();
    QMessageBox::information(this, "Sukces", "Wczytano dane z pliku.");
}

void MainWindow::onStudentSelected() {
    int index = ui->listWidget->currentRow();
    if (index < 0 || index >= dataManager.getStudentList().size()) return;

    const Student& s = dataManager.getStudentList()[index];
    ui->imieLineEdit->setText(QString::fromStdString(s.getImie()));
    ui->nazwiskoLineEdit->setText(QString::fromStdString(s.getNazwisko()));
    ui->aktywnyCheckBox->setChecked(s.getAktywny());
    ui->trybComboBox->setCurrentText(QString::fromStdString(s.getTrybStudiow()));
    ui->kierunekComboBox->setCurrentText(QString::fromStdString(s.getKierunek()));
}

void MainWindow::onUsunStudentClicked() {
    int index = ui->listWidget->currentRow();
    if (index < 0 || index >= dataManager.getStudentList().size()) return;

    dataManager.removeStudent(index);
    refreshList();
    QMessageBox::information(this, "Sukces", "Usunięto studenta.");
}

void MainWindow::onEdytujStudentClicked() {
    int index = ui->listWidget->currentRow();
    if (index < 0 || index >= dataManager.getStudentList().size()) return;

    try {
        Student& s = dataManager.getStudentList()[index];
        s.setImie(ui->imieLineEdit->text().toStdString());
        s.setNazwisko(ui->nazwiskoLineEdit->text().toStdString());
        s.setAktywny(ui->aktywnyCheckBox->isChecked());
        s.setTrybStudiow(ui->trybComboBox->currentText().toStdString());
        s.setKierunek(ui->kierunekComboBox->currentText().toStdString());

        refreshList();
        QMessageBox::information(this, "Sukces", "Zaktualizowano dane studenta.");
    }
    catch (const NameTooLongException& e) {
        QMessageBox::warning(this, "Błąd", QString::fromStdString(e.what()));
    }
}
