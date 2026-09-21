#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 3.14f;
    double c = 3.14159;
    char d = 'A';
    bool e = true;

    cout << "int a = " << a << ", size = " << sizeof(a) << " bytes" << endl;
    cout << "float b = " << b << ", size = " << sizeof(b) << " bytes" << endl;
    cout << "double c = " << c << ", size = " << sizeof(c) << " bytes" << endl;
    cout << "char d = " << d << ", size = " << sizeof(d) << " bytes" << endl;
    cout << "bool e = " << e << ", size = " << sizeof(e) << " bytes" << endl;

    return 0;
}
