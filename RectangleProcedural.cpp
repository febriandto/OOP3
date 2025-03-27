#include <iostream>

struct Rectangle {
    double length;
    double width;
};

double calculateArea(Rectangle r) {
    return r.length * r.width;
}

int main() {
    Rectangle rect = {10.5, 5.2};

    std::cout << "Rectangle Area: " << calculateArea(rect) << std::endl;

    return 0;
}
