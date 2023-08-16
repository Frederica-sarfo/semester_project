
#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    string names[numStudents];
    int ages[numStudents];
    double grades[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << i + 1 << ":" << endl;

        cout << "Name: ";
        cin.ignore(); // Clear the newline character from previous input
        getline(cin, names[i]);

        cout << "Age: ";
        cin >> ages[i];

        cout << "Grade: ";
        cin >> grades[i];

        cout << endl;
    }

    cout << "Student Database:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student " << i + 1 << " - Name: " << names[i] << ", Age: " << ages[i] << ", Grade: " << grades[i] << endl;
    }

    return 0;
}



