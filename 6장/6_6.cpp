#include <iostream>
using namespace std;

class Arrayutility2{
public:
    static int* concat(int s1[], int s2[], int size);
    static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* Arrayutility2::concat(int s1[], int s2[], int size) {
    int* z = new int [size];
    for (int i=0; i<size/2; i++) {
        z[i] = s1[i];
    }
    for (int i=size/2, j=0; i<size; i++, j++){
        z[i] = s2[j];
    }   
    return z;
}

int* Arrayutility2::remove(int s1[], int s2[], int size, int &retSize){
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if (s1[i]==s2[j]) {
                s1[i] = NULL;
            }
        }
    }
    for (int i=0; i<size; i++) {
        if(s1[i] != NULL) retSize++;
    }

    int *z = new int[retSize];
    int n= 0;
    for (int i=0; i<size; i++) {
        if (s1[i] != NULL) {
            z[n] = s1[i]; 
            n++;
        }
    }
    if(retSize == 0) return NULL;
    else return z;
}

int main(){
    int x[5], y[5], retsize=0;
    cout << "정수를 5 개 입력하라. 배열 x에 삽입한다>>";
    for (int i=0; i<5; i++) {
        cin >> x[i];
    }

    cout << "정수를 5 개 입력하라. 배열 y에 삽입한다>>";
    for (int i = 0; i < 5; i++){
        cin >> y[i];
    }

    cout << "합친 정수 배열을 출력한다." << endl;
    int size = sizeof(x)/4 + sizeof(y)/4;
    int* c = Arrayutility2::concat(x, y, size);
    for(int i=0; i<size; i++) cout << c[i] << ' ';
    cout << endl;

    size = sizeof(x)/4;
    int *r = Arrayutility2::remove(x, y, size, retsize);
    cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retsize << endl;
    for (int i=0; i<retsize; i++) {
        cout << r[i] << ' ';
        cout << endl;
    }
}
