#include<iostream>
using namespace std;


int main() {

    char ProcessYN;
    int NumEmployees;

    // Admin Credentials
    string AdminUser = "KimDelmoro";
    string AdminPassword = "IT11S1";

    string AdminUserInput;
    string AdminPasswordInput;

    int LoginAttempt = 0; // Attempts for 

    cout << "\n --- Admin Login --- \n";

    cout << "\n Enter Admin User : ";
    cin >> AdminUserInput;

    while (LoginAttempt < 3) {
        cout << "\n Enter Admin Password : ";
        cin >> AdminPasswordInput;

        if (AdminPasswordInput == AdminPassword ) {
            cout << "\n Welcome, Admin. \n";
            break;
        } else {
            LoginAttempt++;
            cout << "\n Incorrect Password." << endl;
            cout << "\n Attempts Remaining : " << 3 - LoginAttempt << endl;
        }
    } 



    cout << "How many Employees do you want to process? : ";
    cin >> NumEmployees;

    cout << "Do you want to process these Employees (Y/N): ";
    cin >> ProcessYN;

    if (ProcessYN == 'N' || ProcessYN == 'n') {
        cout << "\n Thank you!";
        return 0;
    } else {
         for (int e = 1; e <= NumEmployees; e++) {
    

    string LateLetter, GVName;
    char Late;
    double OvertimePay, TaxAmount, TotalWage, wage;

    
    int deduction = 250; // Deduction
    int Regular = 500, Manager = 1000, Executive = 5000; // Work Position's Pay

    int GovChoice, choice;

    string Name[100], PositionName[100];
    double rate[100];
    int Overtime[100];


    cout << "--- Employee # " << e << " ---" << endl;
    cout << "Enter Employee Name: ";
    cin >> Name[e];


    cout << "Enter hourly rate: ";
    cin >> rate[e];


    cout << "Enter Overtime Hour: ";
    cout << "(Maximum Overtime Hours : 6 Hours): ";
    cin >> Overtime[e];


    if (Overtime[e] < 1 || Overtime[e] > 6) {
        cout << "\nMaximum of 6 hours only or Invalid Input.";
        break;
    } // Users prevents from entering number greater than 6

    // Late System
    do {
        cout << "Is Employee Late? : " << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
        cout << "Enter your choice: ";
        cin >> Late;
    } while (Late != 'Y' && Late != 'y' && Late != 'N' && Late != 'n'); // Users can only Input Y and N

    

    cout << " --- Position --- " << endl;
    cout << "[1] Regular" << endl;
    cout << "[2] Manager" << endl;
    cout << "[3] Executive" << endl;
    cout << " --- Position --- " << endl;
    cout << "Enter your position number: ";
    cin >> choice;

    if (choice < 1 || choice > 3) {
        cout << "\nInvalid Choice.";
        break;
    }


    cout << " --- Select Government Deduction --- " << endl;
    cout << "[1] SSS" << endl;
    cout << "[2] PhilHealth" << endl;
    cout << "[3] Pag-Ibig" << endl;
    cout << "Enter your Government Deduction: ";
    cin >> GovChoice;


    if (GovChoice < 1 || GovChoice > 3) {
        cout << "\nInvalid Choice.";
        break;
    }


    // Checks if User has Overtime Hours 
    if (Overtime[e] > 6) {
        Overtime[e] = 6;
   }


    OvertimePay = Overtime[e] * (rate[e] * 1.5);
    wage = wage + OvertimePay; // Wage = Gross Pay


    if (choice == 1) {
        PositionName[e] = "Regular";
        wage = Regular * rate[e];
        TaxAmount = wage * 0.1;
        TotalWage = wage - TaxAmount;
    } else if (choice == 2) {
        PositionName[e] = "Manager";
        wage = Manager * rate[e];
        TaxAmount = wage * .1;
        TotalWage = wage - TaxAmount;
    } else if (choice == 3) {
        PositionName[e] = "Executive";
        wage = Executive * rate[e];
        TaxAmount = wage * .1;
        TotalWage = wage - TaxAmount;
    } else {
        cout << "Invalid Choice";
    }


    // Late Deduction
   if (Late == 'Y' || Late == 'y') {
        LateLetter = "Yes";
        wage = wage - deduction;
   } else {
        LateLetter = "No";
        wage = wage - 0;
   }


    // Government Deductions
    double sssDeduction = wage * 0.045;
    double philhealthDeduction = wage * 0.02;
    double pagIbigDeduction = 100;


   switch (GovChoice) {
        case 1:
            GVName = "SSS";
            TotalWage = TotalWage - sssDeduction;
        case 2:
            GVName = "PhilHealth";
            TotalWage = TotalWage - philhealthDeduction;
        case 3:
            GVName = "Pag-Ibig";
            TotalWage = TotalWage - pagIbigDeduction;
   }
   
   // Employee Receipt
   cout << "--- Employee Payroll Calculator ---" << endl;
   cout << "Employee Name : " << Name[e] << endl;
   cout << "Hourly Rate : " << rate[e] << endl;
   cout << "Overtime Hour : " << Overtime[e] << endl;
   cout << "Late? : " << LateLetter << endl;
   cout << "Work Position : " << PositionName << endl;
   cout << "Government Deduction : " << GVName << endl;
   cout << "Wage : " << wage << endl;
   cout << "Tax Amount : " << TaxAmount << endl;
   cout << "Overtime Pay : " << OvertimePay << endl;
   cout << "Total Wage : " << TotalWage << endl;
   cout << "--- Employee Payroll Calculator ---" << endl;
}
}
    }


   
