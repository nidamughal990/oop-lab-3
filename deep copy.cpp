#include <iostream>
using namespace std;
class BankAccount {
private:
    double* balance;

public:
    BankAccount(double initialBalance) {
        balance = new double(initialBalance);
    cout << "Constructor: balance allocated "  << *balance <<endl;
    }
    BankAccount(const BankAccount& other) {
        balance = new double(*other.balance); 
        cout << "Deep Copy Constructor: balance allocated  " << *balance << endl;
    }
    ~BankAccount() {
        std::cout << "Destructor: deleting balance  "<< *balance <<endl;
        delete balance;
    }
    void setBalance(double newBalance) {
        *balance = newBalance;
    }
    void display() const {
        cout << "Balance  " << *balance << endl;
    }
};

int main() {
    BankAccount account1(1000.0);
    BankAccount account2 = account1; 

    cout << "After copying";
    account1.display();
    account2.display();
    account2.setBalance(500.0);

    cout << "After modifying account2's balance";
    account1.display();  
    account2.display();
    return 0;
}
