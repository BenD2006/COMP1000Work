#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char*str = new char[20];
    cout << "Enter a string max 19 characters: ";
    cin.getline(str,20);

    cout << "You entered: " << str << endl;
    cout << "length of the string: " << strlen(str) << endl;

    delete[] str; 
    return 0;
}