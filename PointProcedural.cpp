#include <iostream>
#include <cmath>

struct Point {
    double x, y;
};

double distanceFromOrigin(Point p) {
    return sqrt(p.x * p.x + p.y * p.y);
}

void display(Point p) {
    std::cout << "Point(" << p.x << ", " << p.y << ")" << std::endl;
}

int main() {

    Point p = {3, 4};

    display(p);

    // Menghitung jarak dari titik asal
    std::cout << "Distance from origin: " << distanceFromOrigin(p) << std::endl;

    return 0;
}
