#include <iostream>

class Rectangle {
private:
    double length, width;

public:

    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double area() {
        return length * width;
    }

    void display() {
        std::cout << "Rectangle Area: " << area() << std::endl;
    }
};

int main() {
    Rectangle rect(10.5, 5.2);

    rect.display();

    return 0;
}
