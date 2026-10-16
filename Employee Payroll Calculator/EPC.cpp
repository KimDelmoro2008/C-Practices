#include<iostream>
using namespace std;

int main() {

    char ProcessYN;
    int NumEmployees;

    // Admin Credentials
    // Fixed Admin User & Password
    string AdminUser = "Admin";
    string AdminPassword = "GR3";

    string AdminUserInput;
    string AdminPasswordInput;

    int LoginAttempt = 0;

    string Name[100], PositionName[100];
    int Overtime[100];
    double rate[100];
    int EmployeeID[100];

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

        string LateLetter, GVName = "";
        char Late;
        double OvertimePay, TaxAmount, TotalWage, wage;
        double Honorarium = 0, Adjustment = 0;
        double Absences = 0, Tardiness = 0, LoanDeduction = 0;
        int deduction = 250;
        int Regular = 500, Manager = 1000, Executive = 5000;
        int GovChoice, choice;
        int absencesCount = 0, tardinessMinutes = 0;

            cout << "--- Employee # " << e << " ---" << endl;
            cout << "Enter Employee Name : ";
            cin >> Name[e];

            cout << "Enter Employee ID : ";
            cin >> EmployeeID[e];

            do {
                cout << "Enter hourly rate: ";
                cin >> rate[e];

                if (rate[e] < 0 || rate[e] > 8) {
                    cout << "Maximum of 8 hours rate only." << endl;
                }

            } while (rate[e] < 0 || rate[e] > 8);

            do {
                cout << "Enter Overtime Hour: ";
                cout << "(Maximum Overtime Hours : 6 Hours): ";
                cin >> Overtime[e];

                if (Overtime[e] < 0) {
                    cout << "Invalid Input." << endl;
                } else if (Overtime[e] > 6) {
                    cout << "Maximum of 6 Hours only." << endl;
                } else {
                    break;
                }

            } while (Overtime[e] < 0 || Overtime[e] > 6);

            if (Overtime[e] > 6) {
                Overtime[e] = 6; //            Overtime Pay Computation
            }

            OvertimePay = Overtime[e] * (rate[e] * 1.5);
            wage = 0;            // Fixed Value because there is no value for wage yet

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

            // Honorarium 
            double honorariumMaximum = wage * 0.25;
            do {
                cout << "\n --- # Honorarium Pay (Maximum : PHP " << honorariumMaximum << ") # --- \n";
                cout << "Enter Honorarium amount: ";
                cin >> Honorarium;
                if (Honorarium < 0 || Honorarium > honorariumMaximum) {
                    cout << "Exceeded maximum legal honorarium ceiling limit (25% of Base Pay).\n";
                }
            } while (Honorarium < 0 || Honorarium > honorariumMaximum);

            // Adjustment
            double adjustmentMaximum = 5000;
            do {
                cout << "\n  --- # Adjustment (Maximum : PHP " << adjustmentMaximum << ")  # --- " << endl;
                cout << "Enter Adjustment amount: ";
                cin >> Adjustment;
                    if (Adjustment < 0 || Adjustment > adjustmentMaximum) {
                    cout << "Maximum ceiling is PHP 5,000.00.\n";
                }
            } while (Adjustment < 0 || Adjustment > adjustmentMaximum);

            // Absences Tracking
            do {
                cout << "\n --- # Absences Count (Max: 5 days) # --- \n";
                cout << "Enter absences count: ";
                cin >> absencesCount;

                Absences = absencesCount * 500.0; // Absences Deduction
                if (Absences > wage) {
                    cout << "Absence penalty calculations cannot exceed base paycheck components.\n";
                }

            } while (absencesCount < 0 || Absences > wage); 

            // Tardiness
            do {
                cout << "\n  --- # Tardiness # --- " << endl;
                cout << "Enter tardiness in minutes: ";
                cin >> tardinessMinutes;
                Tardiness = tardinessMinutes * 5.0;  

                // Tardiness Deduction
                if (Tardiness > wage) {
                    cout << "Late Deduction cannot be higher than base pay" << endl;
                    Tardiness = wage;
                }

            } while (tardinessMinutes < 0);

            // Loan Deduction
            double loanMaximum = wage * 0.50;
            do {
                cout << "\n  --- # Loan Deduction (Maximum : PHP " << loanMaximum << ")  # --- " << endl;
                cout << "Enter loan deduction amount: ";
                cin >> LoanDeduction;

                if (LoanDeduction < 0 || LoanDeduction > loanMaximum) {
                    cout << "Loan Deduction cannot be higher than base pay" << endl;
                }
            } while (LoanDeduction < 0 || LoanDeduction > loanMaximum);

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


            // Error Prevention of Work Position Selection
            if (choice < 1 || choice > 3) {
                cout << "\nInvalid Choice.";
                break;
            }

            double sssDeduction = 0;
            double philhealthDeduction = 0;
            double pagIbigDeduction = 0;
            string selectedDeduction = "";

            // Checks if user has these Government Deductions
            // Turns True if they choose One of Government Deductions
            // Once True it will displayed on the Payslip
            bool hasSSS = false;
            bool hasPhilHealth = false;
            bool hasPagIbig = false;

            // Government Deduction Selection Loop
            do {
                cout << "\n --- # Select Government Deductions # --- " << endl;
                cout << " [1] Add SSS" << endl;
                cout << " [2] Add PhilHealth" << endl;
                cout << " [3] Add Pag-Ibig" << endl;
                cout << " [4] Proceed to Payslip" << endl;
                cout << "Enter your choice (1-4): ";
                cin >> GovChoice;

                if (GovChoice == 1) {
                    double sssBasePay = wage;
                    if (sssBasePay < 5000) {
                        sssBasePay = 5000;
                    }
                    if (sssBasePay > 35000) {
                        sssBasePay = 35000;
                    }
                    sssDeduction = sssBasePay * 0.05;
                    hasSSS = true; // Remembers that SSS was added
                    cout << " Successful! SSS has been added: PHP " << sssDeduction << endl;
                } else if (GovChoice == 2) {
                    philhealthDeduction = wage * 0.025;
                    if (wage <= 10000) {
                        philhealthDeduction = 250.0;
                    }
                    if (wage >= 100000) {
                        philhealthDeduction = 2500.0;
                    }
                    hasPhilHealth = true; // Remembers that PhilHealth was added
                    cout << " Successful! PhilHealth has been added: PHP " << philhealthDeduction << endl;
                } else if (GovChoice == 3) {
                    if (wage <= 1500) {
                        pagIbigDeduction = wage * 0.01;
                    } else {
                        double fundBase = wage;
                        if (wage > 10000) {
                            fundBase = 10000;
                        }
                        pagIbigDeduction = fundBase * 0.02;
                    }
                    hasPagIbig = true; // Remembers that Pag-Ibig was added
                    cout << " Successful! Pag-Ibig has been added: PHP " << pagIbigDeduction << endl;
                } else if (GovChoice == 4) {
                    cout << " Thank you, Calculating your Payslip." << endl;
                } else {
                    cout << " Invalid Choice." << endl;
                }

            } while (GovChoice != 4);

            // Government Names Bool
            // False = Doesn't Display
            // True = It Display from the payslip
            string addedDeductionsList = "";
            if (hasSSS) {
                addedDeductionsList = addedDeductionsList + "SSS ";
            } 

            if (hasPhilHealth) {
                addedDeductionsList = addedDeductionsList + "PhilHealth ";
            } 

            if (hasPagIbig) {
                addedDeductionsList = addedDeductionsList + "Pag-Ibig ";
            }
            
            if (addedDeductionsList == "") {
                addedDeductionsList = "None Selected";
            }

            // Deductions
            double totalGovDeductions = sssDeduction + philhealthDeduction + pagIbigDeduction;
            double grossPay = wage + OvertimePay + Honorarium + Adjustment;

            // Train Tax Law
            double monthlyTaxable = wage - totalGovDeductions;
                if (monthlyTaxable < 0) {
                    monthlyTaxable = 0;
                }
                    
                double annualTaxable = monthlyTaxable * 12;
                double annualTax = 0;

                if (annualTaxable <= 250000) {
                    annualTax = 0;
                } else if (annualTaxable <= 400000) {
                     annualTax = (annualTaxable - 250000) * 0.15;
                } else if (annualTaxable <= 800000) {
                    annualTax = 22500 + (annualTaxable - 400000) * 0.20;
                } else if (annualTaxable <= 2000000) {
                    annualTax = 102500 + (annualTaxable - 800000) * 0.25;
                } else if (annualTaxable <= 8000000) {
                    annualTax = 402500 + (annualTaxable - 2000000) * 0.30;
                } else {
                    annualTax = 2202500 + (annualTaxable - 8000000) * 0.35;
                }

                TaxAmount = annualTax / 12;
                double trainLawTax = grossPay * 0.10;

                if (TotalWage < 0) {
                    TotalWage = 0;
                }

            // Total Wage (Includes deduction and total pay)
            TotalWage = grossPay - TaxAmount - Absences - Tardiness - LoanDeduction - sssDeduction - philhealthDeduction - pagIbigDeduction;

            cout << "\n ============================================ " << endl;
            cout << "         --- EMPLOYEE PAYROLL REPORT ---       " << endl;
            cout << " ============================================ " << endl;
            cout << " Employee Name : " << Name[e] << endl;
            cout << " Employee ID   : " << EmployeeID[e] << endl;
            cout << " Work Position : " << PositionName[e] << endl;
            cout << "\n --- # Earnings # --- " << endl;
            cout << " Hours Worked  : " << rate[e] << endl;
            cout << " Overtime Hour : " << Overtime[e] << endl;
            cout << " Overtime Pay  : PHP " << OvertimePay << endl;
            cout << " Honorarium    : PHP " << Honorarium << endl;
            cout << " Adjustment    : PHP " << Adjustment << endl;
            cout << " Basic Wage    : PHP " << wage << endl;
            cout << " GROSS PAY     : PHP " << grossPay << endl;
            cout << "\n --- # Deductions # --- " << endl;
            cout << " Absences Fee  : PHP " << Absences << endl;
            cout << " Tardiness Fee : PHP " << Tardiness << endl;
            cout << " Late Status   : " << LateLetter << endl;
            cout << " Loan Payout   : PHP " << LoanDeduction << endl;
            cout << " Income Tax Due: PHP " << TaxAmount << endl;
            cout << " Flat Tax Calc : PHP " << trainLawTax << endl;
            cout << " Gov Program   : " << addedDeductionsList << " (Total: PHP " << totalGovDeductions << ")" << endl;
            cout << "\n --- # Final Paycheck Balance # --- " << endl;
            cout << " TOTAL NET TAKE-HOME WAGE : PHP " << TotalWage << endl;
            cout << " ============================================ \n" << endl;
        }
    }

    return 0;
}
