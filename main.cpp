#include <iostream>
#include <cmath>

struct Vec2
{
    double x, y;

    Vec2(double x, double y)
        : x(x), y(y) {}

    double length() const
    {
        return std::sqrt(x * x + y * y);
    }

    void add(const Vec2 &other)
    {
        x += other.x;
        y += other.y;
    }

    void subtract(const Vec2 &other)
    {
        x -= other.x;
        y -= other.y;
    }

    void scale(double s)
    {
        x *= s;
        y *= s;
    }

    double dot(const Vec2& other) const
    {
        return x * other.x + y * other.y;
    }

    void print() const
    {
        std::cout << "(" << x << ", " << y << ")\n";
    }

    static Vec2 zero() {
        return Vec2{0, 0};
    }

    Vec2 added(const Vec2 &other) const
    {
        return Vec2{other.x + x, other.y + y};
    }

    Vec2 subtracted(const Vec2 &other) const
    {
        return Vec2{x - other.x, y - other.y};
    }

    Vec2 scaled(double s) const
    {
        return Vec2{x * s, y * s};
    }

    Vec2 normalized() const
    {
        double len = length();
        if (len == 0) {
            return Vec2::zero();
        }
        return Vec2{x / len, y / len};
    }
};

int main()
{
    Vec2 z = Vec2::zero();
    Vec2 a(2, 2);
    z.length();
    z.print();
    return 0;
}
