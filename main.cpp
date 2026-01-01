#include <iostream>
#include <cmath>

struct Point {
    double x, y;
};

struct Rectangle {
    Point topLeft;
    Point bottomRight;

    double area() const {
        double width = std::abs(bottomRight.x - topLeft.x);
        double height = std::abs(topLeft.y - bottomRight.y);
        return width * height;
    }

    bool contains(const Point& p) const {
        return (p.x >= topLeft.x && p.x <= bottomRight.x &&
                p.y <= topLeft.y && p.y >= bottomRight.y);
    }
};

int main() {
    Rectangle r1{{0,5}, {4,0}};
    Rectangle r2{{1,3}, {3,1}};

    Point p1{2,2};
    Point p2{5,5};

    std::cout << "R1 area: " << r1.area() << "\n";
    std::cout << "R2 area: " << r2.area() << "\n";

    std::cout << "P1 inside R1? " << (r1.contains(p1) ? "Yes" : "No") << '\n';
    std::cout << "P2 inside R2? " << (r2.contains(p2) ? "Yes" : "No") << '\n';
    return 0;
}
