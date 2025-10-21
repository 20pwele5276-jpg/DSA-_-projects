#include <iostream>
using namespace std;

int main() {
    int choice;
    long long num1, num2; // long long to handle big factorial/powers

    while (true) {
        // Display menu
        cout << "\n===== MINI CALCULATOR =====" << endl;
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
        cout << "5. Factorial\n6. Power\n7. Bitwise AND\n8. Bitwise OR\n9. Bitwise XOR\n";
        cout << "10. Decimal to Binary\n11. Binary to Decimal\n12. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 + num2 << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 - num2 << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << num1 * num2 << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 == 0) 
                    cout << "Error: Division by zero!" << endl;
                else
                    cout << "Result: " << (double)num1 / num2 << endl;
                break;

            case 5: // Factorial
                cout << "Enter a number: ";
                cin >> num1;
                {
                    long long fact = 1;
                    for (int i = 1; i <= num1; i++)
                        fact *= i;
                    cout << "Factorial: " << fact << endl;
                }
                break;

            case 6: // Power
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                {
                    long long result = 1;
                    for (int i = 0; i < num2; i++)
                        result *= num1;
                    cout << "Result: " << result << endl;
                }
                break;

            case 7: // Bitwise AND
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << (num1 & num2) << endl;
                break;

            case 8: // Bitwise OR
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << (num1 | num2) << endl;
                break;

            case 9: // Bitwise XOR
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << (num1 ^ num2) << endl;
                break;

            case 10: // Decimal to Binary
                cout << "Enter decimal number: ";
                cin >> num1;
                {
                    long long temp = num1;
                    string binary = "";
                    if (temp == 0) binary = "0";
                    while (temp > 0) {
                        binary = char((temp % 2) + '0') + binary;
                        temp /= 2;
                    }
                    cout << "Binary: " << binary << endl;
                }
                break;

            case 11: // Binary to Decimal
                {
                    string bin;
                    cout << "Enter binary number: ";
                    cin >> bin;
                    long long dec = 0;
                    for (int i = 0; i < bin.length(); i++) {
                        dec = dec * 2 + (bin[i] - '0');
                    }
                    cout << "Decimal: " << dec << endl;
                }
                break;

            case 12:
                cout << "Thank you for using Mini Calculator!" << endl;
                return 0;

            default:
                cout << "Invalid option. Try again!" << endl;
        }
    }
}
