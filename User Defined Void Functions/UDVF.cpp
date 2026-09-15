#include<iostream>
using namespace std;

void getDifference(int, int);
void getQuotient(int, int);
void getModulus(int, int);
void getLowest(int, int, int);

int num1, num2, num3;

void getDifference(int a, int b) {
    cout << "The difference between the first number and the second number is " << a - b << endl;
}

void getQuotient(int a, int b) {
    cout << "The quotient of the third number and the second number is " << a / b << endl;
}

void getModulus(int a, int b) {
    cout << "The modulus of the first number and the third number is " << a % b << endl;
}

void getLowest(int a, int b, int c) {
    int lowest = a;
    if (b < lowest) lowest = b;
    if (c < lowest) lowest = c;
    cout << "The lowest number is " << lowest << endl;
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

    getDifference(num1, num2);
    getQuotient(num3, num2);
    getModulus(num1, num3);
    getLowest(num1, num2, num3);

    return 0;
}