#include <iostream>

using namespace std;

int main() {
    int var = 10;
    int *ptr2 = &var;
    int** ptr_address = &ptr2;

    cout << "var address : " << &var << endl;
    cout << "ptr2 value : " << ptr2 << endl;
    cout << "ptr2 address : " << &ptr2 << endl;
    cout << "ptr_address value : " << ptr_address << endl;

    return 0;
}