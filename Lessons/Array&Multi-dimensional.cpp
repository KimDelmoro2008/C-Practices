#include <iostream>
using namespace std;

int main() {
    // 1D Array
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "1D Array elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    // 2D Array (multi-dimensional)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    cout << "2D Array elements:" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl; // new line after each row
    }

    cout << matrix[1][2] << endl;
    cout << numbers[0];

    return 0;
}