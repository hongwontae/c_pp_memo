#include <iostream>

using namespace std;


int add (int a, int b) {
    return a + b;
}

int add (int a, int b = 30, int c = 50) {
    return a + b - c;
}


int main (void) {

    cout << add(30) << endl;

    return 0;
}