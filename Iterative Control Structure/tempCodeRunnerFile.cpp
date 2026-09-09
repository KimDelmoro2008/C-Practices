#include <iostream>
using namespace std;

int main() {

    int num;
    int count = 0;
    int sumEven = 0;
    int productOdd = 1;

    cout << "\n Name : Group 3";
    cout << "\n Section : IT11S1";
    
    while (count < 4) {
        cout << "\n Enter a number : ";
        cin >> num;

        if (num % 2 == 0) {
            sumEven = num + sumEven;
        } else {
            productOdd = productOdd * num;
        }

        count++;

    }

    cout << "\n The product of an odd inputted number is : " << productOdd << endl;
    cout << "\n The sum of an even inputted number is " << sumEven << endl;

}