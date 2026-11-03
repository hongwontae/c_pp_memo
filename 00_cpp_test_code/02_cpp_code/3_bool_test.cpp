#include <iostream>

int main (void) {

    bool b1 = true;
    bool b2(false);
    bool b3{true};

    if (b1) {
        std :: cout << "This is True" << std :: endl;
    }

    std :: cout << b1 << b2 << b3 << std :: endl;

    


    return 0;
}