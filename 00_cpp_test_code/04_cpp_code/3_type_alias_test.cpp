#include <iostream>
#include <vector>
#include <typeinfo>
#include <cstdint>

int main () {

    using namespace std;

    typedef double distanc_t;

    distanc_t kk = 3.14;

    cout << typeid(kk).name() << endl;

    return 0;

}