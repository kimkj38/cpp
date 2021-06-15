#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[10000];
    int alpha[27] = {0};
    int tot=0;

    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
    cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
    cin.getline(text,10000,';');
    

    // 대문자 A~Z: 65~90
    // 소문자 a~z: 97~122
    for (int i=0; i<strlen(text); i++) {
        if(isalpha(text[i])) {
            if(text[i]<91)
                text[i] = tolower(text[i]);
                tot++;
                alpha[text[i] - 97]++;
        }
    }

    cout << "총 알파벳 수" << tot << endl << endl;
    for (int i=0; i<26; i++) { //알파벳의 개수가 26개
        cout << (char)(i+'a') << "(" << alpha[i] << ")"; //'a'는 97을 의미
        cout << "\t: ";
        for (int j=1; j<=alpha[i]; j++)
            cout << "*";
        cout << endl;
    }

}
