#include <iostream>
using namespace std;

int main() {
    // for loop: best when you know the number of iterations
    cout << "for loop:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << i << " ";
    }
    cout << endl;

    // while loop: checks condition before running
    cout << "while loop:" << endl;
    int j = 0;
    while (j < 3) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    // do-while loop: runs at least once
    cout << "do-while loop:" << endl;
    int k = 0;
    do {
        cout << k << " ";
        k++;
    } while (k < 3);
    cout << endl;

    // break and continue
    cout << "break/continue demo:" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 5) break;       // stop the loop entirely
        if (i % 2 == 0) continue; // skip even numbers
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
