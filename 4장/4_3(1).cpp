#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n = 0;
    cout <<"문자열 입력>>";
    getline(cin, s);
    for (int i=0; i < s.length(); i++) {
        if (s[i] == 'a') {
            n++;
        }
    }
    cout << "문자 a는 " << n << "개 있습니다."; 
}
