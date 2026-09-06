#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string task;
    int choice;

    while (true) {

        cout << "\n === TO-DO LIST === \n" << endl;
        cout << "[1] Add \n";
        cout << "[2] View \n";
        cout << "[3] Exit \n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\n Enter a Task: ";
            getline(cin >> ws, task);

            ofstream file("TDLS.txt",ios::app);
            file << task << endl;
            file.close();

            cout << "Task Saved! \n";
        } else if (choice == 2) {
            cout << "\n === YOUR TASK === \n";

            ifstream file("TDLS.txt");

            int number = 1;

            while (getline(file, task)) {
                cout << "[" << number << "] " << task << endl;
                number++;
            }

            file.close();

        } else if (choice == 3) {
            cout << "\n Goodbye! \n";
            break;
        } else {
            cout << "\n Invalid Choice! \n";
        }


    }

    return 0;
}