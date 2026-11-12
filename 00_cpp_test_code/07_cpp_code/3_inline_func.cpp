#include <iostream>

using namespace std;


inline int add (int a, int b) {


    return a+b;

}


int main (void) {

    int k = add(10, 20);

    cout << k << endl;


    return 0;
}