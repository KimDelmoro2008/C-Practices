#include <iostream>
using namespace std;

// function declaration (prototype)
int add(int a, int b);
void greet(string name);
int square(int n = 2); // default parameter

int main() {
    int sum = add(5, 7);
    cout << "5 + 7 = " << sum << endl;

    greet("Maria");

    cout << "square(4) = " << square(4) << endl;
    cout << "square() with default = " << square() << endl;

    return 0;
}

// function definitions
int add(int a, int b) {
    return a + b;
}

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int square(int n) {
    return n * n;
}
