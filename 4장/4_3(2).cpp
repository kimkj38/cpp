#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n;
    int num = 0;
    int index = 0;
    
    cout << "문자열 입력>>";
    getline(cin, s);
    while (true) {
        n = s.find('a',index);
        if (n == -1) 
            break;
        else
            index = n+1;
            num++;
    }
    cout << "문자 a는 " << num << "개 있습니다." << endl;
}
