#include <iostream>
#include "Student/Student/student.h"
#include <vector>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    vector<Student> studenti;
    ifstream file;

    try {
        file.open("studenti.txt");
        /*string id;
        string name;

        while(!file.eof()){
            getline(file, id, ',');
            getline(file, name);
            studenti.push_back(Student(stoi(id), name));
        }
        file.close();*/
        file >> studenti;

    }  catch (...) {
        cout << "Error when processing file" << endl;

    }


    for(auto &st:studenti){
        cout << st << endl;
    }
    Student a(1, "Karel");
    cout << a << endl;
    return 0;
}
