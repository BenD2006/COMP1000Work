#include <iostream>

using namespace std;


template <typename T>
class Box {
    private:
        T value;
    
    public:
        Box(T v): value(v) {}

        T getValue() {
            return value;
        }
};


int main() {
    Box<int> intBox(10);
    Box<double> dBox(5.8);
    Box<string> sBox("Hello World");

    cout << "Int box value: " << intBox.getValue() << endl;
    cout << "Double box value: " << dBox.getValue() << endl;
    cout << "String box value: " << sBox.getValue() << endl;

    return 0;
}