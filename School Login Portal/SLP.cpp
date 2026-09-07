#include <iostream>
#include <string>
using namespace std;

    // Main Login
    int login, password, studentID;

    // Student Information
    string StudentName = "Kim Delmoro", Section = "IT11S1";

    // Courses Grades - Name
    int ComputerProgramming, IntroToComputing, LinearAlgebra, MMW, PathFIT, NSTP, RPH;
    string Course1 = "Computer Programming", Course2 = "Intro to Computing", Course3 = "Linear Algebra", Course4 = "MMW", Course5 = "PathFIT", Course6 = "NSTP", Course7 = "RPH";

    // Courses Grades - Score
    int ComputerProgrammingScore, IntroToComputingScore, LinearAlgebraScore, MMWScore, PathFITScore, NSTPScore, RPHScore;

    // Teacher Information
    string TeacherName = "John Doe", TeacherSection = "Faculty of Computer Studies";
    int TeacherID = 2622100, TeacherPassword = 159200;

    // Choice for Student and Teacher
    int choice;



void StudentLogin() {

    int finalGrade;
    char YN;

    cout << "\n === Student Login === \n";

    cout << "\n - # Enter Student ID : ";
    cin >> studentID;

    cout << "\n - # Enter Student Name : ";
    getline(cin >> ws, StudentName);

    cout << "\n - # Enter Password : ";
    cin >> password;

    if (studentID == 2611200 && password == 13370630) {
        StudentPortal:
        cout << "\n - # Login Successful!";
        cout << "\n - # Welcome, " << StudentName << "!";
        cout << "\n - # Section: " << Section << "\n";

        cout << "\n - # Student Grades - # ";
        cout << "\n - # [1] Input All Courses Grades";
        cout << "\n - # [2] Display All Courses Grades";
        cout << "\n - # [3] Check if Passed or Failed";
        cout << "\n - # [4] Exit";
        cout << "\n - # Enter your choice : ";
        int studentChoice;
        cin >> studentChoice;

            switch (studentChoice) {
                case 1:
                    cout << " - # Enter Computer Programming Grade : ";
                    cin >> ComputerProgrammingScore;

                    cout << " - # Enter Intro to Computing Grade : ";
                    cin >> IntroToComputingScore;

                    cout << " - # Enter Linear Algebra Grade : ";
                    cin >> LinearAlgebraScore;

                    cout << " - # Enter MMW Grade : ";
                    cin >> MMWScore;

                    cout << " - # Enter PathFIT Grade : ";
                    cin >> PathFITScore;

                    cout << " - # Enter NSTP Grade : ";
                    cin >> NSTPScore;

                    cout << " - # Enter RPH Grade : ";
                    cin >> RPHScore;

                    cout << "\n - # All courses grades have been inputted successfully!";
                    goto StudentPortal;
                    

                case 2:
                    cout << "\n === Student Grades === ";
                    cout << "\n - # " << Course1 << " : " << ComputerProgrammingScore;
                    cout << "\n - # " << Course2 << " : " << IntroToComputingScore;
                    cout << "\n - # " << Course3 << " : " << LinearAlgebraScore;
                    cout << "\n - # " << Course4 << " : " << MMWScore;
                    cout << "\n - # " << Course5 << " : " << PathFITScore;
                    cout << "\n - # " << Course6 << " : " << NSTPScore;
                    cout << "\n - # " << Course7 << " : " << RPHScore; 
                    cout << "\n - # All courses grades have been displayed successfully!";
                    cout << "\n - # Back to Student Portal? (Y/N) : ";
                    cin >> YN;
                    if (YN == 'Y' || YN == 'y') {
                        goto StudentPortal;
                    } else {
                        cout << "\n - # Thank you for using TIP QC Portal!";
                    } break;

                case 3:
                    cout << "\n === Student Grades === \n";
                    cout << "\n - # " << Course1 << " : " << ComputerProgrammingScore;
                    cout << "\n - # " << Course2 << " : " << IntroToComputingScore;
                    cout << "\n - # " << Course3 << " : " << LinearAlgebraScore;
                    cout << "\n - # " << Course4 << " : " << MMWScore;
                    cout << "\n - # " << Course5 << " : " << PathFITScore;
                    cout << "\n - # " << Course6 << " : " << NSTPScore;
                    cout << "\n - # " << Course7 << " : " << RPHScore;

                    if (ComputerProgrammingScore >= 75 && IntroToComputingScore >= 75 && LinearAlgebraScore >= 75 && MMWScore >= 75 && PathFITScore >= 75 && NSTPScore >= 75 && RPHScore >= 75) {
                        cout << "\n\n - # Congratulations! You have passed all your courses.";
                    } else {
                        cout << "\n\n - # Sorry, you have failed one or more courses. Please try again next semester.";
                    } 

                    finalGrade = (ComputerProgrammingScore + IntroToComputingScore + LinearAlgebraScore + MMWScore + PathFITScore + NSTPScore + RPHScore) / 7;

                    if (finalGrade >= 1.5) {
                        cout << "\n\n - # Congratulations! You are Cum Laude!";
                        goto StudentPortal;
                    } else {
                        cout << "\n\n - # Sorry, you are not eligible for Cum Laude.";
                        goto StudentPortal;
                    } 
                case 4:
                    cout << "\n - # Thank you for using TIP QC Portal!";
                    break;
            }

    } else {
        cout << "\n - # Invalid Student ID or Password. Please try again.";
    }




}

