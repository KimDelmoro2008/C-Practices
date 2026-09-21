#include <iostream>
using namespace std;

int main() {
    int age = 20;           // valid
    int _score = 90;        // valid, starts with underscore
    int total_marks = 450;  // valid, snake_case
    int totalMarks2 = 450;  // valid, camelCase with number at end

    // int 2ndValue = 5;     // INVALID: cannot start with a digit
    // int int = 5;          // INVALID: "int" is a reserved keyword
    // int total-marks = 5;  // INVALID: hyphens not allowed

    int Age = 21; // different from 'age' because C++ is case-sensitive

    cout << "age: " << age << ", Age: " << Age << endl;
    cout << "_score: " << _score << endl;
    cout << "total_marks: " << total_marks << endl;

    return 0;
}
