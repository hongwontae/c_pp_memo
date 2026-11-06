#include <iostream>
#include <vector>
#include <typeinfo>
#include <cstdint>

int main () {

    using namespace std;

    typedef double distanc_t;

    distanc_t kk = 3.14;

    using Integer = int;

    Integer bb = 10;

    cout << bb << endl;
    cout << typeid(bb).name() << endl;

    cout << typeid(kk).name() << endl;

    return 0;

}