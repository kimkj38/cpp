#include <iostream>
using namespace std;

class Stack {
    int stack[10];
    int top;
public:
    Stack() {top = 0;}
    Stack &operator <<(int x) {
        stack[top] = x;
        top++;
        return *this; 
    }
    
    bool operator !() {
        if (top) 
            return false;
        return true;
    }

    Stack operator >>(int& x) {
        x = stack[top-1];
        top--;
        return *this;
    }

};

int main() {
    Stack stack;
    stack << 3 << 5 << 10;
    while(true) {
        if(!stack) break;
        int x;
        stack >> x;
        cout << x << ' ';
    }
cout << endl;
}
