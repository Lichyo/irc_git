#include <iostream>
#include <string>
using namespace std;

int main() {
    int condition = 10;
    for(int i = 0; i < condition; i++) {
        cout << i << endl;
    }

    while(condition < 0) {
        cout << condition << endl;
        condition--;
    }
}