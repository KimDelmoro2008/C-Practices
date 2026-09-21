#include <iostream>
using namespace std;

#define PI 3.14159 // macro constant (defined before main)

const int MAX_STUDENTS = 40; // const keyword

int main() {
    const double GRAVITY = 9.81;

    cout << "PI: " << PI << endl;
    cout << "MAX_STUDENTS: " << MAX_STUDENTS << endl;
    cout << "GRAVITY: " << GRAVITY << endl;

    // GRAVITY = 10.0; // ERROR: cannot modify a const variable

    return 0;
}
