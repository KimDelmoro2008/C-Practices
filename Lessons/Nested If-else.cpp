#include <iostream>
using namespace std;

int main() {
    int score = 85;
    char grade;

    if (score >= 90) {
        grade = 'A';
    } else if (score >= 80) {
        if (score >= 85) {
            grade = 'B'; // upper half of the 80s
        } else {
            grade = 'B'; // could be split further, e.g. 'B-'
        }
    } else if (score >= 70) {
        grade = 'C';
    } else if (score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Score: " << score << " -> Grade: " << grade << endl;

    int age = 20;
    bool hasLicense = true;

    if (age >= 18) {
        if (hasLicense) {
            cout << "You can drive." << endl;
        } else {
            cout << "You need a license first." << endl;
        }
    } else {
        cout << "You are too young to drive." << endl;
    }

    return 0;
}
