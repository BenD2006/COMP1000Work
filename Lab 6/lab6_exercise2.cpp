#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ifstream inputFile("myFile.txt");
    int id;
    string name;
    if (inputFile.is_open()) {
        while(inputFile >> setw(10) >> name >> setw(5) >> id) {
            cout << id << "" << name << endl;
        }
        inputFile.close();
    } else {
        return 1;
    }
    return 0;
}