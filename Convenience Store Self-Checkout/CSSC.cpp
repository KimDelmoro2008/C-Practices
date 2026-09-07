#include <iostream>
using namespace std;

string userName;

double computeTotal(int qty, double price);
void printReceipt(string item, int qty, double total, string itemName, double itemPrice);

void ShowMenu() {
    cout << "\n === Convenience Store Self-Checkout === \n";
    cout << "\n What's your name? : ";
    cin >> userName;

    int itemNumber, itemPrice, qty;
    string itemName;
    int grandtotal;

    do {
        cout << "\n - # Convenience Store - # ";
        cout << "\n [1] Water - P15.00";
        cout << "\n [2] Bread - P45.00";
        cout << "\n [3] Chips - P35.00";
        cout << "\n [4] Coffee - P60.00";

        cout << "\n Enter Item Number (1-4) : ";
        cin >> itemNumber;

        switch (itemNumber) {
            case 1:
                itemPrice = 15;
                itemName = "Water";
                break;
            case 2:
                itemPrice = 45;
                itemName = "Bread";
                break;
            case 3:
                itemPrice = 35;
                itemName = "Chips";
                break;
            case 4:
                itemPrice = 60;
                itemName = "Coffee";
                break;
            default:
                cout << "\n - # Invalid item number. Please try again.";
        }

    } while (itemNumber < 1 || itemNumber > 4);

    do {
        cout << "\n Enter Quantity : ";
        cin >> qty;

        if (qty <= 0) {
            cout << "\n - # Invalid quantity. Please enter a positive number.";
        }
    } while (qty <= 0);

    double total = computeTotal(qty, itemPrice);
    char printReceiptChoice;

    do {

        cout << "\n - # Print the receipt? (Y/N) : ";
        cin >> printReceiptChoice;

    } while (printReceiptChoice != 'Y' && printReceiptChoice != 'y' && printReceiptChoice != 'N' && printReceiptChoice != 'n');

    if (printReceiptChoice == 'Y' || printReceiptChoice == 'y') {
        printReceipt(itemName, qty, total, itemName, itemPrice);
    } else {
        cout << "\n - # Thank you for shopping with us, " << userName << "!";
    }

    

}

double applyDiscount(double grandtotal) {
    return grandtotal = .5;
}

void printReceipt(string item, int qty, double total, string ItemName, double itemPrice) {

    double appliedDiscount;

    if (total > 100) {
        appliedDiscount = total * .5;
    }

    total = total - appliedDiscount;

    char YN;
    
    cout << "\n - # Item Name : " << ItemName;
    cout << "\n - # Item Price : P" << itemPrice;
    cout << "\n - # Quantity : " << qty;
    cout << "\n - # Total : P" << computeTotal(qty, itemPrice);
    cout << "\n - # Discount : P" << appliedDiscount;
    cout << "\n - # Grand Total : P" << total;

    do {
        cout << "\n - # Add Another Item? (Y/N) : ";
        cin >> YN;
    } while (YN != 'Y' && YN != 'y' && YN != 'N' && YN != 'n');

    if (YN == 'Y' || YN == 'y') {
        ShowMenu();
    } else {
        cout << "\n - # Thank you for shopping with us, " << userName << "!";
    }
    

}

double computeTotal(int qty, double price) {
    return qty * price;
}

int main() {
    ShowMenu();
    return 0;

}