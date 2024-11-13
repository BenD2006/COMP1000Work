#include <iostream>
using namespace std;

void trackFunctionCalls() {
    static int callCount = 0;
    callCount++;
    cout << "function called " << callCount << " Times" << endl;
}

int main() {
    trackFunctionCalls();
    trackFunctionCalls();
    trackFunctionCalls();
    return 0;
}