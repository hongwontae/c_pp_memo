#include <iostream>

using namespace std;


int add (int a, int b) {
    return a+b;
};
double add (double a, double b){
    return a+b;
};


int main (void ){

    int result_1 = add(20, 30);
    double result_2 = add(10.0, 20.25);

    cout << result_1 << endl;
    cout << result_2 << endl;


    return 0;
}