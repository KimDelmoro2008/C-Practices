#include <iostream>
using namespace std;

int main() {

    double score, attendance;

    cout << "Enter your Exam Score (0-100): ";
    cin >> score;

    cout << "Enter your Attendance Percentage (0-100): ";
    cin >> attendance;
    

    if (score >= 60) {

        if (attendance >= 75) {
            cout << "You have passed the course!\n";

            if (score >= 90) {
                cout << "Your Grade is A";
            } else if (score >= 80) {
                cout << "Your Grade is B";
            } else if (score >= 70) {
                cout << "Your Grade is C";
            } else {
                cout << "Your Grade is D";
            }
        } else {
            cout << "You have failed the course due to low attendance.";
        }
    } else {
        if (attendance >= 75) {
            cout << "You have failed the course due to low exam score.";
        } else {
            cout << "You have failed the course due to low exam score and low attendance.";
        }
    }    
}