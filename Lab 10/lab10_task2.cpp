#include <iostream> 
#include <string> 

using namespace std;

class Account { 
    protected: 
        string accountNumber;
        double balance; 

    public: 
        Account(string accNum, double bal) : accountNumber(accNum), balance(bal) {} 
        
        virtual void deposit(double amount) { 
            balance += amount;
             cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
        } 
};

class SavingsAccount : public Account { 
    private: 
        double interestRate; 
    
    public: 
        SavingsAccount(string accNum, double bal, double rate) : Account(accNum, bal), interestRate(rate) {} 
        
        void calculateInterest() { 
            double interest = balance * (interestRate / 100); 
            cout << "Interest Earned: " << interest << endl;
        } 
};

class Customer { 
    private: 
        string name; 
        Account* account; 
    
    public: 
        Customer(string n, Account* acc) : name(n), account(acc) {} 
        
        void displayCustomerInfo() { 
            cout << "Customer: " << name << endl;
            account->deposit(0);
        } 
}; 

int main() {
    SavingsAccount sa("123456", 1000.0, 3.5); 
    Customer cust("Alice", &sa); 
    sa.calculateInterest(); 
    cust.displayCustomerInfo(); 
    
    return 0; 
} 