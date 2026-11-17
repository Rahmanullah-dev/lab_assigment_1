#include <iostream>
using namespace std;

int main() {
    float marks;
    char grade;

    cout << "Enter marks (77-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks!" << endl;
        return 0;
    }

    if (marks >= 90)
        grade = 'A';
    else if (marks >= 80)
        grade = 'B';
    else if (marks >= 70)
        grade = 'C';
    else if (marks >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}
