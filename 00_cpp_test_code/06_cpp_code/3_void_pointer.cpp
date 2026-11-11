#include <iostream>


int main (void) {

    using namespace std;

    void * ptr;

    char a = 'c';
    int b = 10;
    float c = 20.0;

    ptr = &a;
    ptr = &b;
    ptr = &c;

    cout << c << endl;
    // cout << *ptr << endl; 
    cout << *((float *)ptr) << endl;
    cout << &c << endl;
    cout << ptr << endl;


    


    return 0;
}