#include <iostream>
using namespace std;


// --- # Functions # ---
void showMenu();
void checkBalance(double bal);
double depositAmount(double bal);
double withdrawAmount(double bal);


// --- # Prints Menu # ---
void showMenu() {

    cout << "\n --- # T.I.P ATM Machine # --- \n";
    cout << "\n -- # [1] Balance";
    cout << "\n -- # [2] Deposit";
    cout << "\n -- # [3] Withdrawal";
    cout << "\n Choose Transaction (1 - 3) : ";



} 

// --- # Checks the balance # ---
void checkBalance(double bal) {
    cout << "Your total balance is " << bal << endl;

} // Case 1

// --- # Displays Deposit Amount # ---
double depositAmount(double bal) {
    double deposit = 0;

    cout << "Enter the amount you want to deposit : ";
    cin >> deposit;

    if (deposit > 100) {
        cout << "\n Sorry, your transaction cannot be processed!";
        cout << "\n Maximum Deposit : 100";
    } else {
        bal = bal + deposit;
        cout << "Your Total Balance : " << bal << endl;
    }
    return bal;

} // Case 2

// --- # Withdraw Amount # ---
double withdrawAmount(double bal) {
    double withdraw = 0;

    cout << "Enter the amount of money you want to withdraw : ";
    cin >> withdraw;

    if (withdraw > 100) {
        cout << "\n Sorry, your transaction cannot be processed!";
        cout << "\n Maximum Withdraw : 100";
    } else if (withdraw > bal) {
        cout << "Sorry, your transaction cannot be processed! The amount is exceed from the Balance.";
    } else {
        bal = bal - withdraw;
        cout << "Your total balance is : " << bal << endl;
    }


} // Case 3

// --- # Main # ---
int main() {

    double bal = 1000;
    int choice = 0;

    while (choice != 4) {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance(bal);
                break;
            case 2:
                depositAmount(bal);
                break;
            case 3:
                withdrawAmount(bal);
                break;
            case 4:
                cout << "\n Thank you for coming again!" << endl;
                break;
            default:
                cout << "\n Invalid Choice." << endl;
        }
    }


}