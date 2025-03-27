#include <iostream>
#include <cmath>  // Untuk fungsi sqrt()

class Point {
private:
    double x, y;

public:
    // Constructor untuk inisialisasi titik
    Point(double xCoord, double yCoord) {
        x = xCoord;
        y = yCoord;
    }

    double distanceFromOrigin() {
        return sqrt(x * x + y * y);
    }


    void display() {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {

    Point p(3, 4);
    

    p.display();

    // Menghitung jarak dari titik asal
    std::cout << "Distance from origin: " << p.distanceFromOrigin() << std::endl;

    return 0;
}
