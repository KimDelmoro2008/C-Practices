#include <iostream>
using namespace std;

int main() {

    int num;
    int count = 0;
    int average;
    

    cout << "\n Name : Group 3";
    cout << "\n Section : IT11S1";
    
    while (count < 10) {
        cout << "\n Enter a number : ";
        cin >> num;
        count++;

    }

    average = 10 / num;

    cout << "The average of all numbers = " << average << endl;



}