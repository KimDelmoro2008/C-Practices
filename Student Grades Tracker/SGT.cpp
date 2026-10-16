#include <iostream>
using namespace std;

int main() {

    string studentName[3]; // Student's Name
    string studentID[3]; // Student's ID


    double studentAverage[3]; // 3 Student's Averages
    double studentGrades[3][2]; /* [3] - Student's Name & ID Input, [2] - Student's Subjects */  

    // Used for-loop to ask 3 student's Name and ID
    for (int student = 0; student < 3; student++) {
        cout << "\nEnter " << student + 1 << "'s Student Name: ";
        cin >> studentName[student];

        cout << "Enter " << student + 1 << "'s Student ID: ";
        cin >> studentID[student];

        double total = 0;

        // Used nested for-loop to ask Student's Grades
        for (int subject = 0; subject < 2; subject++) {
            cout << "Enter [" << subject + 1 << "] Subject Grade : ";
            cin >> studentGrades[student][subject];

            // Totals the Grades of every student
            // [0][0] - 1st Subject [0][1] - 2nd Subject (For 1st Student)
            // [1][0] - 1st Subeject [1][1] - 2nd Subject (For 2nd Student)
            // [2][0] - 1st Subeject [2][1] - 2nd Subject (For 3nd Student)
            total += studentGrades[student][subject];
        }

        // Every student calculates their Average by Total / 2
        studentAverage[student] = total / 2;

    }

    // Prints the student's record
    for (int student = 0; student < 3; student++) {
        cout << "\n --- # Student " << studentName[student] << "'s Record # --- ";
        cout << "\n Student Name : " << studentName[student];
        cout << "\n Student ID : " << studentID[student];
        cout << "\n Student Grades : ";
        for (int subject = 0; subject < 2; subject++) { 
            cout << studentGrades[student][subject] << " ";
        }
        cout << "\n Student Average : " << studentAverage[student] << endl;
        cout << "\n ---------------------------------------- \n";


    }


}