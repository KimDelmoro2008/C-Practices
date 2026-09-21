#include <iostream>
using namespace std;

int main() {
    int i = 1;

    // do-while runs the body at least once, then checks the condition
    do {
        cout << "i = " << i << endl;
        i++;
    } while (i <= 5);

    int choice = 0;
    // Example loop (would normally read user input with cin >> choice)
    do {
        cout << "Menu: 1) Start  2) Exit -> checking choice = " << choice << endl;
        choice++;
    } while (choice != 1 && choice < 2);

    cout << "Final choice: " << choice << endl;

    return 0;
}
