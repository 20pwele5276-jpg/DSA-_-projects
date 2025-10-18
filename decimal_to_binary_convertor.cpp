#include <iostream>
using namespace std;

// make function to concvert dec to bina
int decToBinary(int decNum){
int ans=0; // binary
int pow=1; // power

    while(decNum>0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }

    return ans; // bainary form
    

}

int main(){
    int decNum;
    char choice; // to ask user if they want to continue
    
    cout << "NOTE: This program only gives correct binary for decimal numbers 1 to 1000." << endl;

    do {
        cout << "\nEnter your number in decimal: ";
        cin >> decNum;

        cout << "Binary form of " << decNum << " is: " << decToBinary(decNum) << endl;

        cout << "\nDo you want to convert another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nProgram ended. Goodbye!" << endl;

    
    return 0;
}
