#include <iostream>


int main (void) {

    using namespace std;

    double a = 1.0;
    double b = 1.0;

    if (a == b) {
        cout << "a와 b는 같습니다." << endl;

    }  else {
        cout << "a와 b는 같지 않습니다." << endl;
    }


    double c = 2.0;
    double d = 2.0;

    double epsilon = 1e-9;

    if (abs(c-d) < epsilon) {
        cout << "두 값은 일치하는 것으로 갑시다." << endl;
    }


    return 0;
}