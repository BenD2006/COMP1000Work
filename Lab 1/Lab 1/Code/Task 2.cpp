#include <iostream>
using namespace std;

int main() {
    int number1;
    int number2;
    cout << "Input the first number: ";
    cin >> number1;
    cout << "Input the second number: ";
    cin >> number2;
    int addNumbers = number1 + number2;
    int subtractNumbers = number1 - number2;
    int multiplyNumbers = number1 * number2;
    float divideNumbers = float(number1) / float(number2);
    int modulusNumbers = number1 % number2;
    cout << "Addition: " << addNumbers << endl;
    cout << "Subtraction: " << subtractNumbers << endl;
    cout << "Multiplication: " << multiplyNumbers << endl;
    cout << "Division: " << divideNumbers << endl;
    cout << "Modulus" << modulusNumbers << endl;
}