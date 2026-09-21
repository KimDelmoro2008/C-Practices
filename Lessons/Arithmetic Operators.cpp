#include <iostream>
using namespace std;

int main() {
    int a = 15, b = 4;

    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;  // integer division
    cout << "a % b = " << (a % b) << endl;  // modulus (remainder)

    double x = 15.0, y = 4.0;
    cout << "x / y = " << (x / y) << endl;  // real division

    int c = 5;
    cout << "c++ (post): " << (c++) << ", now c = " << c << endl;
    cout << "++c (pre): " << (++c) << endl;

    return 0;
}
