#include <iostream>
#include <string>
using namespace std;

// Functions
void ShowPackage();
double computeBill(double packagePrice, double extraHours, double extraCharge);
void printBill(string name, string packageName, double total, double packagePrice, double extraHours, double extraCharge);


void printBill(string name, string packageName, double total, double packagePrice, double extraHours, double extraCharge) {

    cout << "\n --- Internet Cafe Receipt --- " << endl;
    cout << " Customer's Name    : " << name << endl;
    cout << " Customer's Package : " << packageName << endl;
    cout << " Package Price      : P" << packagePrice << endl;
    cout << " Extra Hours        : " << extraHours << endl;
    cout << " Extra Charge       : P" << extraCharge << endl;
    cout << " Total              : P" << total << endl;
    cout << " ----------------------------- " << endl;

} // Print Bill


double computeBill(double packagePrice, double extraHours, double extraCharge) {
    extraCharge = extraHours * 15;
    double total = packagePrice + extraCharge;
    return total;
} // Compute Bill


void ShowPackage() {

    int packageChoice = 0;
    string packageName;
    double packagePrice = 0;
    double extraHours = 0;
    double extraCharge = 0;
    double total = 0;
    char extraHoursChoice;
    char billChoice;
    char serveChoice;
    string name;

    do {
        
        cout << "\n --- Internet Cafe Packages --- " << endl;
        cout << " [1] 1 Hour        - P20.00" << endl;
        cout << " [2] 3 Hours       - P50.00" << endl;
        cout << " [3] 5 Hours       - P80.00" << endl;
        cout << " [4] Overnight (8 Hours) - P120.00" << endl;

        /* Validate package choice using while */
        packageChoice = 0;
        while (packageChoice < 1 || packageChoice > 4) {
            cout << " Enter Package Number (1-4) : ";
            cin >> packageChoice;
            if (packageChoice < 1 || packageChoice > 4) {
                cout << " Invalid choice, please enter 1-4." << endl;
            }
        }

        cout << " What's your name? : ";
        cin >> name;

        
        switch (packageChoice) {
            case 1:
                packagePrice = 20;
                packageName = "1 Hour";
                break;
            case 2:
                packagePrice = 50;
                packageName = "3 Hours";
                break;
            case 3:
                packagePrice = 80;
                packageName = "5 Hours";
                break;
            case 4:
                packagePrice = 120;
                packageName = "Overnight (8 Hours)";
                break;
        }

        
        cout << " Did you use extra hours? (Y/N) : ";
        cin >> extraHoursChoice;

        if (extraHoursChoice == 'Y' || extraHoursChoice == 'y') {

            
            extraHours = 0;
            while (extraHours < 1) {
                cout << " How many extra hours used? : ";
                cin >> extraHours;
                if (extraHours < 1) {
                    cout << " Invalid. Must be at least 1 hour." << endl;
                }
            }

            extraCharge = extraHours * 15;

        } else {
            extraHours = 0;
            extraCharge = 0;
        }

        
        total = computeBill(packagePrice, extraHours, extraCharge);

        
        cout << " Do you want to print your bill? (Y/N) : ";
        cin >> billChoice;

        if (billChoice == 'Y' || billChoice == 'y') {
            printBill(name, packageName, total, packagePrice, extraHours, extraCharge);
        }

        
        cout << "\n Serve Another Customer? (Y/N) : ";
        cin >> serveChoice;

    } while (serveChoice == 'Y' || serveChoice == 'y');

    cout << "\n Thank you! Goodbye!" << endl;
} // Show Packages

int main() {
    ShowPackage();
    return 0;
} // Main Function