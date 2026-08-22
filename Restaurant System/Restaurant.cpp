#include <iostream>
#include <Windows.h>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int ItemNumber;
    int quantity, choice;
    int Balance;
    int Confirm;
    string username, password, savedPass, savedUser;
    string Adress, Name, Contact;
    string ItemName, User;
    double discount = 0.0, shippingFee = 0.0, ItemPrice = 0.0;
    double TotalAmount = 0.0;    

    regristration:
    reorder:
    cout << "=============================" << endl;
    cout << "WELCOME TO KIMMY'S RESTAURANT" << endl;
    cout << "=============================" << endl;
    cout << "[1] Register\n";
    cout << "[2] Login\n";
    cout << "Choose : ";
    cin >> choice;

    if (choice == 1) {
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        ofstream file("users.txt", ios::app);
        file << username << " " << password << endl;

        cout << "Registered successfully!";
        
    }
    else if (choice == 2) {
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        ifstream file("users.txt");
        bool found = false;

        while (file >> savedUser >> savedPass) {
            if (username == savedUser && password == savedPass) {
                found = true;
                break;
            }
        }

        if (found) {
            Sleep(1000);
            cout << "Login successful! Welcome to the restaurant." << endl;

            Sleep(1000);
            cout << "What should we call you? : ";
            cin >> User;

            Sleep(1000);
            cout << "Enter your current Balance : ";
            cin >> Balance;

            Sleep(1000);
            cout << "Welcome to our restaurant, " << User << "!" << endl;
            cout << "Your Balance : " << Balance << endl;

            Sleep(500);

            

            cout << "=====================" << endl;
            cout << "KIM'S RESTAURANT MENU" << endl;
            cout << "=====================" << endl;
            cout << "[1] Matcha Chicken - P150" << endl;
            cout << "[2] Cake Ni Boss Seth - P200" << endl;
            cout << "[3] Airplane Rice - P180" << endl;
            cout << "[4] Gin Sampalok - P250" << endl;
            cout << "[5] Gcash (Gshock) - P300" << endl;
            cout << "[6] Matcha - P120" << endl;
            cout << "[7] Piniritong Nike - P220" << endl;
            cout << "[8] Adobong Daga - P180" << endl;
            cout << "[9] Piniritong Bangus (Tag Piso) - P250" << endl;
            cout << "[10] Graham Balls - P150" << endl;
            cout << "Choose Food Number: ";
            cin >> ItemNumber;

            if (ItemNumber >= 1 && ItemNumber <= 10) {
                if (ItemNumber == 1) {
                    ItemName = "Matcha Chicken";
                    ItemPrice = 150;
                }
                else {
                    if (ItemNumber == 2) {
                        ItemName = "Cake Ni Boss Seth";
                        ItemPrice = 200;
                    }
                    else {
                        if (ItemNumber == 3) {
                            ItemName = "Airplane Rice";
                            ItemPrice = 180;
                        }
                        else {
                            if (ItemNumber == 4) {
                                ItemName = "Gin Sampalok";
                                ItemPrice = 250;
                            }
                            else {
                                if (ItemNumber == 5) {
                                    ItemName = "Gcash (Gshock)";
                                    ItemPrice = 300;
                                }
                                else {
                                    if (ItemNumber == 6) {
                                        ItemName = "Matcha";
                                        ItemPrice = 120;
                                    }
                                    else {
                                        if (ItemNumber == 7) {
                                            ItemName = "Piniritong Nike";
                                            ItemPrice = 220;
                                        }
                                        else {
                                            if (ItemNumber == 8) {
                                                ItemName = "Adobong Daga";
                                                ItemPrice = 180;
                                            }
                                            else {
                                                if (ItemNumber == 9) {
                                                    ItemName = "Piniritong Bangus (Tag Piso)";
                                                    ItemPrice = 250;
                                                }
                                                else {
                                                    if (ItemNumber == 10) {
                                                        ItemName = "Graham Balls";
                                                        ItemPrice = 150;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else {
                cout << "Sorry, that item is not on the menu." << endl;
                return 0;
            }

            if (Balance < ItemPrice) {
                cout << "Insufficient balance.";
                Sleep(1000);
                cout << "Please return in the Restaurant if you have enough balance, Thank you.";
                return 0;

            } else {
                cout << "Enter the item quantity: ";
                cin >> quantity;
                cout << "Enter your discount (%): ";
                cin >> discount;
                cout << "Enter your Shipping Fee Amount : ";
                cin >> shippingFee;
                cout << "Enter your Information (eg. Name, Adress, Contact) : ";
                cin >> Name, Adress, Contact;

                Sleep(1000);
                cout << "Please Wait";
                Sleep(1000);
                cout << ".";
                Sleep(1000);
                cout << ".";
                Sleep(1000);
                cout << "." << endl;
                Sleep(1000);

                double finalBalance = Balance - ItemPrice;
                double subtotal = ItemPrice * quantity;
                if (finalBalance < ItemPrice * quantity) {
                    cout << "Insufficient balance.";
                    return 0;
                } else {
                    double discountAmount = (discount / 100) * subtotal;
                    double finalPrice = subtotal - discountAmount;
                    TotalAmount = finalPrice + shippingFee;
                    
                    
                    cout << "=====================" << endl;
                    cout << "KIM'S RESTAURANT MENU" << endl;
                    cout << "=====================" << endl;
                    cout << "Item Name : " << ItemName << endl;
                    cout << "Quantity : " << quantity << endl;
                    cout << "Final Balance: " << finalBalance << endl;
                    cout << "Total: " << subtotal << endl;
                    cout << "Discount: " << discountAmount << endl;
                    cout << "Final Price: " << finalPrice << endl;
                    cout << "Total Amount: " << TotalAmount << endl;
                    cout << "=====================" << endl;
                    cout << "   " << User << "'s Receipt\n";
                    cout << "=====================" << endl;


                    while (true) {
                        cout << "Confirm Order?" << endl;
                        cout << "[1] Yes" << endl;
                        cout << "[2] No" << endl;
                        cout << "Enter a number : ";
                        

                        cin.clear();
                        cin.ignore(1000, '\n');

                        cin >> Confirm;

                        if (Confirm == 1) {
                            Sleep(1000);
                            cout << "=====================" << endl;
                            cout << "KIM'S RESTAURANT MENU" << endl;
                            cout << "=====================" << endl;
                            cout << "Item Name : " << ItemName << endl;
                            cout << "Quantity : " << quantity << endl;
                            cout << "Final Balance: " << finalBalance << endl;
                            cout << "Total: " << subtotal << endl;
                            cout << "Discount: " << discountAmount << endl;
                            cout << "Final Price: " << finalPrice << endl;
                            cout << "Total Amount: " << TotalAmount << endl;
                            cout << "=====================" << endl;
                            cout << "   " << User << "'s Receipt\n";
                            cout << "=====================" << endl;

                            Sleep(1000);
                            cout << "Please wait 3 to 7 days for your order to arrive.\n    ";

                            Sleep(500);
                            cout << "Thank you.";
                            return 0;
                        }
                        else {
                            if (Confirm == 2) {
                                Sleep(1000);
                                cout << "Returning...\n";
                                goto reorder;
                            }
                            else {
                                cout << "Invalid Choice.\n";
                                goto reorder;
                            }
                        }
                    }
                    
                }  
            }   
        }
        else {
            cout << "Wrong username or password.";
        }
    }

        return 0;
}