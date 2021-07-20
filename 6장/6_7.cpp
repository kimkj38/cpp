#include <iostream>
using namespace std;

class Random{
public:
    static void seed() { srand((unsigned)time(0)); }
    static int nextInt(int min=0, int max=32868);
    static char nextAlphabet();
    static double nextDouble();
};

int Random::nextInt(int min, int max) {
    return (rand() % (max-min+1)) + min;
}

char Random::nextAlphabet() {
    int type = rand() % 2;
    if (type==0) {
        return 'a' + rand() % 26;
    } else {
        return 'A' + rand() % 26;
    }
}

double Random::nextDouble() {
    return (double)rand() / RAND_MAX;
}

int main() {
    cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다." << endl;
    Random::seed();
    for (int i=0; i<10; i++) {
        cout << Random::nextInt(1,100) << ' ';
    }
    cout << endl;
    
    cout << "알파벳을 랜덤하게 10개를 출력합니다." << endl;
    for (int i=0; i<10; i++) {
        cout << Random::nextAlphabet() << ' ';
    }
    cout << endl;

    cout << "랜덤한 실수를 10개를 출력합니다" << endl;
    for (int i=0; i<10; i++) {
        cout << Random::nextDouble() << ' ';
        if (i==4) cout << endl;
    }
    cout << endl;
}
