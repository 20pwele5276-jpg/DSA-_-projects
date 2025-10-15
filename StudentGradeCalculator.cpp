#include <iostream>
using namespace std;

// Function to take input for 5 subjects
void inputMarks(int marks[], int size) {
    cout << "\nEnter marks for 5 subjects (out of 100):\n";
    for (int i = 0; i < size; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }
}

// Function to calculate total marks
int calculateTotal(int marks[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += marks[i];
    }
    return total;
}

// Function to calculate average marks
float calculateAverage(int total, int size) {
    return static_cast<float>(total) / size;
}

// Function to determine grade
char calculateGrade(float average) {
    if (average >= 90)
        return 'A';
    else if (average >= 80)
        return 'B';
    else if (average >= 70)
        return 'C';
    else if (average >= 60)
        return 'D';
    else
        return 'F';
}

// Function to display result
void displayResult(int total, float average, char grade) {
    cout << "\n=== Student Result Summary ===\n";
    cout << "Total Marks: " << total << "/500\n";
    cout << "Average: " << average << "%\n";
    cout << "Grade: " << grade << endl;
}

int main() {
    int marks[5];
    int total;
    float average;
    char grade;

    cout << "===== Student Grade Calculator =====\n";

    // Step 1: Input marks
    inputMarks(marks, 5);

    // Step 2: Calculate total
    total = calculateTotal(marks, 5);

    // Step 3: Calculate average
    average = calculateAverage(total, 5);

    // Step 4: Get grade
    grade = calculateGrade(average);

    // Step 5: Display final result
    displayResult(total, average, grade);

    cout << "\nThank you for using Student Grade Calculator!\n";
    return 0;
}
