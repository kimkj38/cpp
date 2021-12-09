#include <iostream>
using namespace std;

class AbstractStack{
public:
    virtual bool push(int n) = 0;
    virtual bool pop(int& n) = 0;
    virtual int getsize() = 0;
};

class IntStack:public AbstractStack{
    int *p;
    int top;
    int max;
public:
    IntStack(int max){ 
        this->max = max;
        p = new int[max]; 
        top=0; 
    }
    
    virtual int getsize() { return top; }
    
    virtual bool push(int n){
        if(top<max){
            p[top] = n;
            top++;
            return true;
        }
        else{
            cout << "stack is full" << endl;
            return false;
        }
    }
    bool pop(int& n){
        if(top>=0){
            top--;
            n = p[top];
            return true;
        }
        else{
            cout << "stack is empty" << endl;
            return false;
        }
    }
};

int main(){
    int out;
    IntStack intstack(10);
    intstack.push(10);
    intstack.push(20);
    intstack.push(30);
    cout << "현재 원소개수: " << intstack.getsize() << "개" << endl;
    intstack.pop(out);
    cout << "pop: " << out << endl;
    intstack.pop(out);
    cout << "pop: " << out << endl;
    cout << "현재 원소개수: " << intstack.getsize() << "개" << endl;
}
