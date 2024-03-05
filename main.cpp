#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void makeAPost(string img, string location, string datetime) {
    cout << img << endl;
    cout << location << endl;
    cout << datetime << endl;
}

int main() {
    string img = "img";
    string location = "Taipei";
    string datetime = "2024/ 03/ 05";
    makeAPost(img, location, datetime);
}