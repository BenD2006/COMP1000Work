#include <iostream>
using namespace std;

int main() {
    int temperature;
    cout << "Enter a value for the temperature: ";
    cin >> temperature;
    if (temperature < 0) {
        cout << "Its Freezing" << endl;
    } else if (temperature > 0) {
        if (temperature < 15) {
            cout << "Its Cold." << endl;
        } else if (temperature > 15) {
            if (temperature < 30) {
                cout << "Its Warm" << endl;
            } else {
                cout << "Its Hot" << endl;
            }
        }
    }
}