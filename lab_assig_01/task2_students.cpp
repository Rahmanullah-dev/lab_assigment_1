#include <iostream>
#include <string>
using namespace std;

int main() {
    string name[3];
    int roll[3];
    float gpa[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter details of student " << i + 1 << endl;
        cout << "Name: Rahmam ullah";
        cin >> ws;
        getline(cin, name[i]);
        cout << "Roll number: 25464";
        cin >> roll[i];
        cout << "GPA:3.1 ";
        cin >> gpa[i];
        cout << endl;
    }

    cout << "----- Student Records -----" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ": " << name[i]
             << " | Roll No: " << roll[i]
             << " | GPA: " << gpa[i] << endl;
    }
    return 0;
}
