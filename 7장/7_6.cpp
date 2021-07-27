//문제1

#include <iostream>
using namespace std;

class Matrix {
    int num[4];
public:
    Matrix() {;}
    Matrix(int a, int b, int c, int d) {
        num[0] = a; num[1] = b; num[2] = c; num[3] = d;
    }
    void show();
    Matrix operator+ (Matrix b);
    Matrix operator += (Matrix& b);
    bool operator== (Matrix c);
};

Matrix Matrix::operator+ (Matrix b){
    Matrix t;
    for (int i = 0; i < 4; i++)
    {
        t.num[i] = this->num[i] + b.num[i];
    }
    return t;
}

Matrix Matrix::operator+= (Matrix& b) {
    for (int i=0; i<4; i++) {
        this->num[i] += b.num[i];
    }
    return *this;
}

bool Matrix::operator== (Matrix c) {
    for (int i=0; i<4; i++) {
        if(this->num[i] == c.num[i]);
        else
            return false;
    }
    return true;
}

void Matrix::show() {
    cout << "Matrix = { ";
    for (int i=0; i<4; i++) {
        cout << this->num[i] << ' ';
    }
    cout << "}" << endl;
}

int main(){
    Matrix a(1,2,3,4), b(2,3,4,5), c;
    c = a + b;
    a += b;
    a.show(); b.show(); c.show();
    if (a == c)
        cout << "a and c are the same" << endl;
}

//문제2
#include <iostream>
using namespace std;

class Matrix {
    int num[4];
public:
    Matrix() {;}
    Matrix(int a, int b, int c, int d) {
        num[0] = a; num[1] = b; num[2] = c; num[3] = d;
    }
    void show();
    friend Matrix operator+ (Matrix a, Matrix b);
    friend void operator += (Matrix &a, Matrix& b);
    friend bool operator== (Matrix a, Matrix c);
};

Matrix operator+ (Matrix a, Matrix b){
    Matrix t;
    for (int i = 0; i < 4; i++){
        t.num[i] = a.num[i] + b.num[i];
    }
    return t;
}

void operator+= (Matrix& a, Matrix& b) {
    for (int i=0; i<4; i++) {
        a.num[i] += b.num[i];
    }
}

bool operator== (Matrix a, Matrix c) {
    for (int i=0; i<4; i++) {
        if(a.num[i] == c.num[i]);
        else
            return false;
    }
    return true;
}

void Matrix::show() {
    cout << "Matrix = { ";
    for (int i=0; i<4; i++) {
        cout << this->num[i] << ' ';
    }
    cout << "}" << endl;
}

int main(){
    Matrix a(1,2,3,4), b(2,3,4,5), c;
    c = a + b;
    a += b;
    a.show(); b.show(); c.show();
    if (a == c)
        cout << "a and c are the same" << endl;
}
