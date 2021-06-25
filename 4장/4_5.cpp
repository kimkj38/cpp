#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned)time(0));
    int n = rand();
    string text;
    cout << "아래에 한 줄을 입력하세요.(exit을 입력하면 종료합니다)" << endl;
    while (true) {
        getline(cin, text);
        if (text == "exit") break;
        
        int index = n % text.length();
        char alpha = (n % 26) + 97;
        text[index] = alpha;
        cout << text << endl;
    }
        
}
