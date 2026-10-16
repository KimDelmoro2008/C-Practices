#include <iostream>
using namespace std;

void bubbleSort(int numbers[], int size) {
    int temp = 0;
    for (int pass = 0; pass < size - 1; pass++) {
        for (int x = 0; x < size - 1; x++) {
            if (numbers[x] > numbers[x + 1]) {
                temp = numbers[x];
                numbers[x] = numbers[x + 1];
                numbers[x + 1] = temp;
            }
        }
    }
}

void displayArray(int numbers[], int size) {
    for (int x = 0; x < size; x++) {
        cout << numbers[x] << " ";
    }
}

int main() {

    int numbers[5] = {5, 3, 8, 1 ,2};
    int size = 5;
    int temp = 0;

    cout << "Original : ";
    displayArray(numbers, size);

    bubbleSort(numbers, size);

    cout << "Sorted : ";
    displayArray(numbers, size);



}