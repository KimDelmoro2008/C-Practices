#include <iostream>
using namespace std;

int main() {

    string q1c, q2c, q3c, q4c, q5c;
    char q1, q2, q3, q4, q5;
    char qa1 = 'B';
    char qa2 = 'D';
    char qa3 = 'A';
    char qa4 = 'C';
    char qa5 = 'B';
    int quiztotal;
    int score = 0;
    
    Retake:
    cout << " --- QUIZ NI DELMORO ---" << endl;
    cout << " --- QUIZ 1 ---" << endl;
    cout << "1. Ano Favourite Line ni Raniel" << endl;
    cout << "A - Kupal" << endl;
    cout << "B - Tantado" << endl;
    cout << "C - Tangina" << endl;
    cout << "D - Adriel" << endl;
    cout << "Enter your Answer: ";
    cin >> q1;

    cout << " --- QUIZ NI DELMORO ---" << endl;
    cout << " --- QUIZ 2 ---" << endl;
    cout << "2. Ano ang Best Joke sa IT11S1" << endl;
    cout << "A - Ano Tara" << endl;
    cout << "B - Tantado" << endl;
    cout << "C - Kobs" << endl;
    cout << "D - Payag ka" << endl;
    cout << "Enter your Answer: ";
    cin >> q2;

    cout << " --- QUIZ NI DELMORO ---" << endl;
    cout << " --- QUIZ 3 ---" << endl;
    cout << "3. Sino si Adriel?" << endl;
    cout << "A - Manipulator" << endl;
    cout << "B - Humble" << endl;
    cout << "C - Halimeow" << endl;
    cout << "D - Michael Jackson" << endl;
    cout << "Enter your Answer: ";
    cin >> q3;

    cout << " --- QUIZ NI DELMORO ---" << endl;
    cout << " --- QUIZ 4 ---" << endl;
    cout << "4. Sino si Delmoro?" << endl;
    cout << "A - Manipulator" << endl;
    cout << "B - Kupal" << endl;
    cout << "C - True Manipulator" << endl;
    cout << "D - No Reaction" << endl;
    cout << "Enter your Answer: ";
    cin >> q4;

    cout << " --- QUIZ NI DELMORO ---" << endl;
    cout << " --- QUIZ 5 ---" << endl;
    cout << "5. Ano ang nakita mo kay kobs?" << endl;
    cout << "A - Jenny" << endl;
    cout << "B - Kinikilig sa harapan ng screen" << endl;
    cout << "C - Nahuling nag shapeshift sa harap ng medbay" << endl;
    cout << "D - Nang breed" << endl;
    cout << "Enter your Answer: ";
    cin >> q5;

    if (q1 == 'B' || q1 == 'b') {
        q1c = "Correct";
        score++;
    } else {
        q1c = "Incorrect";
    }

    if (q2 == 'D' || q2 == 'd') {
        q2c = "Correct";
        score++;
    } else {
        q2c = "Incorrect";
    }

    if (q3 == 'A' || q3 == 'a') {
        q3c = "Correct";
        score++;
    } else {
        q3c = "Incorrect";
    }

    if (q4 == 'C' || q4 == 'c') {
        q4c = "Correct";
        score++;
    } else {
        q4c = "Incorrect";
    }

    if (q5 == 'B' || q5 == 'b') {
        q5c = "Correct";
        score++;
    } else {
        q5c = "Incorrect";
    }

    int percentage = (score / 5.0) * 100;
    char letter;

    switch (score) {
        case 1:
            letter = 'F';
        case 2:
            letter = 'D';
        case 3:
            letter = 'C';
        case 4:
            letter = 'B';
        case 5:
            letter = 'A';
        case 0:
            letter = 'F';
    }

    cout << " --- QUIZ NI DELMORO ---" << endl;
    cout << " --- Quiz Result ---" << endl;
    cout << "Quiz 1 : " << q1c << endl;
    cout << "Quiz 2 : " << q2c << endl;
    cout << "Quiz 3 : " << q3c << endl;
    cout << "Quiz 4 : " << q4c << endl;
    cout << "Quiz 5 : " << q5c << endl;
    cout << "Percentage : " << percentage << endl;
    cout << "Letter Grade : " << letter << endl;
    cout << " --- QUIZ NI DELMORO ---" << endl;
}