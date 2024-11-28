#include <iostream>

using namespace std;

class Account {
    protected:
        string accountNumber;
        double balance;
    public:
        Account(string an, double bal): accountNumber(an), balance(bal) {}

        virtual void deposit(double amount) {
            balance += amount;
            cout << "Deposited: " << amount << " New Balance: " << balance << endl;
        }
};

class SavingsAccount: public Account {
    private:
        double interestRate;
    public:
        SavingsAccount(string an, double bal, double rate): Account(an, bal), interestRate(rate) {}

        void calculateInterest() {
            double interest = balance * (interestRate/100);
            cout << "Interest Earned: " << interest << endl;
        }
};

class Customer {
    private:
        string name;
        Account* account;
    public:
        Customer(string nam, Account* an): name(nam), account(an) {}

        void displayInfo() {
            cout << "Customer: " << name << endl;
            account -> deposit(0);
        }
};

int main() {
    SavingsAccount sa("1234567",1000.0, 3.5);
    Customer cust("Alice", &sa);
    sa.calculateInterest();
    cust.displayInfo();
    return 0;
}