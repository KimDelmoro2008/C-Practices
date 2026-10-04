#include <iostream>
using namespace std;

int main() {

    // An enum is a special type that represents a group of constants (unchangeable values).
    // To create an enum, use the enum keyword, followed by the name of the enum, and separate the enum items with a comma:
    enum Level {
        Low,
        Medium,
        High
    };

    // To access the enum, you must create a variable of it.
    // Inside the main() method, specify the enum keyword, followed by the name of the enum (Level) and then the name of the enum variable (myVar in this example):
    // The assigned value must be one of the items inside the enum (LOW, MEDIUM or HIGH):
    enum Level myVar = High;

    // Print the enum variable
    cout << myVar;

    // As you know, the first item of an enum has the value 0. The second has the value 1, and so on.
    // To make more sense of the values, you can easily change them:
    enum ChangeValue {
        L = 10,
        M = 25,
        H = 50
    };

    enum ChangeValue MyVarCV = M;
    cout << MyVarCV;



}