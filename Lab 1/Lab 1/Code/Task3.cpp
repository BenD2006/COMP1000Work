#include <iostream>
using namespace std;

int globalVariable = 1;

void function() {
    int localVariable = 1;
    static int staticVariable = 1;

    localVariable++;
    staticVariable++;
    globalVariable++;

    cout << " Local: " << localVariable << " Global: " << globalVariable << " Static: " << staticVariable << endl;
}

int main() {
    function();
    function();
    function();
    return 0;
}