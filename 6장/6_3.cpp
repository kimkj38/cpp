//방법1
#include <iostream>
using namespace std;

int big(int x, int y) {
    int temp = max(x,y);
    if (temp > 100)
        return 100;
    else 
        return temp; 
}

int big(int x, int y, int z) {
    int temp = max(x,y);
    if (temp > z)
        return z;
    else
        return temp;
}

int main() {
    int x = big(3, 5);
    int y = big(300, 60);
    int z = big(30, 60, 50);
    cout << x << ' ' << y << ' ' << z << endl;
}

//방법2
#include <iostream>
using namespace std;

int big(int x, int y, int z=100) {
    int temp = max(x,y);
    if (temp > z)
        return z;
    else 
        return temp; 
}

int main() {
    int x = big(3, 5);
    int y = big(300, 60);
    int z = big(30, 60, 50);
    cout << x << ' ' << y << ' ' << z << endl;
}
