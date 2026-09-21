#include <iostream>
using namespace std;

int main() {
    int number = 7;

    if (number > 0) {
        cout << number << " is positive." << endl;
    } else if (number < 0) {
        cout << number << " is negative." << endl;
    } else {
        cout << number << " is zero." << endl;
    }

    int age = 16;
    if (age >= 18) {
        cout << "You can vote." << endl;
    } else {
        cout << "You cannot vote yet." << endl;
    }

    return 0;
}
