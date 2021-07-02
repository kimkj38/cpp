#include <iostream>
#include <cstdlib>
using namespace std;

class Player {
    string name;
public:
    void setName(string Name);
    string getName() {return name;}
};

class GamblingGame {
    Player *p = new Player[2];
public:
    GamblingGame();
    void setName();
    string ranNum(string Name);
    void start();
    ~GamblingGame() { delete []p;}
};

void Player::setName(string Name) {
    name = Name;
}

GamblingGame::GamblingGame() {
    cout << "***** 갬블링 게임을 시작합니다. *****" << endl;
    srand((unsigned)time(0));
}

void GamblingGame::setName() {
    string a, b;

    cout << "첫번째 선수 이름>>";
    cin >> a;
    p[0].setName(a);
    
    cout << "두번째 선수 이름>>";
    cin >> b;
    p[1].setName(b);
}

string GamblingGame::ranNum(string Name) {
    int r[3];
    cout << "\t\t";
    for (int i=0; i<3; i++) {
        r[i] = rand() % 3;
        cout << r[i] << "\t";
    }
    if(r[0]==r[1] && r[0]==r[2]) {
        Name += "님 승리!";
        return Name;
    }
    else
        return "아쉽군요!";
}

void GamblingGame::start() {
    string n;
    int i = 0;
    while(true) {
        string m;    
        cout << p[i % 2].getName() << ":" << endl;
        getline(cin, n);
        m = p[i % 2].getName();
        n = ranNum(n);
        if (n=="님 승리!") {
            cout << m+n;
            break;
        }
        else    
            cout << n << endl;
        i++;
    }
}

int main()
{
    GamblingGame game;
    game.setName();
    game.start();
}
