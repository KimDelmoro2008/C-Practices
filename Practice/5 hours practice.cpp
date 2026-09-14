#include <iostream>
using namespace std;

void displayMenu() {
    cout << "\n1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
}

void showBalance(double bal) {
    cout << "Total balance: " << bal << endl;
}

void handleDeposit(double &bal, double &deposit) {
    cout << "Enter deposit amount: ";
    cin >> deposit;
    if (deposit >= 100) {
        bal = bal + deposit;
        cout << "Total balance: " << bal << endl;
    } else {
        cout << "Minimum deposit is 100." << endl;
    }
}

void handleWithdrawal(double &bal, double &withdraw) {
    cout << "Enter withdrawal amount: ";
    cin >> withdraw;
    if (withdraw < 100) {
        cout << "Minimum withdrawal is 100." << endl;
    } else if (withdraw > bal) {
        cout << "Withdrawal exceeds maximum available balance." << endl;
    } else {
        bal = bal - withdraw;
        cout << "Total balance: " << bal << endl;
    }
}

int main() {
    double bal = 1000;
    double deposit = 0;
    double withdraw = 0;
    int choice = 0;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            showBalance(bal);
        } else if (choice == 2) {
            handleDeposit(bal, deposit);
        } else if (choice == 3) {
            handleWithdrawal(bal, withdraw);
        } else if (choice == 4) {
            cout << "Program ended." << endl;
        } else {
            cout << "Invalid option." << endl;
        }
    } while (choice != 4);

    return 0;
}