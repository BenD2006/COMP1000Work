#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inputFile("inputFile.txt");
    ofstream outputFile("outputFile.txt");
    char character;
    if (inputFile.is_open() && outputFile.is_open()) {
        while (inputFile.get(character)) {
            outputFile.put(character);
        }
        inputFile.close();
        outputFile.close();
    }
}