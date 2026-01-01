#include <iostream>
#include <cmath>

struct Vec2 {
    double x, y;

    Vec2(double x, double y)
    : x(x), y(y) {}

    double length() const {
        return std::sqrt(x*x + y*y);
    }

    void add(const Vec2& other) {
        x += other.x;
        y += other.y;
    }

    void subtract(const Vec2& other) {
        x -= other.x;
        y -= other.y;
    }

    void scale(double s) {
        x *= s;
        y *= s;
    }

    Vec2 added(const Vec2& other) const {
        return Vec2 {other.x + x, other.y + y};
    }

    Vec2 subtracted(const Vec2& other) const {
        return Vec2{x - other.x, y - other.y};
    }

    Vec2 scaled(double s) const {
        return Vec2{x * s, y * s};
    }

    void print() const {
        std::cout << "(" << x << ", " << y << ")\n";
    }
};

int main() {
    Vec2 a(3, 4);
    Vec2 b(1, 2);

    Vec2 c = a.added(b); // New Vec2 (4, 6)
    Vec2 d = c.scaled(0.5); // New Vec2 (2, 3)

    a.print();
    c.print();
    d.print();
    return 0;
}