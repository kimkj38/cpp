#include <iostream>
using namespace std;

class Histogram {
    string text;
public:
    Histogram(string s);
    void put(string s);
    void putc(char c);
    void print();
};

Histogram::Histogram(string s) {
    text = s;
    cout << s;
}

void Histogram::put(string s) {
    text += s;
    cout << s;
}

void Histogram::putc(char c) {
    text += c;
    cout << c;
}

void Histogram::print() {
    int alpha[26] = {0};
    int num=0;
    for (int i=0; i<text.length(); i++) {
        if (isalpha(text[i])) {
            char c = tolower(text[i]);
            alpha[c - 'a']++;
            num++;
        }
    }
    cout << endl << endl;
    cout << "총 알파벳 수 " << num;
    cout << endl << endl;
    for (int i=0; i<26; i++) {
        cout << char (i+'a') << " (" << alpha[i] << ")" << '\t' << ": ";
        for (int j=0; j<alpha[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }

}

int main(){
    Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
    elvisHisto.put("falling in love with you");
    elvisHisto.putc('-');
    elvisHisto.put("Elvis Presley");
    elvisHisto.print();
}
