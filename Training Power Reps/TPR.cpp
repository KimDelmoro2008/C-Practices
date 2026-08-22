#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

    int Stamina = 0, Strength = 0, Defense = 0;
    int TotalStatus;
    int StaminaReps, StrengthReps, DefenseReps;
    int MenuChoice;
    char BackChoice;

    char BossChoice;
    int BossHealth = 150, BossDamage;

    Menu:
    cout << " --- Welcome to Training Station! --- " << endl;
    Sleep(500);
    cout << "[1] Strength Training" << endl;
    cout << "[2] Stamina Straining" << endl;
    cout << "[3] Defense Training" << endl;
    cout << "[4] Show Status" << endl;
    cout << "[5] Fight Boss" << endl;
    cout << "Enter a number of your choice: ";
    cin >> MenuChoice;

    Sleep(1000);
    cout << "Loading..." << endl;
    Sleep(1000);

        switch (MenuChoice) {
            case 1:
                Sleep(500);
                cout << " --- Strength Training --- " << endl;
                Sleep(250);
                cout << "How many Repetition for Strength Training?" << endl;
                Sleep(250);
                cout << "Amount of Repetition : ";
                cin >> StrengthReps;

                for (int str = 1; str <= StrengthReps; str++) {
                    Sleep(250);
                    cout << "Strength Repetition " << str << " : Completed!" << endl;
                    Strength = Strength + 15;

                    Sleep(200);
                    cout << "Strength Gained : " << Strength << "!" << endl;
                }
                    cout << "Total Strength : " << Strength << endl;
                    cout << "Back to Menu? (Y/N): ";
                    cin >> BackChoice;

                    if (BackChoice == 'Y' || BackChoice == 'y') {
                        goto Menu;
                    } else {
                        break;
                    }
            case 2:
                Sleep(500);
                cout << " --- Stamina Training --- " << endl;
                Sleep(250);
                cout << "How many Repetition for Stamina Training?" << endl;
                Sleep(250);
                cout << "Amount of Repetitiom : ";
                cin >> StaminaReps;

                for (int sta = 1; sta <= StaminaReps; sta++) {
                    Sleep(250);
                    cout << "Stamina Repetition " << sta << " : Completed!" << endl;
                    Stamina = Stamina + 2;

                    Sleep(200);
                    cout << "Stamina Gained : " << Stamina << "!" << endl;
                }
                    cout << "Total Stamina Gained : " << Stamina << endl;
                    cout << "Back to Menu? (Y/N): ";
                    cin >> BackChoice;

                    if (BackChoice == 'Y' || BackChoice == 'y') {
                        goto Menu;
                    } else {
                        break;
                    }
            case 3:
                Sleep(500);
                cout << " --- Defense Training --- " << endl;
                cout << "How many Repetition for Defense Training?" << endl;
                Sleep(250);
                cout << "Amount of Repetition : ";
                Sleep(250);
                cin >> DefenseReps;

                for (int def = 1; def <= DefenseReps; def++) {
                    Sleep(250);
                    cout << "Defense Repetition " << def << " : Completed!" << endl;
                    Defense = Defense + 5;

                    Sleep(200);
                    cout << "Defense Gained : " << Defense << "!" << endl;
                }
                    cout << "Total Defense Gained : " << Defense << endl;
                    cout << "Back to Menu? (Y/N): ";
                    cin >> BackChoice;

                    if (BackChoice == 'Y' || BackChoice == 'y') {
                        goto Menu;
                    } else {
                        break;
                    }
            case 4: {
                TotalStatus = Strength + Stamina + Defense;
                Sleep(500);
                cout << " --- User's Status --- " << endl;
                Sleep(250);
                cout << "[1] Strength ----- " << Strength << endl;
                cout << "[2] Stamina -----  " << Stamina << endl;
                cout << "[3] Defense -----  " << Defense << endl;
                cout << "[4] Total Status ----- " << TotalStatus << endl;
                Sleep(250);
                cout << "Back to Menu? (Y/N): ";
                cin >> BackChoice;

                    if (BackChoice == 'Y' || BackChoice == 'y') {
                        goto Menu;
                    } else {
                        break;
                    }
            }
            case 5: {
                cout << "--- Fight Boss --- " << endl;
                cout << "[BOSS] : Adriel (The Manipulator)" << endl;
                cout << "Health : " << BossHealth << " || Strength : 50 || Stamina : 50" << endl;
                cout << "Do you want to attack? (Y/N) : ";
                cin >> BossChoice;

                if (BossChoice == 'Y' || BossChoice == 'y') {
                    cout << "Attacking Boss..." << endl;
                    Sleep(250);

                    BossDamage = Strength;

                    if (BossDamage >= BossHealth) {
                        cout << "Critical Hit! You dealt " << BossDamage << " damage." << endl;
                        cout << "You defeated Adriel! Victory!" << endl;
                        BossHealth = 0;
                    } else {
                        BossHealth = BossHealth - BossDamage;
                        cout << "You dealt " << BossDamage << " damage." << endl;
                        cout << "Boss Health Remaining : " << BossHealth << endl;
                        cout << "Not strong enough yet, train more and try again!" << endl;
                    }
                } else {
                    cout << "You chose not to attack." << endl;
                }

                cout << "Back to Menu? (Y/N): ";
                cin >> BackChoice;

                if (BackChoice == 'Y' || BackChoice == 'y') {
                    goto Menu;
                } else {
                    break;
                }
            }
            default:
                Sleep(500);
                cout << "Invalid Choice, Please Try Again!" << endl;
                break;
        }

    return 0;
}