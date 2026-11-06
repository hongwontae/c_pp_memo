#include <iostream>
#include <typeinfo>

int main() {
    signed char a = -128;
    signed char b = -1;

    auto result1 = a + b;
    signed char result2 = a + b;

    std::cout << result1 << '\n';
    std::cout << static_cast<int>(result2) << '\n';

    return 0;
}