#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}
int main() {
    int a = 15, b = 20;
    cout << "Unswapped Numbers: " << "a = " << a << " b = " << b << endl;
    swapNumbers(a,b);
    cout << "Swapped Numbers: " << "a = " << a << " b = " << b << endl;
    return 0;
}