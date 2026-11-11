#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void print_length(array<int, 5> *my_arr)
{
    cout << my_arr << endl;
}

int main()
{

    array<int, 5> my_arr = {1, 2, 3, 4, 5};

    // cout << my_arr[10] << endl;
    // cout << my_arr.at(10) << endl;

    // cout << &my_arr << endl;
    // cout << my_arr.size() << endl;

    // print_length(&my_arr);

    array<int, 6> arrr = {10, 30, 2, 31, 4, 24};

    for (auto element : arrr)
    {
        cout << element << endl;
    }

    cout << endl;

    sort(arrr.begin(), arrr.end());

    for (auto element : arrr)
    {
        cout << element << endl;
    }

    return 0;
}