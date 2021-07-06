#include <iostream>
using namespace std;

class MyIntStack{
    int *p;
    int size;
    int tos;
public:
    MyIntStack();
    MyIntStack(int size);
    MyIntStack(const MyIntStack& s);
    ~MyIntStack();
    bool push(int n);
    bool pop(int &n);
};

MyIntStack::MyIntStack() {
    tos = 0;
    size = 1;
    p = new int[size];
}

MyIntStack::MyIntStack(int size){
    this->size = size;
    p = new int[size];
    tos = 0;
}

MyIntStack::MyIntStack(const MyIntStack &s) {
    this->p = new int[s.size];
    this->size = s.size;
    this->tos = s.tos;
    for(int i=0; i<=s.tos; i++) {
        this->p[i] = s.p[i];
    }
    
}

bool MyIntStack::push(int n){
    if (tos > size)
        return false;
    else{
        p[tos] = n;
        tos++;
        return true;
    }
}

bool MyIntStack::pop(int &n){
    tos--;
    if (tos < 0)
        return false;
    else{
        n = p[tos];
        return true;
    }
}

MyIntStack::~MyIntStack() {
    delete []p;
}

int main() {
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a;
    b.push(30);

    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값 " << n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값 " << n << endl;
}
