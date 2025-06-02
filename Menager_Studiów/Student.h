#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
    std::string imie;
    std::string nazwisko;
    std::string kierunek;
    std::string tryb;
    bool aktywny = false;

public:
    void setImie(const std::string& i);
    void setNazwisko(const std::string& n);
    void setKierunek(const std::string& k);
    void setTrybStudiow(const std::string& t);
    void setAktywny(bool a);

    std::string getImie() const;
    std::string getNazwisko() const;
    std::string getKierunek() const;
    std::string getTrybStudiow() const;
    bool getAktywny() const;
    std::string getFullName() const;
};

#endif
