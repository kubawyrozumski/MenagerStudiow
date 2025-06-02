#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <vector>
#include "Student.h"

class DataManager {
    std::vector<Student> students;
public:
    void addStudent(const Student& s);
    void removeStudent(int index);
    std::vector<Student>& getStudentList();
    void saveToFile(const std::string& filename);
    void loadFromFile(const std::string& filename);
};

#endif
