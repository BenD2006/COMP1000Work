#include <iostream>
#include <string>

using namespace std;

class Car { 
    private: 
        string make; 
        int year; 
    public: 
        Car() : make("Unknown"), year(0) { 
            cout << "Default constructor called." << endl; 
        }
        Car(string m, int y) : make(m), year(y) { 
            cout << "Parameterized constructor called." << endl; 
        } 
        ~Car() { 
            cout << "Destructor called for " << make << ", Year: " << year << endl; 
        } 
        void display() {
            cout << "Car Make: " << make << ", Year: " << year << endl; 
        } 
}; 

int main() { 
    Car car1; car1.display(); 
    Car car2("Toyota", 2021); car2.display(); 
    return 0; 
} 