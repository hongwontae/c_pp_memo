#include <iostream>
using namespace std;

using func_ptr = int (*) (int, int);

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

void calculate(int a, int b, func_ptr func) {
    cout << func(a, b) << endl;
}

int main() {

    calculate(10, 20, add);
    calculate(10, 20, multiply);

    return 0;
}