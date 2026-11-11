#include <iostream>

using namespace std;



int main (void) {

    int * arr = new int[3];

    cout << arr << endl;
    cout << arr + 1 << endl;
    cout << arr + 2 << endl;

    cout << endl;

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;

    delete [] arr;


    return 0;
}