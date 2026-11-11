#include <iostream>

int main(void)
{

    using namespace std;

    int arr[] = {10, 20, 30};

    for (int value : arr)
    {
        cout << value << endl;
    }

    cout << endl;

    for (int &value : arr)
    {
        value += 10;
    }

    for (int value : arr)
    {
        cout << value << endl;
    }

    return 0;
}