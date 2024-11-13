#include <iostream>

using namespace std;

int sum(int numbers[10]) {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += numbers[i];
        cout << sum << endl;
    }
    return sum;
}

int main() {
    int numbers[10];
    for (int i = 1; i <= 10; i++) {
        numbers[i] = i;
    }
    int total = sum(numbers);
    int average = total / 10;
    cout << total << endl;
    cout << "Average: " << average << endl;

}

