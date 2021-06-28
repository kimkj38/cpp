#include <iostream>
using namespace std;

class Circle{
    int radius;

public:
    void setRadius(int radius);
    double getArea();
};

void Circle::setRadius(int radius){
    this->radius = radius;
}

double Circle::getArea(){
    return radius * radius * 3.14;
}

int main(){
    int r, num, circle;
    
    cout << "원의 개수 >> ";
    cin >> circle;
    
    Circle *pArray = new Circle[circle];
    for (int i = 0; i < circle; i++){
        cout << "원 " << i + 1 << "의 반지름 >> ";
        cin >> r;
        pArray[i].setRadius(r);
        if (pArray[i].getArea() > 100){
            num++;
        }
    }
    cout << "면적이 100보다 큰 원은 " << num << "개 입니다";
    delete[] pArray;
}
