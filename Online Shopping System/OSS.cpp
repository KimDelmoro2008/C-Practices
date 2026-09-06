#include <iostream>
#include <string> /* Optional */
using namespace std;

int main() {

    string name;
    string product;

    int age;
    int productChoice;
    int quantity;

    double price;
    double subtotal;
    double discount;
    double shipping;
    double total;
    double payment;
    double change;
    double lacking;

    float discountrate;

    char member;
    char again;

    double shippingFee;
    int locationChoice;
    string locationName;

    cout << "\n ===== SHOPPING STORE ===== \n";
    cout << "[1] T-Shirt ----- P450 \n";
    cout << "[2] Jeans ----- P900 \n";
    cout << "[3] Shoes ----- P1,500 \n";
    cout << "[4] Backpack ----- P750 \n";
    cout << "[5] Headphones ----- P1,200 \n";
    
    cout << "\n What's your name? : ";
    getline(cin >> ws, name);

    cout << " How old are you? : ";
    cin >> age;

    if (age <= 13) {
        cout << "\n You are too young to select a product.";
        return 0;
    } else {
        cout << "\n Enter Product Number : ";
        cin >> productChoice;
    }

    switch (productChoice) {
        case 1:
            product = "T-Shirt";
            price = 450;
            cout << "\n ===== PRODUCT DETAILS ===== \n";
            cout << "\n Product : [ " << product << " ]";
            cout << "\n Price : [ " "P " << price << " ]";
            break;
        case 2:
            product = "Jeans";
            price = 900;
            cout << "\n ===== PRODUCT DETAILS ===== \n";
            cout << "\n Product : [ " << product << " ]";
            cout << "\n Price : [ " "P " << price << " ]";
            break;
        case 3:
            product = "Shoes";
            price = 1500;
            cout << "\n ===== PRODUCT DETAILS ===== \n";
            cout << "\n Product : [ " << product << " ]";
            cout << "\n Price : [ " "P " << price << " ]";
            break;
        case 4:
            product = "Backpack";
            price = 750;
            cout << "\n ===== PRODUCT DETAILS ===== \n";
            cout << "\n Product : [ " << product << " ]";
            cout << "\n Price : [ " "P " << price << " ]";
            break;
        case 5:
            product = "Headpones";
            price = 450;
            cout << "\n ===== PRODUCT DETAILS ===== \n";
            cout << "\n Product : [ " << product << " ]";
            cout << "\n Price : [ " "P " << price << " ]";
            break;
    }

    if (productChoice > 5) {
        cout << "\n Invalid Choice.";
        return 0;
    }

    cout << "\n Enter Product Quantity : ";
    cin >> quantity;

    subtotal = price * quantity;

    cout << "\n Do you have Membership? [Y/N] : ";
    cin >> member;

    if (member == 'Y' || member == 'y') {
        discount = subtotal * 0.1;
    } else if (member == 'N' || member == 'n') {
        discount = 0;
    }

    cout << "\n ===== LOCATION ===== \n ";
    cout << "\n [1] Metro Manila";
    cout << "\n [2] Luzon";
    cout << "\n [3] Visayas";
    cout << "\n [4] Mindanao";
    cout << "\n Enter Location Number : ";
    cin >> locationChoice;

    switch (locationChoice) {
        case 1:
            locationName = "Metro Manila";
            shippingFee = 50;
            cout << " \n Location : [ " << locationName << " ]";
            cout << " \n Shipping Fee : [ " "P " << shippingFee << " ]";
            break;
        case 2:
            locationName = "Luzon";
            shippingFee = 100;
            cout << " \n Location : [ " << locationName << " ]";
            cout << " \n Shipping Fee : [ " "P " << shippingFee << " ]";
            break;
        case 3:
            locationName = "Visayas";
            shippingFee = 150;
            cout << " \n Location : [ " << locationName << " ]";
            cout << " \n Shipping Fee : [ " "P " << shippingFee << " ]";
            break;
        case 4:
            locationName = "Mindanao";
            shippingFee = 200;
            cout << " \n Location : [ " << locationName << " ]";
            cout << " \n Shipping Fee : [ " "P " << shippingFee << " ]";
            break;
    }


    if (locationChoice > 4) {
        cout << "\n Invalid Choice.";
        return 0;
    }

    if (subtotal >= 2000) {
        if (member == 'Y' || member == 'y') {
            shipping = 0;
            cout << "\n Ypu got FREE Shipping Fee!";
        } else {
            shipping = 50;
        }
    } else {
        shipping = 50;
    }


    cout << "\n Enter payment : ";
    cin >> payment;

    total = subtotal - discount + shipping;
    change = subtotal - payment;

    if (payment < subtotal) {
        cout << "\n Payment Successful!";
        cout << "\n Change : " "P " << change;
    } else if (payment > subtotal) {
        cout << "\n Insufficient Payment";
        cout << "\n You still need P " << change;
    }

    cout << total;
}