#include <iostream>
using namespace std;

int main() {

    int num;
    int SumDiv4 = 0, SumDiv7 = 0, SumDiv8 = 0;
    int SumEven = 0;

    cout << "\n Name : Group 3";
    cout << "\n Section : IT11S1";
    
    for (int i = 0; i < 8; i++) {
        cout << "\n Enter a number : ";
        cin >> num;

        if (num % 4 == 0) {
            SumDiv4 = SumDiv4 + num;
        }

        if (num % 7 == 0) {
            SumDiv7 = SumDiv7 + num;
        }

        if (num % 8 == 0) {
            SumDiv8 = SumDiv8 + num;
        }

    }

    cout << "The sum of all inputted numbers divisible by 4 is " << SumDiv4 << endl; 
    cout << "The sum of all inputted numbers divisible by 7 is " << SumDiv7 << endl; 
    cout << "The sum of all inputted numbers divisible by 8 is " << SumDiv8 << endl; 



}