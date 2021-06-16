#include <iostream>
#include <cstring>
using namespace std;

class Date {
private:
    int Year, Month, Day;

public:
    Date(int y, int m, int d);
    Date(string s);
    void show();
    int getYear();
    int getMonth();    
    int getDay();
};

Date::Date(int y,int m, int d) {
    Year = y;
    Month = m;
    Day = d;
}

// stoi는 문자열을 숫자로 변환
// substr(a,b)는 string의 일부를 잘라 리턴. a는 시작 인덱스, b는 자를 문자열의 크기
Date::Date(string s) {
    Year = stoi(s.substr(0,4));
    Month = stoi(s.substr(5, 1));
    Day = stoi(s.substr(7, 2));
}

void Date::show() {
    cout << Year << "년" << Month << "월" << Day << "일" << endl;
}

int Date::getYear() {
    return Year;
}

int Date::getMonth(){
    return Month;
}

int Date::getDay(){
    return Day;
}

int main() {
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}
