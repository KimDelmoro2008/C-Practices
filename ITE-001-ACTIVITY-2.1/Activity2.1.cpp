#include <iostream>
using namespace std;

int main() {

    double score;

    cout << "Enter your Exam Score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Your Grade is A";
    }
    if (score >= 80 && score < 90) {
        cout << "Your Grade is B";
    }
    if (score >= 70 && score < 80) {
        cout << "Your Grade is C";
    }
    if (score >= 60 && score < 70) {
        cout << "Your Grade is D";
    }
    if (score < 60) {
        cout << "Your Grade is F";
    }

    if (score < 0 || score > 100) {
        cout << "Invalid Score";
    }
    return 0;
}       