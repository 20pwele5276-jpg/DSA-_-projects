#include <iostream>
using namespace std;

int main() {
    int n, choice;

    while (true) {
        cout << "\n----------------- PATTERN ART GENERATOR -------------------\n";
        cout << "1. Solid Right Triangle\n";
        cout << "2. Hollow Right Triangle\n";
        cout << "3. Solid Square\n";
        cout << "4. Hollow Square\n";
        cout << "5. Solid Diamond\n";
        cout << "6. Hollow Diamond\n";
        cout << "7. Solid Butterfly\n";
        cout << "8. Hollow Butterfly\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 9) {
            cout << "Exiting program. Goodbye!\n";
            break;
        }

        cout << "Enter number of rows: ";
        cin >> n;

        if (n <= 0) {
            cout << "Please enter a positive number.\n";
            continue;
        }

        cout << endl;

        // 1. Solid Right Triangle
        if (choice == 1) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= i; j++) cout << "* ";
                cout << endl;
            }
        }

        // 2. Hollow Right Triangle
        else if (choice == 2) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= i; j++) {
                    if (j == 1 || j == i || i == n)
                        cout << "* ";
                    else
                        cout << "  ";
                }
                cout << endl;
            }
        }

        // 3. Solid Square
        else if (choice == 3) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) cout << "* ";
                cout << endl;
            }
        }

        // 4. Hollow Square
        else if (choice == 4) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (i == 1 || i == n || j == 1 || j == n)
                        cout << "* ";
                    else
                        cout << "  ";
                }
                cout << endl;
            }
        }

        // 5. Solid Diamond
        else if (choice == 5) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n - i; j++) cout << " ";
                for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
                cout << endl;
            }
            for (int i = n - 1; i >= 1; i--) {
                for (int j = 1; j <= n - i; j++) cout << " ";
                for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
                cout << endl;
            }
        }

        // 6. Hollow Diamond
        else if (choice == 6) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n - i; j++) cout << " ";
                for (int j = 1; j <= 2 * i - 1; j++) {
                    if (j == 1 || j == 2 * i - 1)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
            for (int i = n - 1; i >= 1; i--) {
                for (int j = 1; j <= n - i; j++) cout << " ";
                for (int j = 1; j <= 2 * i - 1; j++) {
                    if (j == 1 || j == 2 * i - 1)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        // 7. Solid Butterfly
        else if (choice == 7) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= i; j++) cout << "*";
                for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
                for (int j = 1; j <= i; j++) cout << "*";
                cout << endl;
            }
            for (int i = n - 1; i >= 1; i--) {
                for (int j = 1; j <= i; j++) cout << "*";
                for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
                for (int j = 1; j <= i; j++) cout << "*";
                cout << endl;
            }
        }

        // 8. Hollow Butterfly
        else if (choice == 8) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= i; j++) {
                    if (j == 1 || j == i)
                        cout << "*";
                    else
                        cout << " ";
                }
                for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
                for (int j = 1; j <= i; j++) {
                    if (j == 1 || j == i)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
            for (int i = n - 1; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    if (j == 1 || j == i)
                        cout << "*";
                    else
                        cout << " ";
                }
                for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
                for (int j = 1; j <= i; j++) {
                    if (j == 1 || j == i)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else {
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
