#include <iostream>
using namespace std;

int main() {
    int withoutPrecedence = 10 + 8 * 4 / 8 - 4;
    cout << "Result without precedence: " << withoutPrecedence << endl;

    int withPrecedence = (10 + 8) * (4 / (8 - 4));
    cout << "Result with precedence: " << withPrecedence << endl;
}