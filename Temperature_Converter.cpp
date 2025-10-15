#include <iostream>
using namespace std;

// Function to convert Celsius → Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit → Celsius
float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius → Kelvin
float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

// Function to convert Kelvin → Celsius
float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

int main() {
    int choice;
    float temp, result;

    cout << "===== Temperature Converter =====\n";

    do {
        cout << "\nChoose conversion type:\n";
        cout << "1. Celsius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celsius\n";
        cout << "3. Celsius to Kelvin\n";
        cout << "4. Kelvin to Celsius\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter temperature in Celsius: ";
                cin >> temp;
                result = celsiusToFahrenheit(temp);
                cout << "Temperature in Fahrenheit: " << result << "°F\n";
                break;

            case 2:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temp;
                result = fahrenheitToCelsius(temp);
                cout << "Temperature in Celsius: " << result << "°C\n";
                break;

            case 3:
                cout << "Enter temperature in Celsius: ";
                cin >> temp;
                result = celsiusToKelvin(temp);
                cout << "Temperature in Kelvin: " << result << "K\n";
                break;

            case 4:
                cout << "Enter temperature in Kelvin: ";
                cin >> temp;
                result = kelvinToCelsius(temp);
                cout << "Temperature in Celsius: " << result << "°C\n";
                break;

            case 5:
                cout << "\nThanks for using Temperature Converter. Stay cool (or warm)!\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
