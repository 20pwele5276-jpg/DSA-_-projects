#include <iostream>
#include <bitset>
#include <algorithm> // for max and min
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    int andResult = a & b;
    int orResult = a | b;
    int xorResult = a ^ b;
    int notA = ~a;
    int leftShift = a << 1;
    int rightShift = a >> 1;

    cout << "\n=== Bitwise Operation Visualizer ===\n";
    cout << "A (decimal): " << a << "\tBinary: " << bitset<8>(a) << endl;
    cout << "B (decimal): " << b << "\tBinary: " << bitset<8>(b) << endl;

    cout << "\nA & B = " << andResult << "\tBinary: " << bitset<8>(andResult) << endl;
    cout << "A | B = " << orResult << "\tBinary: " << bitset<8>(orResult) << endl;
    cout << "A ^ B = " << xorResult << "\tBinary: " << bitset<8>(xorResult) << endl;
    cout << "~A = " << notA << "\tBinary: " << bitset<8>(notA) << endl;
    cout << "A << 1 = " << leftShift << "\tBinary: " << bitset<8>(leftShift) << endl;
    cout << "A >> 1 = " << rightShift << "\tBinary: " << bitset<8>(rightShift) << endl;

    // manual max/min because your compiler doesn’t support initializer list version
    int values[] = {andResult, orResult, xorResult, leftShift, rightShift};
    int maxVal = values[0];
    int minVal = values[0];
    for (int i = 1; i < 5; i++) {
        if (values[i] > maxVal) maxVal = values[i];
        if (values[i] < minVal) minVal = values[i];
    }

    cout << "\nHighest result: " << maxVal << endl;
    cout << "Lowest result: " << minVal << endl;

    return 0;
}
