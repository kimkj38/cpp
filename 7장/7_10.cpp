#include <iostream>
using namespace std;

class Statistics {
    int *x;
    int cnt;
public:
    Statistics() {x = new int[10]; cnt=0;}
    ~Statistics() {delete[] x;}
    bool operator !() {
        if (this->x && this-> cnt ==0)
            return true;
        return false;}
    
    void operator~ () {
        for(int i=0; i<10; i++)
            cout << this->x[i] << ' ';
        cout << endl;
    }
    Statistics &operator<<(int a) {
        this->x[cnt] = a;
        cnt++;
        return *this;
    }

    void operator>>(int &avg) {
        avg = 0;
        for (int i = 0; i < cnt; i++)
            avg += x[i];
        avg /= cnt;
    }
};


int main() {
    Statistics stat;
    if(!stat) cout << "현재 통계 데이터가 없습니다." << endl;

    int x[5];
    cout << "5개의 정수를 입력하라>>";
    for(int i=0; i<5; i++) cin >> x[i];

    for(int i=0; i<5; i++) stat << x[i];
    stat << 100 << 200;
    ~stat;

    int avg;
    stat >> avg;
    cout << "avg=" << avg << endl;
}
