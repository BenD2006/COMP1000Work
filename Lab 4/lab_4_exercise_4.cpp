#include <iostream>

using namespace std;

int main() {
    int array1[5] = {1,2,3,4,5};
    int*ptr = array1;
    for (int i=0; i < 5; i++) {
        //cout << *ptr << endl;
        *ptr += 2;
        cout << *ptr << endl;
        ptr++;
    }
}