#include <iostream>
#include <cmath> 
using namespace std;

float calculateDistance(float x1, float y1, float x2, float y2) {
    int tempPowers1 = (pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return sqrt(tempPowers1);
}

int main() {
    float x1, x2, y1, y2;
    cout << "Enter first coordinate, separated by a space:";
    cin >> x1 >> y1;
    cout << "Enter second coordinate, separated by a space:";
    cin >> x2 >> y2;
    float eDistance = calculateDistance(x1,y1,x2,y2);
    cout << "Euclidian Distance: " << eDistance << endl;
    return 0;
}