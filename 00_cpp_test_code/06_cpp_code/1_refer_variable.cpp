#include <iostream>

int change_number (int &a) {
    a = 200;

    return 0;
}


int main (void) {

    using namespace std;

    int a = 10;
    const int &aa = a;

    change_number(a);

    cout << a << endl;
    cout << aa << endl;
    cout << &a << endl;
    cout << &aa << endl;


    return 0;
}