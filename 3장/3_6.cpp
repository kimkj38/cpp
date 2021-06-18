#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom
{
public:
    EvenRandom();
    int next();
    int nextInRange(int a, int b);
};

EvenRandom::EvenRandom()
{
    srand((unsigned)time(0));
}

int EvenRandom::next(){
    int x = rand();
    if (x%2 == 0) {
        return x;
    } else {
        return x-1;}
}

int EvenRandom::nextInRange(int a, int b){
    int x = rand() % (b - a + 1) + a;
    if (x % 2 == 0){
        return x;
    }else {
        return x - 1;
    }
}

int main(){
    EvenRandom r;

    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개;;" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.next();
        cout << n << ' ';
    }

    cout << endl << endl << "-- 2 에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
    for (int i = 0; i < 10; i++) {
        int n = r.nextInRange(2, 10);
        cout << n << ' ';
    }
    cout << endl;
}
