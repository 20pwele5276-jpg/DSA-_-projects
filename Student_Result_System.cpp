#include <iostream>
using namespace std;

int main() {
    int numSubjects;
    cout << "Enter number of subjects: ";
    cin >> numSubjects;

    float marks, total = 0, average;
    char grade;

    // Input marks for each subject
    for (int i = 1; i <= numSubjects; i++) {
        cout << "Enter marks for subject " << i << ": ";
        cin >> marks;
        total += marks; // Add to total
    }

    // Calculate average
    average = total / numSubjects;

    // Determine grade
    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Determine pass/fail
    string result = (average >= 50) ? "Pass" : "Fail";

    // Display results
    cout << "\n===== Student Result =====" << endl;
    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;
    cout << "Grade = " << grade << endl;
    cout << "Result = " << result << endl;

    return 0;
}
