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

    int LoginAttempt = 0;

    cout << "\n --- Admin Login --- \n";

    cout << "\n Enter Admin User : ";
    cin >> AdminUserInput;

    while (LoginAttempt < 3) {
        cout << "\n Enter Admin Password : ";
        cin >> AdminPasswordInput;

        if (AdminPasswordInput == AdminPassword) {
            cout << "\n Welcome, Admin. \n";
            break;
        } else {
            LoginAttempt++;
            cout << "\n Incorrect Password." << endl;
            cout << "\n Attempts Remaining : " << 3 - LoginAttempt << endl;
        }
    }

    if (AdminPasswordInput != AdminPassword) {
        cout << "\n Maximum login attempts reached. Program ends." << endl;
        return 0;
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

            string LateLetter, GVName, Name[100], PositionName[100];
            char Late;
            double OvertimePay, TaxAmount, TotalWage, wage;
            double Honorarium = 0, Adjustment = 0;
            double Absences = 0, Tardiness = 0, LoanDeduction = 0;
            int deduction = 250;
            int Regular = 500, Manager = 1000, Executive = 5000;
            int GovChoice, choice;
            int Overtime[100];
            double rate[100];
            int absencesCount = 0, tardinessMinutes = 0;
            int EmployeeID[100];

            cout << "--- Employee # " << e << " ---" << endl;
            cout << "Enter Employee Name : ";
            cin >> Name[e];

            cout << "Enter Employee ID : ";
            cin >> EmployeeID[e];

            cout << "Enter hourly rate: ";
            cin >> rate[e];

            do {

                cout << "Enter Overtime Hour: ";
                cout << "(Maximum Overtime Hours : 6 Hours): ";
                cin >> Overtime[e];

            } while (Overtime[e] < 0 || Overtime[e] > 6);

  
            if (Overtime[e] < 1 || Overtime[e] > 6) {
                cout << "\nMaximum of 6 hours only or Invalid Input.";
                break;
            }

            
            if (Overtime[e] > 6) {
                Overtime[e] = 6; //            Overtime Pay Computation
            }

            OvertimePay = Overtime[e] * (rate[e] * 1.5);
            wage = 0;            // Fixed Value because there is no value for wage yet

            cout << "\n  --- # Honorarium # --- " << endl;
            cout << "Enter Honorarium amount: ";
            cin >> Honorarium;

            cout << "\n  --- # Adjustment # --- " << endl;
            cout << "Enter Adjustment amount: ";
            cin >> Adjustment;

            cout << "\n  --- # Absences # --- " << endl;
            cout << "Enter absences count: ";
            cin >> absencesCount;
            Absences = absencesCount * (rate[e] * 0.5);           // Absences Deduction

            cout << "\n  --- # Tardiness # --- " << endl;
            cout << "Enter tardiness in minutes: ";
            cin >> tardinessMinutes;
            Tardiness = tardinessMinutes * (rate[e] * 0.05);            // Tardiness Deduction

            cout << "\n  --- # Loan Deduction # --- " << endl;
            cout << "Enter loan deduction amount: ";
            cin >> LoanDeduction;

            // Error Prevention of Late Employee Selection
            // Prevents user from entering position display menu while their input was not Y and N
            do {
                cout << "Is Employee Late? : " << endl;
                cout << "[Y] Yes" << endl;
                cout << "[N] No" << endl;
                cout << "Enter your choice: ";
                cin >> Late;
            } while (Late != 'Y' && Late != 'y' && Late != 'N' && Late != 'n');

            // Adding LateLetter a value for Display
            if (Late == 'Y' || Late == 'y') {
                LateLetter = "Yes";
                wage = wage - deduction;
            } else {
                LateLetter = "No";
            }

            // Prevents user from entering number greater than 3
            do {

                cout << " --- # Position # --- " << endl;
                cout << "[1] Regular" << endl;
                cout << "[2] Manager" << endl;
                cout << "[3] Executive" << endl;
                cout << " --- Position --- " << endl;
                cout << "Enter your position number: ";
                cin >> choice;

            } while (choice < 1 || choice > 3);

            // Error Prevention of Work Position Selection
            if (choice < 1 || choice > 3) {
                cout << "\nInvalid Choice.";
                break;
            }

            // Government Deduction Selection
            do {
                cout << " --- # Select Government Deduction # --- " << endl;
                cout << "[1] SSS" << endl;
                cout << "[2] PhilHealth" << endl;
                cout << "[3] Pag-Ibig" << endl;
                cout << "Enter your Government Deduction: ";
                cin >> GovChoice;
            } while (GovChoice < 0 || GovChoice > 3);

            // Error Prevention of Goverment Choice
            if (GovChoice < 1 || GovChoice > 3) {
                cout << "\nInvalid Choice.";
                break;
            }


            // Giving Work Position a Name
                                                        // Added Wage Value
                                                        // Added TaxAmount & TotalWage a value
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

            // Deductions
            double sssDeduction = wage * 0.045;
            double philhealthDeduction = wage * 0.02;
            double pagIbigDeduction = 100;
            double grossPay = wage + OvertimePay + Honorarium + Adjustment;
            double trainLawTax = grossPay * 0.10;

            // Added GV (Goverment) a Name value
            // Added Each Government Choice in a total wage
            switch (GovChoice) {
                case 1:
                    GVName = "SSS";
                    TotalWage = TotalWage - sssDeduction;
                    break;
                case 2:
                    GVName = "PhilHealth";
                    TotalWage = TotalWage - philhealthDeduction;
                    break;
                case 3:
                    GVName = "Pag-Ibig";
                    TotalWage = TotalWage - pagIbigDeduction;
                    break;
            }

            // Total Wage (Includes deduction and total pay)
            TotalWage = grossPay - TaxAmount - Absences - Tardiness - LoanDeduction - sssDeduction - philhealthDeduction - pagIbigDeduction;

            cout << "\n --- Employee Payroll Calculator --- \n" << endl;

            cout << " --- # Employee Info # --- " << endl;
            cout << "Employee Name : " << Name[e] << endl;
            cout << "Employee ID : " << EmployeeID[e] << endl;
            cout << "Work Position : " << PositionName[e] << endl;

            cout << "\n --- # Earnings # --- \n" << endl;
            cout << "Hourly Rate : " << rate[e] << endl;
            cout << "Overtime Hour : " << Overtime[e] << endl;
            cout << "Overtime Pay : " << OvertimePay << endl;
            cout << "Honorarium : " << Honorarium << endl;
            cout << "Adjustment : " << Adjustment << endl;
            cout << "Wage : " << wage << endl;

            cout << "\n --- # Deductions # --- \n" << endl;
            cout << "Absences : " << Absences << endl;
            cout << "Tardiness : " << Tardiness << endl;
            cout << "Late? : " << LateLetter << endl;
            cout << "Loan Deduction : " << LoanDeduction << endl;
            cout << "Tax Amount : " << TaxAmount << endl;
            cout << "Train Law Tax : " << trainLawTax << endl;
            cout << "Government Deduction : " << GVName << endl;
            
            cout << "\n --- # Total Wage # --- \n" << endl;
            cout << "Total Wage : " << TotalWage << endl;

            cout << "\n--- Employee Payroll Calculator --- \n" << endl;
        }
    }

    return 0;
}
