#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 25; // Declaring a variable that has the data type integer and contains the inital value of 25
    float grade = 99.5f; // Declaring a variable that has the data type float and contains the inital value of 99.5
    char character = 'a'; // Declaring a variable that has the data type char and contains the inital value of a
    string outputString = "This is a test string"; // Declaring a variable that has the data type string and contains the inital value of 'This is a test string'
//Initalising a new value in variables
    age = 50; 
    grade = 40.5f;
    character = 'c';
    outputString = "New Test String";
 // Outputting all the variables to the console, adding a new line at the end of each (endl is a new line at the end of each statement)
    cout << age << endl;
    cout << grade << endl ;
    cout << character << endl;
    cout << outputString << endl;

}