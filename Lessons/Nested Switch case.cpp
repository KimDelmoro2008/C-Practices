#include <iostream>
using namespace std;

int main() {
    int department = 1; // 1 = Science, 2 = Arts
    int year = 2;

    switch (department) {
        case 1:
            cout << "Department: Science" << endl;
            switch (year) {
                case 1:
                    cout << "Subjects: Biology, Physics" << endl;
                    break;
                case 2:
                    cout << "Subjects: Chemistry, Advanced Physics" << endl;
                    break;
                default:
                    cout << "Unknown year" << endl;
            }
            break;
        case 2:
            cout << "Department: Arts" << endl;
            switch (year) {
                case 1:
                    cout << "Subjects: History, Literature" << endl;
                    break;
                case 2:
                    cout << "Subjects: Philosophy, Economics" << endl;
                    break;
                default:
                    cout << "Unknown year" << endl;
            }
            break;
        default:
            cout << "Unknown department" << endl;
    }

    return 0;
}
