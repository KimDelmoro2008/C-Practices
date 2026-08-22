#include <iostream>
using namespace std;

int main() {

    int balance = 10000;
    int dailywithdrawal = 15000;
    int pincode = 1337;
    int choice;
    int withdraw, inquiry, exit;
    int amount;

    Menu:
    cout << "Enter your PIN: ";
    cin >> pincode;

    if (pincode == 1337) {
        cout << "--- Welcome to Delmoro Bank ---" << endl;
        cout << "[1] Withdraw" << endl;
        cout << "[2] Balance Inquiry" << endl;
        cout << "[3] Exit" << endl;
        cout << "Enter a number: ";
        cin >> choice;

    } else {
        cout << "Invalid PIN" << endl;
        goto Menu;
    }

    switch (choice) {
        case 1:
            int amount;

            cout << "How much you want to withdraw?: ";
            cin >> amount;

            if (amount % 100 != 0) {
                cout << "[ERROR] Amount must be multiplied by 100" << endl;
            } else if (amount > dailywithdrawal) {
                cout << "[ERROR] Amount reaches the limit of daily withdrawal" << endl;
            } else if (amount > balance) {
                cout << "Your only balance is " << balance << " Try again." << endl;
            } else {
                balance -= amount;
                cout << "Withdrawal Successful" << endl;
                cout << "New Balance : " << balance << endl;
                cout << "Thank you!\n";
                break;
            case 2:
                cout << "Your current balance is : " << balance;     
                break;
            case 3:
                cout << "Exit..." << endl;
                break;
            default:
            cout << "Invalid Choice";
            break;

        }
    }   
}