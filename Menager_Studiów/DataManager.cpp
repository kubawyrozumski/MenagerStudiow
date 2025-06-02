#include "DataManager.h"
#include <fstream>

void DataManager::addStudent(const Student& s) {
    students.push_back(s);
}

void DataManager::removeStudent(int index) {
    if (index >= 0 && index < students.size())
        students.erase(students.begin() + index);
}

std::vector<Student>& DataManager::getStudentList() {
    return students;
}

void DataManager::saveToFile(const std::string& filename) {
    std::ofstream file(filename);
    for (const auto& s : students) {
        file << s.getImie() << ";" << s.getNazwisko() << ";" << s.getKierunek()
             << ";" << s.getTrybStudiow() << ";" << s.getAktywny() << "\n";
    }
}

void DataManager::loadFromFile(const std::string& filename) {
    students.clear();
    std::ifstream file(filename);
    std::string imie, nazwisko, kierunek, tryb, aktywny;
    while (std::getline(file, imie, ';') &&
           std::getline(file, nazwisko, ';') &&
           std::getline(file, kierunek, ';') &&
           std::getline(file, tryb, ';') &&
           std::getline(file, aktywny)) {
        Student s;
        s.setImie(imie);
        s.setNazwisko(nazwisko);
        s.setKierunek(kierunek);
        s.setTrybStudiow(tryb);
        s.setAktywny(aktywny == "1");
        students.push_back(s);
    }
}
