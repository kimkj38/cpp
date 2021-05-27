#include <iostream>
using namespace std;

int main() {
    int choice, servings;
    cout << "***** 승리장에 오신 것을 환영합니다 *****" << endl;
    while (choice != 4) {
        cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>";
        cin >> choice;

        if (choice==1) {
            cout << "몇인분?";
            cin >> servings;
            cout << "짬뽕 " << servings << "인분 나왔습니다" << endl;

        } else if (choice==2){
            cout << "몇인분?";
            cin >> servings;
            cout << "짜장 " << servings << "인분 나왔습니다" << endl;
            
        } else if (choice==3) {
            cout << "몇인분?";
            cin >> servings;
            cout << "군만두 " << servings << "인분 나왔습니다" << endl;

        } else if (choice==4) {
            cout << "오늘 영업은 끝낫습니다" << endl;

        } else {
            cout << "다시 주문하세요!" << endl;
        }
    }
