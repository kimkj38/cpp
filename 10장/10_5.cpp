#include <iostream>
using namespace std;

template <typename T>
T *concat(T a[], T sizea, int b[], int sizeb){
    T* array = new T[sizea+sizeb];
    for(int i=0; i<sizea; i++){
        array[i] = a[i];
    }
    for(int i=0; i<sizeb; i++){
        array[i+sizea] = b[i];
    }
    return array;
}


int main(){
    int a[] = {1, 3, 5, 7, 9 };
    int b[] = {2, 54, 1, 6, 8, 47};
    int*c = concat(a,5,b,6);
    for(int i=0; i<11; i++){
        cout << c[i] << ' ';
    }
}
