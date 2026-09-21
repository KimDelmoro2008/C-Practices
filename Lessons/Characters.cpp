#include <iostream>
using namespace std;

int main() {
    char grade = 'A';
    char newline = '\n';
    char tab = '\t';

    cout << "grade: " << grade << endl;
    cout << "ASCII value of grade: " << int(grade) << endl;

    char nextGrade = grade + 1; // char arithmetic
    cout << "nextGrade: " << nextGrade << endl;

    for (char c = 'a'; c <= 'e'; c++) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
