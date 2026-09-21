#include <iostream>
using namespace std;

int main() {
    short a = 100;
    int b = 100000;
    long c = 10000000L;
    long long d = 10000000000LL;

    float e = 3.14f;
    double f = 3.14159265359;

    int hexNum = 0x1A;   // hexadecimal
    int octNum = 017;    // octal
    int binNum = 0b1010; // binary (C++14+)

    cout << "short: " << a << endl;
    cout << "int: " << b << endl;
    cout << "long: " << c << endl;
    cout << "long long: " << d << endl;
    cout << "float: " << e << endl;
    cout << "double: " << f << endl;
    cout << "hex 0x1A: " << hexNum << endl;
    cout << "octal 017: " << octNum << endl;
    cout << "binary 0b1010: " << binNum << endl;

    return 0;
}
