#include <iostream>

using namespace std;

int main() {
    string string1 = "Hello World ";
    string string2 = "Hello Again World";
    string concatanatedString = string1 + string2;
    cout << concatanatedString << endl;
    int stringLength = concatanatedString.length();
    cout << stringLength << endl;

    if (string1 == string2) {
        cout << "Strings are equal";
    } else {
        cout << "Strings are not equal";
    }
}