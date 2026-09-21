#include <iostream>
using namespace std;

int main() {
    bool isRaining = true;
    bool isSunny = false;

    cout << boolalpha; // print as true/false instead of 1/0
    cout << "isRaining: " << isRaining << endl;
    cout << "isSunny: " << isSunny << endl;

    int age = 20;
    bool isAdult = (age >= 18); // result of comparison is boolean
    cout << "isAdult: " << isAdult << endl;

    if (isRaining) {
        cout << "Bring an umbrella." << endl;
    }

    return 0;
}
