#include <iostream>
using namespace std;

// Function to calculate BMI
float calculateBMI(float weight, float height) {
    return weight / (height * height);
}

// Function to estimate daily water intake (liters)
float waterIntake(float weight) {
    return weight * 0.033;
}

// Function to estimate calories (very simple logic)
float calorieEstimate(float weight, float height, int age, int activityLevel) {
    float baseCalories = (10 * weight) + (6.25 * (height * 100)) - (5 * age);
    if (activityLevel == 1)
        return baseCalories * 1.2;   // Low activity
    else if (activityLevel == 2)
        return baseCalories * 1.55;  // Moderate
    else
        return baseCalories * 1.9;   // High
}

int main() {
    int choice;
    cout << "===== Healthy Life Calculator =====\n";

    do {
        cout << "\nSelect an option:\n";
        cout << "1. Calculate BMI\n";
        cout << "2. Daily Water Intake\n";
        cout << "3. Calorie Estimate\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            float weight, height;
            cout << "Enter your weight (kg): ";
            cin >> weight;
            cout << "Enter your height (meters): ";
            cin >> height;

            float bmi = calculateBMI(weight, height);
            cout << "Your BMI is: " << bmi << endl;

            if (bmi < 18.5)
                cout << "Status: Underweight\n";
            else if (bmi < 25)
                cout << "Status: Normal\n";
            else if (bmi < 30)
                cout << "Status: Overweight\n";
            else
                cout << "Status: Obese\n";
        }
        else if (choice == 2) {
            float weight;
            cout << "Enter your weight (kg): ";
            cin >> weight;
            cout << "Recommended daily water intake: " 
                 << waterIntake(weight) << " liters\n";
        }
        else if (choice == 3) {
            float weight, height;
            int age, level;
            cout << "Enter your weight (kg): ";
            cin >> weight;
            cout << "Enter your height (meters): ";
            cin >> height;
            cout << "Enter your age: ";
            cin >> age;
            cout << "Select activity level (1 = Low, 2 = Moderate, 3 = High): ";
            cin >> level;

            cout << "Estimated daily calories: "
                << calorieEstimate(weight, height, age, level) << " kcal\n";
        }
        else if (choice == 4) {
            cout << "\nThanks for using Healthy Life Calculator! Stay fit and hydrated.\n";
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
