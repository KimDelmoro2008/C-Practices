#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {

	double rph, mmw, inc,cp,la, pathfit;
	double generalAverage;
	double final;
	double CumLaude;

	cout << "Please enter your Readings in Philippine History Grades: ";
	cin >> rph;

	cout << "Please enter your Modern Mathematics in the World Grades: ";
	cin >> mmw;

	cout << "Please enter your Introduction to Computing Grades: ";
	cin >> inc;

	cout << "Please enter your Computer Programming Grades: ";
	cin >> cp;

	cout << "Please enter your Linear Algebra Grades: ";
	cin >> la;

	cout << "Please enter your PathFit Grades: ";
	cin >> pathfit;

	cout << "Please wait for your grades to be computed." << endl;

	generalAverage = rph + mmw + inc + cp + la + pathfit;
	final = generalAverage / 5;

	cout << "====================" << endl;
	cout << "     YOUR GRADES    " << endl;
	cout << "====================" << endl;
	cout << "RPH     :   " << rph << endl;
	cout << "MMW     :   " << mmw << endl;
	cout << "INC     :   " << inc << endl;
	cout << "CP      :   " << cp << endl;
	cout << "LA      :   " << la << endl;
	cout << "Pathfit :   " << pathfit << endl;
	cout << "GA      :   " << final << endl;
    if (final < 2) {
        cout << "Qualified for Cum Laude : YES" << endl;
    } else {
        cout << "Qualified for Cum Laude : NO" << endl;
    }
}