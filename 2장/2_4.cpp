#include <iostream>
using namespace std;

int main() {
    cout << "5개의 실수를 입력하라>>";
    double a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    cout << "제일 큰 수 = ";
    double max = a[0];
    for (int i=0; i<5; i++)
        if (a[i]>max)
            max = a[i]; 
    cout << max;
}
