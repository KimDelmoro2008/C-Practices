#include <iostream>
using namespace std;

struct userInfo {
    string User;
    string Job;
    int Age;    
};

int main() {

    userInfo user1;
    user1.User = "kim";
    user1.Job = "Cloud Engineer";
    user1.Age = 18;

    cout << " | " << user1.User << " | " << user1.Job << " | " << user1.Age << " | " << "\n";


}