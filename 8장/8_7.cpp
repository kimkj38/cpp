#include <iostream>
using namespace std;

class BaseMemory{
    char *mem;
protected:
    BaseMemory(int size) { mem = new char[size]; }
    void set_mem(char* x){
        mem = x;
    }
    void put_mem(int i, char c){
        mem[i] = c;
    }
    char get_mem(int i){
        return mem[i];
    }
};

class ROM: public BaseMemory{
public:
    ROM(int capacity, char* arr, int size):BaseMemory(capacity){
        set_mem(arr);
    }
    char read(int i){
        return get_mem(i);
    }
};

class RAM: public BaseMemory{
public:
    RAM(int capacity):BaseMemory(capacity){;}
    void write(int i, char x){
        put_mem(i, x);
    }
    char read(int i){
        return get_mem(i);
    }
};

int main(){
    char x[5]={'h','e','l','l','o'};
    ROM biosROM(1024*10, x, 5);
    RAM mainMemory(1024*1024);

    for(int i=0; i<5; i++) mainMemory.write(i, biosROM.read(i));
    for(int i=0; i<5; i++) cout << mainMemory.read(i);
}
