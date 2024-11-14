#include <iostream>
#include <string>

using namespace std;

class Counter { 
    private: 
        static int count; 
    
    public: 
        Counter() { count++; } 
        ~Counter() { count--; } 
        
        static int getCount() { return count; 
        } 
}; 
        
int Counter::count = 0; 
        
int main() { 
    Counter c1, c2; 
    cout << "Current Count: " << Counter::getCount() << endl;
    {
        Counter c3; 
        cout << "Current Count: " << Counter::getCount() << endl; 
    }
    cout << "Current Count: " << Counter::getCount() << endl; 
    return 0; 
} 