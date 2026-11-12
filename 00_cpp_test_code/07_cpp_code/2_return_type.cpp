#include <iostream>
#include <tuple>

using namespace std;

tuple<int, float> tu_re (int a, float b) {
    
    return tuple <int, float> {a, b};

}


int main (void) {

    int a = 10;
    float b = 10.2;

    auto [c, d] = tu_re(a,b);

    cout << c << endl;
    cout << d << endl;


    return 0;
}