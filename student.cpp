#include "student.h"

Student::Student(int id, std::string name):m_id(id),
                                           m_name(name)
{
}

int Student::id() const
{
    return m_id;
}

const std::string &Student::name() const
{
    return m_name;
}
std::ostream& operator<<(std::ostream& str, Student &std){
    str << std.id() << ", " << std.name();
    return str;
}
std::istream& operator>>(std::istream& str, std::vector<Student>& st){
    std::string id;
    std::string name;

    while(!str.eof()){
        getline(str, id, ',');
        getline(str, name);
        st.push_back(Student(stoi(id), name));
    }
    return str;
}
