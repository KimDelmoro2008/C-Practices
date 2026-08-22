#include <iostream>
using namespace std;

int main() {
    
    string CorrectPassword = "Zymth";
    string userInput;
    int attempts = 0;
    char choice;

    while (true) {

        while (attempts < 3) {
            cout << "Welcome to Zymth Desk, Please enter your password: ";
            cin >> userInput;

            if (userInput == CorrectPassword) {
                cout << "Welcome to Zymth Desk.";
                return 0;
            } else {
                attempts++;
                cout << "Wrong Password." << endl;
            }
        }

        // reached 3 attempts
        cout << "Do you want to reset password? (Y/N): ";
        cin >> choice;

        if (choice == 'Y' || choice == 'y') {
            cout << "Enter new password: ";
            cin >> CorrectPassword;

            attempts = 0; // reset attempts
            cout << "Password reset successful.\n";
        } else {
            cout << "Try again later.";
            break;
        }
    }

    return 0;
}