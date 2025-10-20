#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

void showMenu() {
    cout << "\n=== Data Type Range Checker ===\n";
    cout << "1. short\n";
    cout << "2. int\n";
    cout << "3. long\n";
    cout << "4. float\n";
    cout << "5. double\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nType: short" << endl;
                cout << "Size: " << sizeof(short) << " bytes" << endl;
                cout << "Range: " << SHRT_MIN << " to " << SHRT_MAX << endl;
                break;

            case 2:
                cout << "\nType: int" << endl;
                cout << "Size: " << sizeof(int) << " bytes" << endl;
                cout << "Range: " << INT_MIN << " to " << INT_MAX << endl;
                break;

            case 3:
                cout << "\nType: long" << endl;
                cout << "Size: " << sizeof(long) << " bytes" << endl;
                cout << "Range: " << LONG_MIN << " to " << LONG_MAX << endl;
                break;

            case 4:
                cout << "\nType: float" << endl;
                cout << "Size: " << sizeof(float) << " bytes" << endl;
                cout << "Range: " << FLT_MIN << " to " << FLT_MAX << endl;
                break;

            case 5:
                cout << "\nType: double" << endl;
                cout << "Size: " << sizeof(double) << " bytes" << endl;
                cout << "Range: " << DBL_MIN << " to " << DBL_MAX << endl;
                break;

            case 6:
                cout << "\nProgram ended. Goodbye!" << endl;
                break;

            default:
                cout << "\nInvalid choice. Try again." << endl;
        }

    } while (choice != 6);

    return 0;
}
