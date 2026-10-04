#include <iostream>
using namespace std;

int main() {
    
    // To create a structure, use the struct keyword and declare each of its members inside curly braces
    // After the declaration, specify the name of the structure variable (myStructure in the example below):
    struct {
        int numberStructure;
        string characterStructure;
    } k;

    cout << "\nAdd a number to your structure: ";
    cin >> k.numberStructure;

    cout << "Add a string to your structure : ";
    cin >> k.characterStructure;


    cout << "\n Your Structure : \n";
    cout << k.numberStructure << endl;
    cout << k.characterStructure << endl;

    struct {
        string Name;
        int yearLevel;
        int age;
    } name1, name2, name3;

    name1.Name = "Kim";
    name1.yearLevel = 1;
    name1.age = 18;

    name2.Name = "Raniel";
    name2.yearLevel = 1;
    name2.age = 18;

    name3.Name = "Kobs";
    name3.yearLevel = 1;
    name3.age = 18;

    cout << name1.Name << " " << name1.yearLevel << " " << name1.age << "\n";
    cout << name2.Name << " " << name2.yearLevel << " " << name2.age << "\n";
    cout << name3.Name << " " << name3.yearLevel << " " << name3.age << "\n";
}