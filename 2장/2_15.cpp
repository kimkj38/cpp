#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
    char operation[100];
    int a,b;
    char *symbol;

    while (true) {
        cout << "? ";
        cin.getline(operation, 100);
        
        a = atoi(strtok(operation, " "));
        symbol = strtok(NULL, " ");
        b = atoi(strtok(NULL, " "));
        
        if (*symbol == '+') {
            cout << a << " + " << b << " = " << a + b << endl;
        } else if (*symbol == '-') {
            cout << a << " - " << b << " = " << a - b << endl;
        } else if (*symbol == '*') {
            cout << a << " * " << b << " = " << a * b << endl;
        } else if (*symbol == '/') {
            cout << a << " / " << b << " = " << a / b << endl;
        } else if (*symbol == '%') {
            cout << a << " % " << b << " = " << a % b << endl;
        }
    }
}
