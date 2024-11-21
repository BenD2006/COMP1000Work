#include <iostream>

using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s) : first(f), second(s) {}

    T1 getFirst() { return first; }
    T2 getSecond() { return second; }

    void displayPair() {
        cout << "First = " << first << ", Second = " << second << endl;
    }
};

int main() {
    Pair<int, double> intDoublePair(10, 20.5);
    intDoublePair.displayPair();

    Pair<string, char> stringCharPair("Hello", 'A');
    stringCharPair.displayPair();

    return 0;
}
