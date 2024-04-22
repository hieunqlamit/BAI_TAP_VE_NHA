#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

void passByValue(Point p) {
    cout << "Dia chi khi truyen tham tri: " << &p << endl;
}

void passByReference(Point &p) {
    cout << "Dia chi khi truyen tham chieu: " << &p << endl;
}

int main() {
    Point point = {10, 20};

    cout << "Dia chi cua point: " << &point << endl;
    passByValue(point);
    passByReference(point);
    return 0;
}