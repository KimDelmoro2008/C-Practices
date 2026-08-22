#include <iostream>
using namespace std;

int main() {
    
    int Score;
    string CorrectUser = "Zymth";
    string UserInput;
    string UserPassword = "1337";
    string PasswordInput;

    cout << "Hello User. Welcome to TIP QC, Please enter your user: ";
    cin >> UserInput;

    // Check username
    if (UserInput == CorrectUser) {
        cout << "Welcome Zymth, Please enter your password: ";
        cin >> PasswordInput;

        // Check password
        if (PasswordInput == UserPassword) {
            cout << "Hello. This is the section to see if you are passed or not." << endl;
            cout << "Enter your score: ";
            cin >> Score;

            // Check score
            if (Score >= 95) {
                cout << "Congrats!!!";
            } else {
                cout << "Sorry, you are not passed.";
            }

        } else {
            cout << "\nWrong password.";
        }

    } else {
        cout << "\nWrong username.";
    }

    return 0;
}