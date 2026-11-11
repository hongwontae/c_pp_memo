#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    int *arr[3] = {&a, &b, &c};

    cout << arr << endl;
    cout << arr+1 << endl;

    cout << endl;

    cout << arr[0] << endl;
    cout << arr[0] + 1 << endl;
    cout << arr[0] + 2 << endl;

    cout << endl;

    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl;

    
    return 0;
}