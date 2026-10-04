#include <iostream>
using namespace std;

enum Level {
    Low = 1,
    Medium,
    High
};

int main() {
    enum Level myLevel = Medium;

    switch (myLevel) {
        case 1:
            cout << "Low Level";
            break;
        case 2:
            cout << "Medium level";
            break;
        case 3:
            cout << "High level";
            break;
    }

    cout << myLevel << " " << endl;

}
