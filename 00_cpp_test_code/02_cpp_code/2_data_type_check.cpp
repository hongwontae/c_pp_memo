#include <iostream>

int main(void) {

    float f;
    double d;
    double long ld;
    long double lld;

    std :: cout << "size ->" << sizeof(f) << std :: endl;
    std :: cout << "size ->" << sizeof(d) << std :: endl;
    std :: cout << "size ->" << sizeof(ld) << std :: endl;
    std :: cout << "size ->" << sizeof(lld) << std :: endl;
    std :: cout << 31.14e1 << std :: endl;

    return 0;
}