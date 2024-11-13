#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a choice: 1. Addition, 2. Subtraction, 3. Multiplication, 4. Division: ";
    cin >> choice;
    int num1, num2;
    float result;
    cout << "Enter the first number, followed by the second one: " << endl;
    cin >> num1;
    cin >> num2;
    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << result << endl;
            break;
        case 4:
            result = num1 / num2;
            cout << result << endl;
            break;
        default: 
            cout << "Invalid";
        
    }
}