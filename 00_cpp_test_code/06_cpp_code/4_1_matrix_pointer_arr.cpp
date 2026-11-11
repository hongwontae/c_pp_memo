#include <iostream>


int main (void) {

    using namespace std;

    int arr_1 [][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout << arr_1 << endl;
    cout << arr_1[1] << endl; 
    cout << arr_1[2] << endl;

    cout << endl;
    
    cout << &arr_1[0][2] << endl;
    cout << &arr_1[1][0] << endl;

    cout << endl;

    cout << arr_1 <<endl;
    cout << arr_1+1 <<endl;
    


    return 0;
}