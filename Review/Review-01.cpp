#include <iostream>
#include <string>
using namespace std;

int main() {

    double salesTax = 0.08;
    double ItemPrice;
    int Choice, Quantity;
    string ItemName;

    Menu:
    cout << " ----- Shop Menu ----- " << endl;
    cout << "[1] Burger - P50" << endl;
    cout << "[2] Fries - P30" << endl;
    cout << "[3] Soda - P20" << endl;
    cout << "[4] Salad - P40" << endl;
    cout << " ----- Shop Menu ----- " << endl;

    cout << "Enter your choice (1-4): ";
    cin >> Choice;

    cout << "Enter quantity: ";
    cin >> Quantity;

    switch (Choice) {
        case 1:
            ItemPrice = 50.0;
            ItemName = "Burger";
            break;
        case 2:
            ItemPrice = 30.0;
            ItemName = "Fries";
            break;
        case 3:
            ItemPrice = 20.0;
            ItemName = "Soda";
            break;
        case 4:
            ItemPrice = 40.0;
            ItemName = "Salad";
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            goto Menu;
    }


    double TotalPrice = ItemPrice * Quantity;

    if (TotalPrice > 20) {
        TotalPrice = TotalPrice - (TotalPrice * 0.10);
    }

    double TaxAmount = TotalPrice * salesTax;

    cout << " ----- Shop Receipt ----- " << endl;
    cout << " Item Name : " << ItemName;
    cout << "\n Quantity : " << Quantity;
    cout << "\n Total Price : P" << TotalPrice;
    cout << "\n Sales Tax : P" << TaxAmount;
    cout << "\n Final Price : P" << TotalPrice + TaxAmount;
    cout << "\n ----- Shop Receipt ----- " << endl;



}