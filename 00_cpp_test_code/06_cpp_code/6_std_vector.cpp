#include <iostream>
#include <vector>

using namespace std;

int main (void) {

    vector<int> arr(10);

    for (auto element : arr) {
        cout << element << endl;
    }

    cout << endl;

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;
    


    return 0;
}