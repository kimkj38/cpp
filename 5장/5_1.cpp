#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius=1; }
    Circle(int r) { radius = r;}
    double getArea() { return 3.14 * radius * radius; }
    void setRadius(int r) { radius = r; }
    int getRadius() { return radius; }
};

void swap(Circle &a, Circle &b) {
    int temp;
    temp = a.getRadius();
    a.setRadius(b.getRadius());
    b.setRadius(temp);
}

int main() {
    Circle a(5), b(10);
    cout << "swap 전 a의 반지름: " << a.getRadius() << " swap 전 b의 반지름: " << b.getRadius() << endl;
    swap(a, b);
    cout << "swap 후 a의 반지름: " << a.getRadius() << " swap 후 b의 반지름: " << b.getRadius() << endl;
}
