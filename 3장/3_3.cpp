#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string name;
    int id, balance;
public:
    Account(string s, int a, int b);
    void deposit(int a);
    string getOwner();
    double inquiry();
    double withdraw(int a);

};

Account::Account(string s, int a, int b) {
    name = s;
    id = a;
    balance = b;
}

void Account::deposit(int a) {
    balance += a;
}

string Account::getOwner() {
    return name;
}

double Account::inquiry() {
    return balance;
}

double Account::withdraw(int a) {
    balance -= a;
    return a;
}

int main(){
    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout << a.getOwner() << "의 잔액은" << a.inquiry() << endl;
    int money = a.withdraw(20000);
    cout << a.getOwner() << "의 잔액은" << a.inquiry() << endl;
}
