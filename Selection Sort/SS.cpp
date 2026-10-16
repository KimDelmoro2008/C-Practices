#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    int numbers[5] = {5, 3, 8, 1, 2};
    int size = 5;
    int temp = 0;
    int minIndex = 0;

    cout << "\nUnsorted Selection Arrays : ";
    for (int n = 0; n < 5; n++) {
        Sleep(1000);
        cout << numbers[n] << " ";
    }

    cout << "\nSorted Selection Arrays : ";
    for (int pass = 0; pass < size - 1) {
        minIndex = pass;

        for (int x = pass + 1; x < size; x++) {
            if (numbers[x] < numbers[minIndex]) {
                minIndex = x;
            }
        }

        temp = numbers[pass];
        numbers[pass] = numbers[minIndex];
        numbers[minIndex] = temp;
    }

    for (int x = 0; x < size; x++ {
        Sleep(500);
        cout << numbers[x] << " ";
    }
    
    cout << endl;



}