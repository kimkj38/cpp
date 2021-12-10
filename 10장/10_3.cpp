#include <iostream>
using namespace std;

template <typename T>
void reverseArray(T* x, int size){
    int j = size - 1;
    for (int i = 0; i<j; i++){
        T tmp = x[j];
        x[j] = x[i];
        x[i] = tmp;
        j--;
    }
}

int main(){
    int x[] = {1, 10, 100, 5, 4};
    reverseArray(x,5);
    for(int i=0; i<5; i++) cout << x[i] << ' ';
}
