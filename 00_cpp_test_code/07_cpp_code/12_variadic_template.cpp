#include <iostream>

template <typename... Args>
void print(Args... args) {
    ((std::cout << args << ' '), ...);
}

int main() {
    print(10, 20, 30);
    print("Hello", 123, 3.14);
}