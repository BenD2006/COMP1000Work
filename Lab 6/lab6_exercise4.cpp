#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("test.txt");
    string line;
    if (!inputFile.is_open()) { 
        cerr << "Unable to open file." << endl; 
        return 1;
    }
    while (getline(inputFile, line)) { 
        if (inputFile.fail()) { 
            cerr << "Read error occurred." << endl; 
            inputFile.clear(); 
        } 
        std::cout << line << std::endl; 
    }
    if (inputFile.eof()) { 
        cout << "Reached end of file." << endl;
    } else { 
        cerr << "An unknown error occurred." << endl; 
    } 
    inputFile.close(); 
    return 0;
}