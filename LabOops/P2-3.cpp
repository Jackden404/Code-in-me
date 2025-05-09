#include<iostream>  //WAP using ‘class’ with name bank, with functions to input value of amount, withdraw, deposited and display the amount.
using namespace std;
class Bank {
public:
    int amount;  // Class member variable

    void input() {  // Removed parameter to take input directly
        cout << "Enter the initial amount: ";
        cin >> amount;
    }

    void withdraw(int w) {
        if (amount >= w) {
            amount -= w;
            cout << "Withdrawal successful" << endl;
            cout << "Remaining amount: " << amount << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void deposit(int d) {
        amount += d;
        cout << "Deposited amount: " << d << endl;
        cout << "New balance: " << amount << endl;
    }

    void display() {
        cout << "Current balance: " << amount << endl;
    }
};

int main() {
    Bank b;
    b.input();     // Fixed function call (no parameter needed)
    b.display();   
    b.deposit(1000); 
    b.withdraw(500); 
    b.display();  

    return 0;  // Fixed spelling mistake
}

