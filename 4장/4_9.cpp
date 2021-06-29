#include <iostream>
#include <string>
using namespace std;

class Person{
    string name;
    string tel;

public:
    Person();
    string getname() { return name; }
    string getTel() { return tel; }
    void set(string name, string tel);
};

Person::Person() {}

void Person::set(string N, string T) {
    name = N;
    tel = T;
}

int main(){
    string Name, Tel;
    cout << "이름과 전화 번호를 입력해 주세요" << endl;
    Person *pArray = new Person[3];
    for (int i = 0; i < 3; i++){
        cout << "사람 " << i + 1 << ">>";
        cin >> Name >> Tel;
        pArray[i].set(Name, Tel);
    }

    cout << "모든 사람의 이름은 ";
    for (int i = 0; i < 3; i++){
        cout << pArray[i].getname() << " ";
    }
    cout << endl;

    cout << "전화번호 검색합니다. 이름을 입력하세요>>";
    cin >> Name;

    cout << "전화번호는 ";
    for (int i = 0; i < 3; i++){
        if (pArray[i].getname() == Name){
            cout << pArray[i].getTel();
        }
    }
}
