#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

int binomialCoeff(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int sumOfN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

bool checkArmstrong(int n) {
    int original = n, result = 0;
    while (n > 0) {
        int digit = n % 10;
        result += digit * digit * digit;
        n /= 10;
    }
    return result == original;
}

int main() {
    int choice;
    cout << "=== Math Function Library ===\n";
    cout << "1. Factorial\n";
    cout << "2. Sum of Digits\n";
    cout << "3. Power (base^exponent)\n";
    cout << "4. Binomial Coefficient\n";
    cout << "5. Sum of N Natural Numbers\n";
    cout << "6. Check Armstrong Number\n";
    cout << "7. Exit\n";

    do {
        cout << "\nEnter your choice (1–7): ";
        cin >> choice;

        if (choice == 1) {
            int n;
            cout << "Enter number: ";
            cin >> n;
            cout << "Factorial = " << factorial(n) << endl;

        } else if (choice == 2) {
            int n;
            cout << "Enter number: ";
            cin >> n;
            cout << "Sum of digits = " << sumOfDigits(n) << endl;

        } else if (choice == 3) {
            int base, exp;
            cout << "Enter base and exponent: ";
            cin >> base >> exp;
            cout << "Result = " << power(base, exp) << endl;

        } else if (choice == 4) {
            int n, r;
            cout << "Enter n and r: ";
            cin >> n >> r;
            cout << "Binomial Coefficient = " << binomialCoeff(n, r) << endl;

        } else if (choice == 5) {
            int n;
            cout << "Enter number: ";
            cin >> n;
            cout << "Sum = " << sumOfN(n) << endl;

        } else if (choice == 6) {
            int n;
            cout << "Enter number: ";
            cin >> n;
            if (checkArmstrong(n))
                cout << n << " is an Armstrong number.\n";
            else
                cout << n << " is not an Armstrong number.\n";

        } else if (choice == 7) {
            cout << "\nThanks for using Math Function Library!" << endl;
            break;

        } else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (true);

    return 0;
}
