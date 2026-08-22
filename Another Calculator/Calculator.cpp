#include <iostream>
using namespace std;

int main() {

    int num1, num2, operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Select operation: " << endl;
    cout << "[1] Addition" << endl;
    cout << "[2] Subtraction" << endl;
    cout << "[3] Multiplication" << endl;
    cout << "[4] Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> operation;

    switch (operation) {
        case 1:
            cout << "Result is: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result is: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result is: " << num1 * num2 << endl;
            break;
        case 4:
            cout << "Result is: " << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
    }
}    