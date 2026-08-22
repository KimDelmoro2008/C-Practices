#include <iostream>
using namespace std;

int main(){

    double kwh, kwhperhr;
    int choice;

    cout << " ----- Electricity Bill Calculator ----- " << endl;
    cout << "Residential - P9.50 per kWh" << endl;
    cout << "Commercial - P12.75 per kWh" << endl;
    cout << "Industrial - P15.20 per kWh" << endl;
    cout << "Government - P11.00 per kWh" << endl;
    cout << "Enter your per-kWh types (1-4): ";
    cin >> choice;
    
    cout << "Enter your kilowatt-hours (kWh) consumed this month: ";
    cin >> kwhperhr;

    switch (choice) {
        case 1:
            kwh = 9.50 * kwhperhr;
            break;
        case 2:
            kwh = 12.75 * kwhperhr;
            break;
        case 3:
            kwh = 15.20 * kwhperhr;
            break;
        case 4:
            kwh = 11.00 * kwhperhr;
            break;
        default:
        cout << "Invalid choice. Please select a valid option (1-4)." << endl;   
        break;
    }

    /* Apply additional charges based on consumption */
    if (kwh >= 101 && kwh <= 300) {
        kwh = kwh + (kwh * 0.05);
    } else if (kwh > 300 && kwh <= 300) {
        kwh = kwh + (kwh * 0.12);
    }

    double maintenanceFee = kwh + 50.0;
    double VAT = maintenanceFee + kwh * 0.12;

    cout << " ----- Electricity Bill Calculator ----- " << endl;
    cout << "Per-kWh Type: " << choice << endl;
    cout << "Total kWh consumed: " << kwhperhr << endl;
    cout << "Total kWh: P" << kwh << endl;
    cout << "Maintenance Fee: P" << maintenanceFee << endl;
    cout << "Total Amount Due: P" << VAT << endl;
    cout << " ----- Electricity Bill Calculator ----- " << endl;


}