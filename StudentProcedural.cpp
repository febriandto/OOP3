#include <iostream>
#include <string>

struct Student {
    std::string name;
    int id;
    float grade;
};

void display(Student s) {
    std::cout << "Student Name: " << s.name << std::endl;
    std::cout << "Student ID: " << s.id << std::endl;
    std::cout << "Student Grade: " << s.grade << std::endl;
}

int main() {

    Student student1 = {"Budi", 101, 85.5};
    
    display(student1);

    return 0;
}
