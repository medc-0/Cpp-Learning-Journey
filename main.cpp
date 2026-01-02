#include <iostream>
#include <cmath>

struct Vec2 {
    double x;
    double y;

    Vec2(double x, double y)
    : x(x), y(y) {}

    double length() const {
        return std::sqrt(x*x + y*y);
    }

    Vec2 scaled(double s) const {
        return Vec2{x * s, y * s};
    }

    static Vec2 zero() {
        return Vec2{0,0};
    }

};

struct Mover {
    Vec2 position;
    Vec2 velocity;

    Mover(Vec2 position, Vec2 velocity)
    : position(position), velocity(velocity) {}

    void step(double dt) {
        position.x = position.x + velocity.x * dt;
        position.y = position.y + velocity.y * dt;
    }

    double speed() const {
        return velocity.length();
    }

    void print() const {
        std::cout << "Pos(" << position.x << ", " << position.y << ") "
                  << "Vel(" << velocity.x << ", " << velocity.y << ")\n";
    }

    static double distance(const Mover& a, const Mover& b) {
        double dx = b.position.x - a.position.x;
        double dy = b.position.x - a.position.y;
        return std::sqrt(dx*dx + dy*dy);
    }

    static Mover stationary(const Vec2& position) {
        return Mover{position, Vec2::zero()};
    }
};

int main() {
    Vec2 pos(2.2, 2.99);
    Vec2 vel(3.1, 4.1);

    Mover moving(pos, vel);
    Mover still = Mover::stationary(pos);

    moving.step(1.2);

    moving.print();
    still.print();

    std::cout << "distance: " << Mover::distance(moving, still) << '\n';

    return 0;
}
