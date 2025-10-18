#include <iostream>
#include <string>
using namespace std;

// function to convert binary (string) to decimal
int binToDec(string binStr) {
    int ans = 0;
    int pow = 1; // represents powers of 2

    // loop from right to left
    for (int i = binStr.length() - 1; i >= 0; i--) {
        int bit = binStr[i] - '0'; // convert char '0'/'1' to int
        ans += bit * pow;
        pow *= 2;
    }

    return ans; // final decimal value
}

int main() {
    string binNum;
    char choice;

    do {
        cout << "This program converts Binary to Decimal." << endl;
        cout << "Enter your number in binary: ";
        cin >> binNum;

        cout << "Decimal form of " << binNum << " is: " << binToDec(binNum) << endl;

        cout << "\nDo you want to convert another number? (y/n): ";
        cin >> choice;
        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program ended. Goodbye!" << endl;
    return 0;
}
