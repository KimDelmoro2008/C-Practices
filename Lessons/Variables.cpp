#include <iostream>
using namespace std;

int globalVar = 100; // global variable

int main() {
    int age = 25;             // declaration + initialization
    int height;                // declaration only
    height = 170;               // assignment later

    int x = 1, y = 2, z = 3;   // multiple variables in one line

    {
        int localVar = 5; // scoped only inside this block
        cout << "localVar inside block: " << localVar << endl;
    }

    cout << "age: " << age << endl;
    cout << "height: " << height << endl;
    cout << "x, y, z: " << x << ", " << y << ", " << z << endl;
    cout << "globalVar: " << globalVar << endl;

    return 0;
}
