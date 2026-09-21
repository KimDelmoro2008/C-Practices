#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName; // concatenation

    cout << "Full name: " << fullName << endl;
    cout << "Length: " << fullName.length() << endl;
    cout << "First character: " << fullName[0] << endl;

    fullName += "!"; // append
    cout << "After append: " << fullName << endl;

    string greeting;
    cout << "Enter your name: ";
    getline(cin, greeting); // read a full line
    cout << "Hello, " << greeting << "!" << endl;

    return 0;
}
