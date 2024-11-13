#include <iostream>
using namespace std;

int add2Numbers(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 4, num2 = 9;
    cout << "SUM: " << add2Numbers(num1, num2) << endl;
    num1 = 7, num2 = 11;
    cout << "SUM: " << add2Numbers(num1, num2) << endl;
    return 0;
}