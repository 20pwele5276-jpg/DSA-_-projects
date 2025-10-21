#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter your number(N): ";
    cin >> N;

    // Decimal
    cout << "Decimal form: " << N << endl;

    // Reusable temp variable
    int temp;

    // Binary
    temp = N;
    string binary = "";
    if (temp == 0) binary = "0";
    while (temp > 0) {
        int bit = temp % 2;
        binary = char(bit + '0') + binary;
        temp = temp / 2;
    }
    cout << "Binary form: " << binary << endl;

    // Octal
    temp = N;
    string octal = "";
    if (temp == 0) octal = "0";
    while (temp > 0) {
        int digit = temp % 8;
        octal = char(digit + '0') + octal;
        temp = temp / 8;
    }
    cout << "Octal form: " << octal << endl;

    // Sum of digits
    temp = N;
    int sum = 0;
    while (temp > 0) {
        sum += temp % 10;
        temp = temp / 10;
    }
    cout << "Sum of digits: " << sum << endl;

    // Even/Odd
    if (N % 2 == 0)
        cout << "Even." << endl;
    else
        cout << "Odd." << endl;

    // Prime check
    bool isPrime = true;
    if (N <= 1)
        isPrime = false;
    else {
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    cout << N << (isPrime ? " is Prime" : " is Not Prime") << endl;

    // Power of 2
    if (N > 0 && (N & (N - 1)) == 0)
        cout << N << " is a Power of 2" << endl;
    else
        cout << N << " is Not a Power of 2" << endl;

    return 0;
}

