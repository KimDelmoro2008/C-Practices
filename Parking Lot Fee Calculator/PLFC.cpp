#include <iostream>
#include <string>
using namespace std;

int main() {

    string CarName;
    char YN, ValidStamp;
    int CarChoice;
    double CarRate, HoursParked;
    double fee;
    double ValidStampDisc, LostTicketFee, TotalFee;

    cout << " --- Parking Lot --- " << endl;
    cout << "(Car Types with Base Rates)" << endl;
    cout << "[1] Motorcycle    P20 base rate" << endl;
    cout << "[2] Car    P40 base rate" << endl;
    cout << "[3] Van/SUV    P60 base rate" << endl;
    cout << "[4] Truck    P80 base rate" << endl;
    cout << "Please select car types to park: ";
    cin >> CarChoice;

    cout << "How many hours have you parked?: ";
    cin >> HoursParked;

    cout << "Have you lost your ticket? (Y/N): ";
    cin >> YN;

    cout << "Do you have Validation Stamp? (Y/N) ";
    cin >> ValidStamp;

    switch (CarChoice) {
        case 1:
            CarName = "Motorcycle";
            CarRate = 20;
            break;
        case 2:
            CarName = "Car";
            CarRate = 40;
            break;
        case 3:
            CarName = "Van/SUV";
            CarRate = 60;
            break;
        case 4:
            CarName = "Truck";
            CarRate = 80;
            break;
        default:
            CarName = "Invalid";
            CarRate = 0;
            cout << "Invalid Choice" << endl;
            break;
    }

    /* Base fee based on hours parked */
    if (HoursParked <= 3) {
        fee = CarRate;
    } else if (HoursParked <= 12) {
        fee = CarRate + (HoursParked - 3) * 10;
    } else {
        fee = CarRate + 150;
    }

    /* Heavy Truck Overnight surcharge */
    if (CarName == "Truck" && HoursParked > 12) {
        fee = fee + 50;
    }

    /* Valid Stamp Discount */
    if (ValidStamp == 'Y' || ValidStamp == 'y') {
        ValidStampDisc = 20;
    } else {
        ValidStampDisc = 0;
    }

    fee = fee - ValidStampDisc;
    if (fee < 0) {
        fee = 0;
    }

    /* Lost Ticket overrides everything with a flat penalty */
    if (YN == 'Y' || YN == 'y') {
        LostTicketFee = 500;
        TotalFee = LostTicketFee;
    } else {
        LostTicketFee = 0;
        TotalFee = fee;
    }

    cout << "\n--- Receipt ---" << endl;
    cout << "Vehicle: " << CarName << endl;
    cout << "Hours Parked: " << HoursParked << endl;
    cout << "Validation Discount: " << ValidStampDisc << endl;
    cout << "Lost Ticket Fee: " << LostTicketFee << endl;
    cout << "TOTAL FEE DUE: " << TotalFee << endl;

    return 0;
}