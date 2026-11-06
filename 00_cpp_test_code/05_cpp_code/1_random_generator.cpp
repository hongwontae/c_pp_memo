#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

unsigned int PRNG()
{

    static unsigned int seed = 5523;
    seed = 8253729 * seed + 2396403;
    return seed % 32768;
}

int getRandomNuber (int min, int max) {

    static const double fraction = 1.0 / (RAND_MAX + 1.0);

    return min + static_cast<int>((max - min + 1) * (std :: rand() * fraction));

}

int main(void)
{

    // std :: srand(static_cast<unsigned int> (std :: time(0)));

    // for (int i = 0; i < 100; ++i)
    // {

    //     std::cout << getRandomNuber(0, 10) << "\t";

    //     if (i % 5 == 0)
    //     {
    //         std::cout << std::endl;
    //     }
    // }

    std :: random_device rd;
    std :: mt19937 mesenne(rd()); // create a messene twister
    std :: uniform_int_distribution<> dice (1,6);

    for (int count = 1; count <=20; ++count) {
        std :: cout << dice(mesenne) << std :: endl;
    }





    return 0;
}