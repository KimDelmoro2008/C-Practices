#include<iostream>
using namespace std;


int getDifference(int, int);
int getQuotient(int, int);
int getModulus(int, int);
int getLowest(int, int, int);

int num1, num2, num3;

int getDifference(int a, int b) {
    return a - b;
}

int getQuotient(int a, int b) {
    return a / b;
}

int getModulus(int a, int b) {
    return a % b;
}

int getLowest(int a, int b, int c) {
    int lowest = a;
    if (b < lowest) lowest = b;
    if (c < lowest) lowest = c;
    return lowest;
}

int main() {

    cout << "********************************************************";
    cout << "\n* Name:    GROUP 3                                *";
    cout << "\n* Section: IT11S1                                      *";
    cout << "\n********************************************************\n";

    cout << "Enter the first number: ";   cin >> num1;
    cout << "Enter the second number: ";  cin >> num2;
    cout << "Enter the third number: ";   cin >> num3;

    cout << endl;

    cout << "The difference between the first number and the second number is " << getDifference(num1, num2) << endl;
    cout << "The quotient of the third number and the second number is " << getQuotient(num3, num2) << endl;
    cout << "The modulus of the first number and the third number is " << getModulus(num1, num3) << endl;
    cout << "The lowest number is " << getLowest(num1, num2, num3) << endl;

    return 0;
}