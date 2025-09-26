#include <iostream>
using namespace std;
class BankAccount {
private:
    double* balance;

public:
    BankAccount(double initialBalance) {
        balance = new double(initialBalance);
        cout << "Constructor: balance allocated at " << balance << " with value " << *balance << std::endl;
    }

    BankAccount(const BankAccount& other) = default;
    ~BankAccount() {
        std::cout << "Destructor: deleting balance at " << balance << " with value " << *balance << std::endl;
        delete balance;
    }
    void setBalance(double newBalance) {
        *balance = newBalance;
    }
    void display() const {
        std::cout << "Balance at " << balance << " is " << *balance << std::endl;
    }
};

int main() {
    BankAccount account1(1000.0);
    BankAccount account2 = account1; 
    cout << "After copying:";
    account1.display();
    account2.display();

    account2.setBalance(500.0);

    cout << "After modifying account2's balance";
    account1.display();  
    account2.display();
    return 0;
}
