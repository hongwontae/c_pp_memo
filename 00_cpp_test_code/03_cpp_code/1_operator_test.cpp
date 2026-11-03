#include <iostream>


int main (void) {

    using namespace std;

    int a = 10;
    double b = 20;

    cout << sizeof(a) << sizeof(b) << endl;
    cout << sizeof(&a) << sizeof(&b) << endl;
    

    return 0;
}