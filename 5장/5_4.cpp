#include <iostream>
using namespace std;

bool bigger(int a, int b, int &big) {
    if (a == b) {
        return true;
    } else {
        big = max(a,b);
        return false;
    }
}

int main() {
    int a, b, B;
    cout << "두 개의 정수를 입력하세요 >> " << endl;
    cin >> a >> b;
    if (bigger(a, b, B)) {
        cout << "두 수가 같습니다." << endl;
    } else {
        cout << "둘 중 큰 수는 " << B << "입니다." << endl;
    }
    
}
