#include <iostream>
#include <vector>

struct Particle {
    float x, y;
    float vx, vy;
    double mass;

    Particle(float x, float y, float vx, float vy, double mass)
        : x(x), y(y), vx(vx), vy(vy), mass(mass) {}

    void move(double dt) {
        x += vx * dt;
        y += vy * dt;
    }

    void printPos() const {
        std::cout << "Pos=(" << x << ", " << y << ") Vel=(" << vx << ", " << vy << ")\n";
    }
};

int main() {
    Particle particle1(8.2, 1.2, 5.32, 5.85, 100.20);
    Particle particle2(4.1, 5.8, 3.33, 8.55, 120.9);
    Particle particle3(12.0, 3.5, 4.35, 9.21, 150.11);

    std::vector<Particle> particles = {particle1, particle2, particle3};

    for (Particle& p : particles) {
        p.move(0.1);
        p.printPos();
    }
    return 0;
}
