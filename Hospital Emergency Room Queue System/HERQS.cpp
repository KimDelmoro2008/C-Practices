#include <iostream>
using namespace std;

int main() {

    string PatientName;
    string symptomName;
    int TimeWait;
    int PriorityLevel;
    int age;
    int symptom;

    cout << " --- Hospital Emergency Room --- " << endl;
    cout << "[1] Critical" << endl;
    cout << "[2] Serious" << endl;
    cout << "[3] Moderate" << endl;
    cout << "[4] Minor" << endl;
    cout << "Enter your symptom level: ";
    cin >> symptom;

    if (symptom == 1) {
        symptomName = "Critical";
        PriorityLevel = 1;
        TimeWait = 0;
    } else if (symptom == 2) {
        symptomName = "Serious";
        PriorityLevel = 2;
        TimeWait = 15;
    } else if (symptom == 3) {
        symptomName = "Moderate";
        PriorityLevel = 3;
        TimeWait = 45;
    } else if (symptom == 4) {
        symptomName = "Minor";
        PriorityLevel = 4;
        TimeWait = 60;
    } else {
        cout << "Invalid" << endl;
    }

    cout << "What's your name? : ";
    cin >> PatientName;

    cout << "How old are you? : ";
    cin >> age;

    int totaltimeWait;

    if (age >= 12) {
        totaltimeWait = TimeWait - 15;
    }
    if (age <= 60) {
        totaltimeWait = TimeWait - 15;
    }

    if (totaltimeWait <= 0) {
        totaltimeWait = 0;
    }

    int FinalTimeWait = totaltimeWait;

    cout << " --- Patient Card --- " << endl;
    cout << "[1] Name : " << PatientName << endl;
    cout << "[2] Age : " << age << endl;
    cout << "[3] Severity Label : " << symptomName << endl;
    cout << "[4] Priority Number : " << PriorityLevel << endl;
    cout << "[5] Final EST Wait Time : " << FinalTimeWait << endl;
    cout << " --- Patient Card --- " << endl;





}