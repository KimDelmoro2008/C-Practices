#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "i = " << i << endl;
    }

    // counting down
    for (int i = 5; i >= 1; i--) {
        cout << "countdown: " << i << endl;
    }

    // nested for loop
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            cout << row * col << " ";
        }
        cout << endl;
    }

    return 0;
}
