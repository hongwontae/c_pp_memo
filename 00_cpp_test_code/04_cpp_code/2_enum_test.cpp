#include <iostream>
#include <typeinfo>

enum Color
{
    COLOR_BLACK = 10,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
};

enum class Fruit {

    APPLE,
    BANANA,

};

int main(void)
{
    Color BLACK = COLOR_BLACK;

    int a = COLOR_RED;
    // 이넘 클래스는 암시적 형변환 불가
    // int b = Fruit :: APPLE;

    if (BLACK == COLOR_BLACK) {
        std :: cout << "Black is mine" << std :: endl;
    }

    Fruit apple = Fruit ::APPLE;
    Fruit banana = Fruit ::BANANA;

    std :: cout << int(apple) << std :: endl;
    std :: cout << int(banana) << std :: endl;

    


    return 0;
}