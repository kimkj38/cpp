#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius=0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14*radius*radius; }
};

class NamedCircle: public Circle{
    string name;
public:
    NamedCircle(){ ; }
    NamedCircle(int r, string n){
        setRadius(r);
        name = n;
    }
    void setName(string name) { this->name = name; }
    string getName() { return name; }
};

int main(){
    cout << "5개의 정수 반지름과 원의 이름을 입력하세요" << endl;
    NamedCircle pizza[5];
    int r;
    string name;
    for(int i=0; i<5; i++){
        cout << i+1 << ">> ";
        cin >> r >> name;
        pizza[i].setRadius(r);
        pizza[i].setName(name);
    }
    double maxArea=0;
    string maxName;
    for (int i=0; i<5; i++){
        if(pizza[i].getArea()>maxArea){
            maxArea = pizza[i].getArea();
            maxName = pizza[i].getName();
        }
    }
    cout << "가장 면적이 큰 피자는 " << maxName << "입니다." << endl;
    
}
