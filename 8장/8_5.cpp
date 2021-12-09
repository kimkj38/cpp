#include <iostream>
using namespace std;

class BaseArray{
private:
    int capacity;
    int *mem;
protected:
    BaseArray(int capacity=100){
        this->capacity = capacity; mem = new int[capacity];
    }
    ~BaseArray() { delete []mem; }
    void put(int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
};

class MyQueue: public BaseArray{
    int front=0;
    int rear=0;
public:
    MyQueue(int n): BaseArray(n) {;}
    void enqueue(int n){
        if(rear>getCapacity()){
            cout << "Queue is full" << endl;
        }
        else{
            rear++;
            put(rear, n);
        }
    }
    int capacity() { return getCapacity(); }
    int length() { return rear; }
    int dequeue(){
        if(rear<0){
            cout << "Queue is empty" << endl;
        }
        else{
            front++;
            rear--;
            return get(front);
        }
    }
};
