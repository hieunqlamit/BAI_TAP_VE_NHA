#include <iostream>
#include <cstdlib>
#include <ctime>

// Định nghĩa cấu trúc dữ liệu cho tàu
struct Ship {
    std::string name;
    double x;
    double y;
    double speed;

    // Phương thức di chuyển tàu
    void move() {
        x += speed * ((double)rand() / RAND_MAX - 0.5);
        y += speed * ((double)rand() / RAND_MAX - 0.5);
    }
};
void display(const Ship& ship) {
    std::cout << ship.name << ": (" << ship.x << ", " << ship.y << ")\n";
}

int main() {
    srand(time(0));
    Ship ship1 = {"Ship 1", 0, 0, 1};
    Ship ship2 = {"Ship 2", 0, 0, 1};

    int loop = 0;
    while (loop < 10) {
        ship1.move();
        ship2.move();
        display(ship1);
        display(ship2);
        loop++;
    }

    return 0;
}