#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    int divisionNormal = number1 / number2;
    cout << "Result with implicit casting: " << divisionNormal << endl;

    float divisionCasting = static_cast<float>(number1) / number2;
    cout << "Result with explicit casting: " << divisionCasting << endl;

    return 0; 
}