#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int id;
    float grade;

public:
    Student(std::string n, int i, float g) {
        name = n;
        id = i;
        grade = g;
    }

    void display() {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Student ID: " << id << std::endl;
        std::cout << "Student Grade: " << grade << std::endl;
    }
};

int main() {

    Student student1("Budi", 007, 76);
    
    student1.display();

    return 0;
}
