#include <iostream>
using namespace std;

int main() {

    string MovieName;
    int tickets, TicketPrice;
    int quantity;
    double discount;
    int choice;
    int AgeBased;

    cout << " ----- Movie Ticket Menu ----- " << endl;
    cout <<  "[1] Morning Show (10:00 AM) - P150" << endl;
    cout <<  "[2] Afternoon Show (2:00 PM) - P200" << endl;
    cout <<  "[3] Evening Show (6:00 PM) - P250" << endl;
    cout <<  "[4] Night Show (9:00 PM) - P180" << endl;
    cout << " ----- Movie Ticket Menu ----- " << endl;

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "How many tickets?: ";
    cin >> quantity;

    cout << "Enter Age's Category: " << endl;
    cout << "[1] Adult (No Discount)" << endl;
    cout << "[2] Student (10 Percent Discount)" << endl;
    cout << "[3] Senior Citizen (20 Percent Discount)" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> AgeBased;

        switch (AgeBased) {
            case 1:
                discount = 0;
                break;
            case 2:
                discount = 0.10;
                break;
            case 3:
                discount = 0.20;
                break;
            default:
            cout << "Invalid choice. Please try again." << endl;
            return 0;
        }

        switch (choice) {
            case 1:
                TicketPrice = 150;
                MovieName = "Morning Show (10:00 AM)";
                break;
            case 2:
                TicketPrice = 200;
                MovieName = "Afternoon Show (2:00 PM)";
                break;
            case 3:
                TicketPrice = 250;
                MovieName = "Evening Show (6:00 PM)";
                break;
            case 4:
                TicketPrice = 180;
                MovieName = "Night Show (9:00 PM)";
                break;
            default:
            cout << "Invalid choice. Please try again." << endl;
            return 0;    
        }   

    double Subtotal = TicketPrice * quantity;
    double DiscountAmount = Subtotal * discount;
    double ConvienenceFee = 15.0;
    double FinalPrice = Subtotal - DiscountAmount + ConvienenceFee;

    cout << " ----- MOVIE NI DELMORO ----- " << endl;
    cout << " Movie Name : " << MovieName;
    cout << "\n Ticket Price : P" << TicketPrice;
    cout << "\n Quantity : " << quantity;
    cout << "\n Subtotal : P" << Subtotal;
    cout << "\n Discount Amount : P" << DiscountAmount;
    cout << "\n Convienence Fee : P" << ConvienenceFee;
    cout << "\n Final Price : P" << FinalPrice;
    cout << "\n ----- MOVIE NI DELMORO ----- " << endl;
    
}