#include <iostream>
using namespace std;

int main() {
    cout << "두 수를 입력하라>>";
    int a,b;
    cin >> a >> b;
    cout << "큰수 = ";
    if (a>b) {
        cout << a;
    } else {
        cout << b;
    }

}
