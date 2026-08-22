#include <iostream>
using namespace std;

int main() {

    int timeslot;
    int selection;


    cout << " -- Morning Movies -- \n";
    cout << "[1] The Lion King (Animated Movie)" << endl;
    cout << "[2] Home Alone (Comedy)" << endl;
    cout << "[3] Man on Wire (Documentary)" << endl;

    cout << " -- Afternoon Movies -- \n";
    cout << "[1] John Wick (Action)" << endl;
    cout << "[2] Passengers (Romance)" << endl;
    cout << "[3] The Loved One (Drama)" << endl;

    cout << " -- Evening Movies -- \n";
    cout << "[1] The Conjuring (Horror)" << endl;
    cout << "[2] Seven (Thriller)" << endl;
    cout << "[3] Interstellar (Science Fiction)" << endl;

    cout << " -- Timeslot Selection -- \n";
    cout << "[1] Morning Movies" << endl;
    cout << "[2] Afternoon Movies" << endl;
    cout << "[3] Evening Movies" << endl;


    cout << "Enter your preferred timeslot (1-3): ";
    cin >> timeslot;

    switch (timeslot) {
        case 1:
            cout << "You have selected Morning Movies. Please select a movie: \n";
            cout << " -- Morning Movies -- \n";
            cout << "[1] The Lion King (Animated Movie)" << endl;
            cout << "[2] Home Alone (Comedy)" << endl;
            cout << "[3] Man on Wire (Documentary)" << endl;
            cout << "Enter your movie selection (1-3): ";
            cin >> selection;

            if (selection == 1) {
                cout << "You have selected The Lion King (Animated Movie). Enjoy your movie!" << endl;
            } else if (selection == 2) {
                cout << "You have selected Home Alone (Comedy). Enjoy your movie!" << endl;
            } else if (selection == 3) {
                cout << "You have selected Man on Wire (Documentary). Enjoy your movie!" << endl;
            } else {
                cout << "Invalid movie selection. Please try again." << endl;
            }
            break;
        case 2:
            cout << "You have selected Afternoon Movies. Please select a movie: \n";
            cout << " -- Afternoon Movies -- \n";
            cout << "[1] John Wick (Action)" << endl;
            cout << "[2] Passengers (Romance)" << endl;
            cout << "[3] The Loved One (Drama)" << endl;
            cout << "Enter your movie selection (1-3): ";
            cin >> selection;

            if (selection == 1) {
                cout << "You have selected John Wick (Action). Enjoy your movie!" << endl;
            } else if (selection == 2) {
                cout << "You have selected Passengers (Romance). Enjoy your movie!" << endl;
            } else if (selection == 3) {
                cout << "You have selected The Loved One (Drama). Enjoy your movie!" << endl;
            } else {
                cout << "Invalid movie selection. Please try again." << endl;
            }
            break;
        case 3:
            cout << "You have selected Evening Movies. Please select a movie: \n";
            cout << " -- Evening Movies -- \n";
            cout << "[1] The Conjuring (Horror)" << endl;
            cout << "[2] Seven (Thriller)" << endl;
            cout << "[3] Interstellar (Science Fiction)" << endl;
            cout << "Enter your movie selection (1-3): ";
            cin >> selection;

            if (selection == 1) {
                cout << "You have selected The Conjuring (Horror). Enjoy your movie!" << endl;
            } else if (selection == 2) {
                cout << "You have selected Seven (Thriller). Enjoy your movie!" << endl;
            } else if (selection == 3) {
                cout << "You have selected Interstellar (Science Fiction). Enjoy your movie!" << endl;
            } else {
                cout << "Invalid movie selection. 2Please try again." << endl;
            }
            break;
        default:
            cout << "Invalid timeslot selection. Please try again." << endl;
            break;
    }

    return 0;
}