#include <iostream>
using namespace std;

int main() {

    string food = "pizza";
    // A reference variable is an alias for an existing variable. It is created using the & operator:
    string &meal = food;

    // Now, you can use either food or meal to refer to the same value:
    cout << food << "\n";  // Outputs Pizza
    cout << meal << "\n";  // Outputs Pizza



    // Updating Through References
    // If you change the value of a reference variable, the original variable will also change (and vice versa), because they both refer to the same memory location:

    string food1 = "pizza";
    string &meal1 = food1;

    meal1 = "burger";
    
    cout << food1 << "\n"; // Outputs Burger
    cout << meal1 << "\n"; // Outputs Burger
}