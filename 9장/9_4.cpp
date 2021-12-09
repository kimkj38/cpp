#include <iostream>
using namespace std;

class LoopAdder{
    string name;
    int x,y,sum;
    void read();
    void write();
protected:
    LoopAdder(string name=""){
        this->name = name;
    }
    int getX() { return x; }
    int getY() { return y; }
    virtual int calculate() = 0;
public:
    void run();
};

void LoopAdder::read(){
    cout << name << ":" << endl;
    cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
    cin >> x >> y;
}

void LoopAdder::write() {
    cout << x << "에서" << y << "까지의 합 = " << sum << " 입니다" << endl;
}

void LoopAdder::run() {
    read();
    sum = calculate();
    write();
}

class WhileLoopAdder:public LoopAdder{
    int sum;
public:
    WhileLoopAdder(string s): LoopAdder(s){
        sum = 0;
    }
    int calculate() {
        int i = getX();
        while(true){
            if(i>getY())
                 break;
            else
                sum += i;
                i++;
        }
        return sum;
    }
};

class DoWhileLoopAdder : public LoopAdder{
    int sum;
public:
    DoWhileLoopAdder(string s) : LoopAdder(s){ sum=0; }
    int calculate(){
        int i = getX();
        do{
            sum += i;
            i++;
        } while (i <= getY());
        return sum;
    }
};

int main() {
    WhileLoopAdder whileLoop("While Loop");
    DoWhileLoopAdder doWhileLoop("Do while Loop");

    whileLoop.run();
    doWhileLoop.run();
}
