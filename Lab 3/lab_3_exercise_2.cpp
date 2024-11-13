#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score;
    if (score < 60) {
        cout << "You got a grade F";
    } else if (score >=60) {
        cout << "You got a grade D";
    } else if (score >=70) {
        cout << "You got a grade C";
    } else if (score >=80) {
        cout << "You got a grade B";
    } else {
        cout << "You got a grade A";
    };
}