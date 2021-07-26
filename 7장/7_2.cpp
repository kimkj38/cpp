//문제1
#include <iostream>
using namespace std;

class Book {
    string title;
    int price, pages;
public:
    Book(string title="", int price=0, int pages=0) {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }
    void show() {
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
    }
    string getTitle() { return title; }
    bool operator == (int a);
    bool operator==(string a);
    bool operator==(Book& a);
};

bool Book::operator==(int a){
    if(price == a)
        return true;
    return false;
}

bool Book::operator==(string a){
    if (title == a)
        return true;
    return false;
}

bool Book::operator==(Book& a){
    if (this->price == a.price && this->title == a.title)
        return true;
    return false;
}

int main() {
    Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
    if (a == 30000) cout << "정가 30000원" << endl;
    if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
    if (a == b) cout << "두 책이 같은 책입니다." << endl; 
}

//문제2
#include <iostream>
using namespace std;

class Book {
    string title;
    int price, pages;
public:
    Book(string title="", int price=0, int pages=0) {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }
    void show() {
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
    }
    string getTitle() { return title; }
    friend bool operator==(Book &b, int a);
    friend bool operator==(Book &b, string a);
    friend bool operator==(Book &b, Book& a);
};

bool operator==(Book& b, int a){
    if(b.price == a)
        return true;
    return false;
}

bool operator==(Book &b, string a){
    if (b.title == a)
        return true;
    return false;
}

bool operator==(Book &b, Book &a){
    if (b.price == a.price && b.title == a.title)
        return true;
    return false;
}

int main() {
    Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
    if (a == 30000) cout << "정가 30000원" << endl;
    if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
    if (a == b) cout << "두 책이 같은 책입니다." << endl; 
}
