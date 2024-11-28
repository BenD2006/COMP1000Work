#include <iostream> 
#include <string> 

using namespace std;
class Address { 
    private: 
        string street, city; 
        int zipCode; 
    public: 
        Address(string st, string c, int zip) : street(st), city(c), zipCode(zip) {} 
        
        void displayAddress() { 
            cout << "Address: " << street << ", " << city << ", " << zipCode << endl; 
        } 
}; 

class Person { 
    private: 
        string name; 
        int age; 
        Address address; 
        
    public: 
        Person(string n, int a, Address addr) : name(n), age(a), address(addr) {} 
        
        void displayInfo() { 
            cout << "Name: " << name << ", Age: " << age << endl; 
            address.displayAddress(); 
        } 
}; 

int main() { 
    Address addr("123 Main St", "New York", 10001);
    Person person("John Doe", 30, addr); 
    person.displayInfo(); 
    
    return 0; } 