#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

template <typename T>
class Printer {
    public:
        void print(T value) {
            cout << "Value: " << value << endl;
        }

        void print1(int value) {
            cout << "Double of " << value << ":" << value *2 << endl;

        }

        void print2(string value) {
         transform(value.begin(), value.end(), value.begin(), ::toupper);
         cout << "Upper case of " << value << "=" << value << endl;  
        }
};
int main() {
    Printer<int> intPrinter;
    intPrinter.print(60);

    Printer<string> stringPrinter;
    stringPrinter.print("Hello World");

    return 0;
}