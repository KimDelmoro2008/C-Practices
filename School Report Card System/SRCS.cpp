#include <iostream>
#include <string>
using namespace std;

// Checks the Highest Grade of every Students.
void findHighest(double grades[3][4], double highest[3]) {
    for (int student = 0; student < 3; student++) {
        highest[student] = grades[student][0];

        for (int subject = 1; subject < 4; subject++) {
            if (grades[student][subject] > highest[student]) {
                highest[student] = grades[student][subject];
            }
        }
    }
}

// Checks the Lowest Grade of every Students.
void findLowest(double grades[3][4], double lowest[3]) {
    for (int student = 0; student < 3; student++) {
        lowest[student] = grades[student][0];

        for (int subject = 1; subject < 4; subject++) {
            if (grades[student][subject] < lowest[student]) {
                lowest[student] = grades[student][subject];
            }
        }
    }
}

// Calculates the Average Grade of every Students.
void computeAverage(double grades[3][4], double studentAverage[3]) {
    for (int student = 0; student < 3; student++) {
        double sum = 0;

        for (int subject = 0; subject < 4; subject++) {
            sum = sum + grades[student][subject];
        }
        studentAverage[student] = sum / 4;
    }
}

// Determines whether the student has passed or not.
void determineRemark(double studentAverage[3], string remark[3]) {
    for (int student = 0; student < 3; student++) {
        if (studentAverage[student] >= 75) {
            remark[student] = "PASSED";
        } else {
            remark[student] = "FAILED";
        }
    }
}

// Main Function
int main() {

    double grades[3][4];
    string studentName[3];
    double studentAverage[3], highest[3], lowest[3];
    string remark[3];

    for (int student = 0; student < 3; student++) {
        cout << "Enter Student " << student + 1 << "'s Name : ";
        cin >> studentName[student];
        
        for (int subject = 0; subject < 4; subject++) {
            cout << "Enter [" << subject + 1 << "] Subject Grade : ";
            cin >> grades[student][subject];
        }
        cout << "\n";
    }

    findHighest(grades, highest);
    findLowest(grades, lowest);
    computeAverage(grades, studentAverage);
    determineRemark(studentAverage, remark);

    cout << "\n========== STUDENT REPORT CARD ==========\n";
    for (int student = 0; student < 3; student++) {
        cout << "\n Student Name   : " << studentName[student];
        cout << "\n Grades         : ";
        for (int subject = 0; subject < 4; subject++) {
            cout << grades[student][subject] << " ";
        }
        cout << "\n Average Grade  : " << studentAverage[student];
        cout << "\n Highest Grade  : " << highest[student];
        cout << "\n Lowest Grade   : " << lowest[student];
        cout << "\n Remark         : " << remark[student];
        cout << "\n-----------------------------------------\n";
    }

    return 0;
}