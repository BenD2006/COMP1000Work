#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    ofstream outputFile("myFile.txt");
    if (outputFile.is_open()) {
        outputFile << setw(10) << "Name" << setw(5) << "id" << endl;
        outputFile << setw(10) << "Joe" << setw(5) << 10 << endl;
        outputFile << setw(10) << "Paul" << setw(5) << 11 << endl;
        outputFile << setw(10) << "Katy" << setw(5) << 12 << endl;
        outputFile.close();
    } else {
        return 1;
    }
    return 0;
}