void TeacherLogin() {

    char TeacherYN;
    string Room1 = "Room 101", Room2 = "Room 102", Room3 = "Room 103", Room4 = "Room 104", Room5 = "Room 105", Room6 = "Room 106", Room7 = "Room 107";
    int Room1TeacherAttendance, Room2TeacherAttendance, Room3TeacherAttendance, Room4TeacherAttendance, Room5TeacherAttendance, Room6TeacherAttendance, Room7TeacherAttendance;
    char Room1Attendance, Room2Attendance, Room3Attendance, Room4Attendance, Room5Attendance, Room6Attendance, Room7Attendance;

    cout << "\n === Teacher Login === \n";

    cout << "\n - # Enter Teacher ID : ";
    cin >> TeacherID;

    cout << "\n - # Enter Teacher Name : ";
    getline(cin >> ws, TeacherName);

    cout << "\n - # Enter Password : ";
    cin >> TeacherPassword;

    if (TeacherID == 2622100 && TeacherPassword == 159200) {
        TeacherPortal:
        cout << "\n - # Login Successful!";
        cout << "\n - # Welcome, " << TeacherName << "!";
        cout << "\n - # Section: " << TeacherSection << "\n";

        cout << "\n - # Check Attended Class? (Y/N) : ";
        cin >> TeacherYN;

        if (TeacherYN == 'Y' || TeacherYN == 'y') {
            cout << "\n - # Check Attended Class - # ";
            cout << "\n - # [1] Computer Programming - " << Room1 << " (Y/N): ";
            cin >> Room1Attendance;
            cout << "\n - # [2] Intro to Computing - " << Room2 << " (Y/N): ";
            cin >> Room2Attendance;
            cout << "\n - # [3] Linear Algebra - " << Room3 << " (Y/N): ";
            cin >> Room3Attendance;
            cout << "\n - # [4] MMW - " << Room4 << " (Y/N): ";
            cin >> Room4Attendance;
            cout << "\n - # [5] PathFIT - " << Room5 << " (Y/N): ";
            cin >> Room5Attendance;
            cout << "\n - # [6] NSTP - " << Room6 << " (Y/N): ";
            cin >> Room6Attendance;
            cout << "\n - # [7] RPH - " << Room7 << " (Y/N): ";
            cin >> Room7Attendance;

            cout << "\n - # Attendance has been recorded successfully!";
            cout << "\n - # Teacher Attended Class - # ";
            cout << "\n - # [1] Computer Programming - " << Room1 << " : " << Room1Attendance;
            cout << "\n - # [2] Intro to Computing - " << Room2 << " : " << Room2Attendance;
            cout << "\n - # [3] Linear Algebra - " << Room3 << " : " << Room3Attendance;
            cout << "\n - # [4] MMW - " << Room4 << " : " << Room4Attendance;
            cout << "\n - # [5] PathFIT - " << Room5 << " : " << Room5Attendance;
            cout << "\n - # [6] NSTP - " << Room6 << " : " << Room6Attendance;
            cout << "\n - # [7] RPH - " << Room7 << "   : " << Room7Attendance;
        } else {
            cout << "\n - # You have not attended the class.";
            goto TeacherPortal;
        }

    } else {
        cout << "\n - # Invalid Teacher ID or Password. Please try again.";
    }
}


int main() {

    cout << "\n === Welcome to TIP QC Portal === \n";
    cout << "\n - # [1] Login as Student";
    cout << "\n - # [2] Login as Teacher";
    cout << "\n - # [3] Exit";
    cout << "\n\n - # Enter your choice : ";
    cin >> choice;

    switch (choice) {
        case 1: StudentLogin(); break;
        case 2: TeacherLogin(); break;
        case 3: 
            cout << "\n - # Thank you for using TIP QC Portal!"; 
            break;
    }




}

