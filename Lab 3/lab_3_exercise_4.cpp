#include <iostream>
using namespace std;

int main() {
    cout << "1. Start Game" << endl << "2. Load Game" << endl << "3. Quit" << endl;
    int selection;
    cout << "Make Selection: ";
    cin >> selection;
    switch (selection) {
        case 1:
            cout << "Game Started";
            break;
        case 2:
            cout << "Load Game Selected";
            break;
        case 3:
            cout << "Exiting";
            break;
        default:
            cout << "Invalid option, try again";
    }
}