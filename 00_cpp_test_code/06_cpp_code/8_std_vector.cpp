#include <iostream>
#include <vector>

int main() {
    using namespace std;

    vector<int> arr;

    cout << "vector 객체 주소: " << &arr << '\n';
    cout << "sizeof(vector): " << sizeof(arr) << '\n';

    cout << "\n요소 추가 시작\n";

    for (int i = 0; i < 10; ++i) {
        arr.push_back(i * 10);

        cout << "size: " << arr.size()
             << ", capacity: " << arr.capacity()
             << ", data: " << arr.data()
             << '\n';
    }

    cout << "\n각 요소의 주소\n";

    for (size_t i = 0; i < arr.size(); ++i) {
        cout << "arr[" << i << "] = " << arr[i]
             << ", address: " << &arr[i]
             << '\n';
    }

    return 0;
}