#include <iostream>
using namespace std;

int main() {

    double quiz1, quiz2, quiz3;
    double quiz4, quiz5;
    double quiz6;
    int result;


    cout << "-- Enter scores for the first 3 Quizzes --" << endl;
    cout << "Enter your Quiz 1 Score: (50 Items): ";
    cin >> quiz1;

    cout << "Enter your Quiz 2 Score: (50 Items): ";
    cin >> quiz2;

    cout << "Enter your Quiz 3 Score: (50 Items): ";
    cin >> quiz3;

    cout << "-- Enter scores for the last 2 Quizzes --" << endl;
    cout << "Enter your Quiz 4 Score: (50 Items): ";
    cin >> quiz4;

    cout << "Enter your Quiz 5 Score: (50 Items): ";
    cin >> quiz5;

    cout << "-- Enter score for the Last Quiz --" << endl;
    cout << "Enter your Quiz 6 Score: (50 Items): ";
    cin >> quiz6;

    double average = (quiz1 + quiz2 + quiz3 + quiz4 + quiz5 + quiz6) / 6;

    
    cout << " -- Result --" << endl;
    cout << "Quiz 1 Score: " << quiz1 << endl;
    cout << "Quiz 2 Score: " << quiz2 << endl;
    cout << "Quiz 3 Score: " << quiz3 << endl;
    cout << "Quiz 4 Score: " << quiz4 << endl;
    cout << "Quiz 5 Score: " << quiz5 << endl;
    cout << "Quiz 6 Score: " << quiz6 << endl;
    cout << "Your Average Score is: " << average << endl;

    if (average >= 40) {
        result = 1;
    } else {
        result = 0;
    }

    switch (result) {
        case 1:
            cout << "You passed the quizzes." << endl;
            break;
        case 0:
            cout << "You failed the quizzes." << endl;
            break;
        }   


}