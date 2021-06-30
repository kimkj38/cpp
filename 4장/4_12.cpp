#include <iostream>
using namespace std;

class Circle{
    int radius;
    string name;
public:
    void setCircle(string name, int radius);
    double getArea();
    string getName();
};

class CircleManager{
    Circle *p;
    int size;
    int radius;
    string name;
public:
    CircleManager(int size);
    ~CircleManager();
    void searchByName();
    void searchByArea();
};

void Circle::setCircle(string name, int radius) {
    this->name = name;
    this->radius = radius;
}

double Circle::getArea() {
    return 3.14 * radius * radius;
}

string Circle::getName() {
    return name;
}

CircleManager::CircleManager(int size) {
    p = new Circle[size];
    this -> size = size;
    for (int i=0; i<size; i++) {
        cout << "원 " << i+1 << "의 이름과 반지름 >> ";
        cin >> name >> radius;
        p[i].setCircle(name, radius);

    }
}

CircleManager::~CircleManager() {
    delete []p;
}

void CircleManager::searchByName() {
    string Name;
    cout << "검색하고자 하는 원의 이름 >> ";
    cin >> Name;
    for (int i=0; i<size; i++) {
        if (p[i].getName() == Name) {
            cout << Name << "의 면적은 " << p[i].getArea() << endl;
        }
    }
}

void CircleManager::searchByArea() {
    int Area;
    cout << "최소 면적을 정수로 입력하세요 >> ";
    cin >> Area;
    cout << Area << "보다 큰 원을 검색합니다." << endl;
    for (int i=0; i<size; i++) {
        if (p[i].getArea() > Area) {
            cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
        }
    }
}

int main() {
    int size;
    cout << "원의 개수 >> ";
    cin >> size;
    CircleManager CM(size);
    CM.searchByName();
    CM.searchByArea();
}
