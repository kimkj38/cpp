#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random{
    int n;
public:
    Random(int num);
    int next();
    int nextInRange(int a, int b);
};

Random::Random(int num){
    int n = num;
    srand((unsigned)time(0));
}

int Random::next(){
    int x = rand();
    if (n % 2 == 0) {
        if (x % 2 == 0)
            return x;
        else 
            return x-1;
    } else {
        if (x % 2 == 0)
            return x+1;
        else
            return x;
    }
}

int Random::nextInRange(int a, int b){
    int x = rand() % (b - a + 1) + a;
    if (n % 2 == 0) {
        if (x % 2 == 0)
            return x + 1;
        else
            return x;
    }else {
        if (x % 2 == 0)
            return x + 1;
        else
            return x;
    }
}

int main(){
    Random r1(2);
    Random r2(1);

    cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개;;" << endl;
    for (int i = 0; i < 10; i++){
        int n = r1.next();
        cout << n << ' ';
    }

    cout << endl << endl << "-- 2 에서 " << "9 까지의 홀수 랜덤 정수 10 개 --" << endl;
    for (int i = 0; i < 10; i++){
        int n = r2.nextInRange(2, 9);
        cout << n << ' ';
    }
    cout << endl;
}
