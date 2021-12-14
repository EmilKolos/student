#ifndef STUDENT_H
#define STUDENT_H

#include "Student_global.h"
#include <iostream>
#include <string>
#include <vector>

class STUDENT_EXPORT Student
{
public:
    Student(int id, std::string name);
    int id() const;

    const std::string &name() const;
    STUDENT_EXPORT friend std::ostream& operator<<(std::ostream& str, Student &std);
    STUDENT_EXPORT friend std::istream& operator>>(std::istream& str, std::vector<Student>& st);


protected:
    int m_id;
    std::string m_name;
};

#endif // STUDENT_H
