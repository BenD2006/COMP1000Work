#include <iostream>

using namespace std;

int main() {
    int value1 = 68;
    int*ptr = &value1;
    cout << ptr << endl;
    cout << *ptr << endl;

    *ptr = 99;
    cout << value1 << endl;
}