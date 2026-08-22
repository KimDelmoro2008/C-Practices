#include <iostream>
using namespace std;

int main() {
    
    string name;

    nameRecog:
    cout << "Welcome to the Name Recognition Program" << endl;
    cout << "[1] Dexter" << endl;
    cout << "[2] Ferrer" << endl;
    cout << "[3] Kobs" << endl;
    cout << "[4] Other" << endl;
    cout << "Enter your name: ";
    cin >> name;

    if (name == "Dexter" || name == "dexter") {
        cout << "Evicted in Computer Programming (ITE-001) >:(" << endl;
        system("pause");
        goto nameRecog;
    } else {
        if (name == "Ferrer" || name == "ferrer") {
            cout << "Evicted in Computer Programming (ITE-001) >:(" << endl;
            system("pause");
            goto nameRecog;
        } else {
            if (name == "Kobs" || name == "kobs") {
                cout << "Evicted in Computer Programming (ITE-001) >:(" << endl;
                system("pause");
                goto nameRecog;
            } else {
                cout << "Welcome to Computer Programming" << endl;
                system("pause");
                goto nameRecog;
            }
        }
    } system("pause");

}