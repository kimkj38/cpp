#include <iostream>
using namespace std;

int main() {
  for (int i=1; i<101; i++){
    if (i%10 == 0) {
      cout << i << "\n";
    } else {
      cout << i << "\t";
    }
  }
}