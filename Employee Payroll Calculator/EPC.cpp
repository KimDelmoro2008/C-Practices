#include<iostream>
using namespace std;


int main() {


    int NumEmployees;

    cout << "How many Employees do you want to process? : ";
    cin >> NumEmployees;

    for (int e = 1; e <= NumEmployees; e++) {
    
    string Name, LateLetter, PositionName, GVName;
    double rate, hoursWorked;
    double wage;
    char Late;
    int Overtime;
    int OvertimePay;
    int choice, TaxAmount, TotalWage;
    int deduction = 250;
    int Regular = 500, Manager = 1000, Executive = 5000;
    int GovChoice;

    cout << "--- Employee # " << e << " ---" << endl;


    cout << "Enter Employee Name: ";
    cin >> Name;


    cout << "Enter hourly rate: ";
    cin >> rate;


    cout << "Enter Overtime Hour: ";
    cout << "(Maximum Overtime Hours : 6 Hours): ";
    cin >> Overtime;


    cout << "Is Employee Late? : " << endl;
    cout << "[Y] Yes" << endl;
    cout << "[N] No" << endl;
    cout << "Enter your choice: ";
    cin >> Late;
    

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


    /* Checks if User has Overtime Hours*/
    if (Overtime > 6) {
        Overtime = 6;
   }


    OvertimePay = Overtime * (rate * 1.5);
    wage = wage + OvertimePay;


    if (choice == 1) {
        PositionName = "Regular";
        wage = Regular * rate;
        TaxAmount = wage * 0.1;
        TotalWage = wage - TaxAmount;
    } else if (choice == 2) {
        PositionName = "Manager";
        wage = Manager * rate;
        TaxAmount = wage * .1;
        TotalWage = wage - TaxAmount;
    } else if (choice == 3) {
        PositionName = "Executive";
        wage = Executive * rate;
        TaxAmount = wage * .1;
        TotalWage = wage - TaxAmount;
    } else {
        cout << "Invalid Choice";
    }


    /* Late System*/
   if (Late == 'Y' || Late == 'y') {
        LateLetter = "Yes";
        wage = wage - deduction;
   } else {
        LateLetter = "No";
        wage = wage - 0;
   }


    /* Government Deductions*/
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
   
   cout << "--- Employee Payroll Calculator ---" << endl;
   cout << "Employee Name : " << Name << endl;
   cout << "Hourly Rate : " << rate << endl;
   cout << "Overtime Hour : " << Overtime << endl;
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
