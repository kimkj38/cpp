//문제1
#include <iostream>
using namespace std;

class Color {
    int red, green, blue;
public:
    Color() {;}
    Color (int x, int y, int z) { red = x, green = y, blue = z; }
    void show() {cout << red << ' ' << green << ' ' << blue << endl;}
    Color operator+ (Color b);
    bool operator== (Color b);
};

Color Color::operator+(Color b){
    Color c;
    c.red = this->red + b.red;
    c.green = this->green + b.green;
    c.blue = this->blue + b.blue;
    return c;
}

bool Color::operator== (Color b) {
    if (this->red == b.red && this->green == b.green && this->blue == b.blue) {
        return true;
    return false;
    }
}

int main() {
    Color red(255, 0, 0), blue(0, 0, 255), c;
    c = red + blue;
    c.show();

    Color fuchsia(255, 0, 255);
    if (c == fuchsia)
        cout << "보라색 맞음";
    else
        cout << "보라색 아님";
}

//문제2
#include <iostream>
using namespace std;

class Color {
    int red, green, blue;
public:
    Color() {;}
    Color (int x, int y, int z) { red = x, green = y, blue = z; }
    void show() {cout << red << ' ' << green << ' ' << blue << endl;}
    friend Color operator+ (Color a, Color b);
    friend bool operator== (Color a, Color b);
};

Color operator+(Color a, Color b){
    Color c;
    c.red = a.red + b.red;
    c.green = a.green + b.green;
    c.blue = a.blue + b.blue;
    return c;
}

bool operator== (Color a, Color b) {
    if (a.red == b.red && a.green == b.green && a.blue == b.blue) {
        return true;
    return false;
    }
}

int main() {
    Color red(255, 0, 0), blue(0, 0, 255), c;
    c = red + blue;
    c.show();

    Color fuchsia(255, 0, 255);
    if (c == fuchsia)
        cout << "보라색 맞음";
    else
        cout << "보라색 아님";
}
