#include <iostream>

using namespace std;

void call_by_value (int x) {

    x = 1000;
    
    cout << x << endl;
    cout << &x << endl;
}

void call_by_refer (int &x) {

    x = 200;
    cout << x << endl;
    cout << &x << endl;

}

void call_by_address (int * x) {

    *x = 1900;

    cout << x << endl;
    cout << *x << endl;

}


int main (void) {

    int a = 10;
    int b = 20;
    
    int c = 30;
    int * ptr = &c;

    cout << &a <<endl;
    call_by_value(a);

    cout << endl; 

    cout << b << endl;
    cout << &b << endl;
    call_by_refer(b);
    cout<< b << endl;

    cout << endl;

    cout << c << endl;
    cout << &c << endl;
    call_by_address(ptr);
    cout << c << endl;



    return 0;
}