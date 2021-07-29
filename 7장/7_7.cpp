//문제 1
#include <iostream>
using namespace std;

class Matrix {
    int arr[4];
public:    
    Matrix(int a, int b, int c, int d) { arr[0] = a; arr[1] = b; arr[2] = c; arr[3] = d; }
    Matrix() {;}
    void show();
    void operator>> (int x[]);
    void operator<< (int y[]);
};

void Matrix::operator>> (int x[]) {
    for (int i=0; i<4; i++) {
        x[i] = arr[i];
    }
}

void Matrix::operator<< (int y[]){
    for (int i = 0; i < 4; i++){
        arr[i] = y[i];
    }
}

void Matrix::show() {
    cout << "Matrix = { ";
    for (int i = 0; i < 4; i++)
        cout << this->arr[i] << ' ';
    cout << "}" << endl;
}

int main() {
    Matrix a(4,3,2,1), b;
    int x[4], y[4] = {1,2,3,4};
    a >> x;
    b << y;

    for (int i=0; i<4; i++) cout << x[i] << ' ';
    cout << endl;
    b.show();
}

//문제2
#include <iostream>
using namespace std;

class Matrix {
    int arr[4];
public:    
    Matrix(int a, int b, int c, int d) { arr[0] = a; arr[1] = b; arr[2] = c; arr[3] = d; }
    Matrix() {;}
    void show();
    friend void operator>> (Matrix& a, int x[]);
    friend void operator<< (Matrix& b, int y[]);
};

void operator>> (Matrix& a, int x[]) {
    for (int i=0; i<4; i++) {
        x[i] = a.arr[i];
    }
}

void operator<< (Matrix& b, int y[]){
    for (int i = 0; i < 4; i++){
        b.arr[i] = y[i];
    }
}

void Matrix::show() {
    cout << "Matrix = { ";
    for (int i = 0; i < 4; i++)
        cout << this->arr[i] << ' ';
    cout << "}" << endl;
}

int main() {
    Matrix a(4,3,2,1), b;
    int x[4], y[4] = {1,2,3,4};
    a >> x;
    b << y;

    for (int i=0; i<4; i++) cout << x[i] << ' ';
    cout << endl;
    b.show();
}
