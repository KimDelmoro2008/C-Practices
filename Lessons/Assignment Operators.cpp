#include <iostream>
using namespace std;

int main() {
    int a = 10;

    a += 5;  cout << "a += 5 -> " << a << endl;
    a -= 3;  cout << "a -= 3 -> " << a << endl;
    a *= 2;  cout << "a *= 2 -> " << a << endl;
    a /= 4;  cout << "a /= 4 -> " << a << endl;
    a %= 3;  cout << "a %= 3 -> " << a << endl;

    int b = 8;
    b <<= 1; cout << "b <<= 1 -> " << b << endl;
    b >>= 2; cout << "b >>= 2 -> " << b << endl;
    b &= 3;  cout << "b &= 3 -> " << b << endl;
    b |= 4;  cout << "b |= 4 -> " << b << endl;
    b ^= 1;  cout << "b ^= 1 -> " << b << endl;

    return 0;
}
