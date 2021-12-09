#include <iostream>
using namespace std;

class AbstractGate{
protected:
    bool x,y;
public:
    void set(bool x, bool y) {this->x=x; this->y=y;}
    virtual bool operation()=0;
};

class ANDGate:public AbstractGate{
public:
    ANDGate(){;}
    virtual bool operation(){
        if(x && y)
            return true;
        else
            return false;
    }
};

class ORGate : public AbstractGate{
public:
    ORGate() { ; }
    virtual bool operation(){
        if (x || y)
            return true;
        else 
            return false;
    }
};

class XORGate : public AbstractGate{
public:
    XORGate() { ; }
    virtual bool operation(){
        if (x != y)
            return true;
        else
            return false;
    }
};

int main(){
    ANDGate andGate;
    ORGate orGate;
    XORGate xorGate;

    andGate.set(true, false);
    orGate.set(true, false);
    xorGate.set(true, false);
    cout.setf(ios::boolalpha); // bool 값을 "true", "false" 문자열로 출력
    cout << andGate.operation() << endl;
    cout << orGate.operation() << endl;
    cout << xorGate.operation() << endl;
}
