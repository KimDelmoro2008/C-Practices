#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    cout << boolalpha;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    bool p = true, q = false;
    cout << "p && q : " << (p && q) << endl; // AND
    cout << "p || q : " << (p || q) << endl; // OR
    cout << "!p     : " << (!p) << endl;     // NOT

    int age = 25;
    bool eligible = (age >= 18) && (age <= 60);
    cout << "eligible: " << eligible << endl;

    return 0;
}
