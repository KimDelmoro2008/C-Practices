#include <iostream>
#include <string>

using namespace std;

int main() {

    int quantity;
    double price, payment;
    float discount;
    char choice, again;
    string name;
    string FoodName;

    cout << "\n ===== FOOD MENU ===== \n";
    cout << "[1] Burger --- P50 \n";
    cout << "[2] Pizza --- P100 \n";
    cout << "[3] Fried Chicken --- P150 \n";
    cout << "[4] Fries --- P25 \n";
    cout << "Enter your Food Number: ";
    cin >> choice;

    switch (choice) {
        case 1:
            FoodName = "Burger";
            price = 50;
            break;
        case 2:
            FoodName = "Pizza";
            price = 100;
            break;
        case 3:
            FoodName = "Fried Chicken";
            price = 150;
            break;
        case 4:
            FoodName = "Fries";
            price = 25;
            break;
    }

    cout << "What's your name? ";
    getline(cin >> ws, name);

    cout << "Enter Food Quantity: ";
    cin >> quantity;

    cout << "Enter amount of money: ";
    cin >> payment;

    int total = price * quantity;

    if (payment >= 500) {
        discount = 0.10 * total;
    } else if (payment <= 500) {
        discount = 0;
    }

    cout << discount;

}