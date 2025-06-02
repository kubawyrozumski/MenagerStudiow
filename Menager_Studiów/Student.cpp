#include "Student.h"
#include "Exception.h"

void Student::setImie(const std::string& i) {
    if (i.length() > 20) throw NameTooLongException();
    imie = i;
}
void Student::setNazwisko(const std::string& n) { nazwisko = n; }
void Student::setKierunek(const std::string& k) { kierunek = k; }
void Student::setTrybStudiow(const std::string& t) { tryb = t; }
void Student::setAktywny(bool a) { aktywny = a; }

std::string Student::getImie() const { return imie; }
std::string Student::getNazwisko() const { return nazwisko; }
std::string Student::getKierunek() const { return kierunek; }
std::string Student::getTrybStudiow() const { return tryb; }
bool Student::getAktywny() const { return aktywny; }

std::string Student::getFullName() const {
    return imie + " " + nazwisko;
}
