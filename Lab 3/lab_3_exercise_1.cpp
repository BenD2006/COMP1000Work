#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "You are old enough to vote" << endl;
    } else {
        cout << "You are not old enough to vote" << endl;
    }
}