#include <iostream>
using namespace std;

void displayQuestion(string questions[], string choices[][4], int q);
bool checkAnswer(char playerAnswer, char correctAnswer);
void displayResult(int score);

// Displays Questions
void displayQuestion(string questions[], string choices[][4], int q) {
    cout << "\n Question " << q + 1 << ": " << questions[q] << endl;
    for (int c = 0; c < 4; c++) {
        cout << " " << choices[q][c] << endl;
    }
}

// Checks the answers
bool checkAnswer(char playerAnswer, char correctAnswer) {
    if (playerAnswer == correctAnswer) {
        return true;
    } else {
        return false;
    }
}

// Displays Results
void displayResult(int score) {
    cout << "\n ===== RESULTS =====" << endl;
    cout << " Your Score : " << score << " / 5" << endl;

    switch (score) {
        case 5:
            cout << " Perfect Score! Outstanding!" << endl;
            break;
        case 4:
            cout << " Excellent!" << endl;
            break;
        case 3:
            cout << " Good Job!" << endl;
            break;
        case 2:
            cout << " Keep Practicing!" << endl;
            break;
        default:
            cout << " Better Luck Next Time!" << endl;
    }
}

int main() {

    string questions[5] = {
        "Which data type stores a single character?",
        "Which keyword is used to declare a constant?",
        "What does void mean in a function?",
        "Which loop is best for a fixed number of repetitions?",
        "What is the result of 10 % 3?"
    };

    string choices[5][4] = {
        {"A. int",      "B. string",    "C. char",      "D. bool"},
        {"A. fixed",    "B. static",    "C. const",     "D. define"},
        {"A. No parameters", "B. Returns nothing", "C. Private function", "D. Runs automatically"},
        {"A. while",    "B. for",       "C. Both",      "D. Neither"},
        {"A. 3",        "B. 0",         "C. 1",         "D. 2"}
    };

    char correctAnswers[5] = {'C', 'C', 'B', 'B', 'C'};

    int score = 0;
    char playerAnswer;

    cout << "\n ===== C++ QUIZ BEE =====" << endl;
    cout << " Answer each question by entering A, B, C, or D." << endl;


    for (int q = 0; q < 5; q++) {
        displayQuestion(questions, choices, q);

        playerAnswer = ' ';
        while (playerAnswer != 'A' && playerAnswer != 'a' &&
               playerAnswer != 'B' && playerAnswer != 'b' &&
               playerAnswer != 'C' && playerAnswer != 'c' &&
               playerAnswer != 'D' && playerAnswer != 'd') {
            cout << " Enter answer (A/B/C/D): ";
            cin >> playerAnswer;
            if (playerAnswer != 'A' && playerAnswer != 'a' &&
                playerAnswer != 'B' && playerAnswer != 'b' &&
                playerAnswer != 'C' && playerAnswer != 'c' &&
                playerAnswer != 'D' && playerAnswer != 'd') {
                cout << " Invalid! Enter A, B, C, or D only." << endl;
            }
    }

            // Convert lowercase to uppercase
        if (playerAnswer >= 'a' && playerAnswer <= 'd') {
            playerAnswer = playerAnswer - 32;
        }

        // Check answer
        if (checkAnswer(playerAnswer, correctAnswers[q])) {
            cout << " Correct! +1" << endl;
            score++;
        } else {
            cout << " Wrong! The correct answer is " << correctAnswers[q] << endl;
        }
    }

    displayResult(score);

    return 0;

}