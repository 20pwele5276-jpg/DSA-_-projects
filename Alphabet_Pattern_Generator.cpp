#include <iostream>
using namespace std;

int main() {
    int group;
    char letter;

    cout << "==============================\n";
    cout << "   ALPHABET PATTERN GENERATOR\n";
    cout << "==============================\n\n";
    cout << "Select a Group:\n";
    cout << "1. A, V, W\n";
    cout << "2. B, D, P, R\n";
    cout << "3. C, G, O, Q\n";
    cout << "4. E, F, H, I, L, T\n";
    cout << "5. J, K, M, N, U, Y, Z, S, X\n";
    cout << "\nEnter group number (1–5): ";
    cin >> group;

    cout << "Enter a letter from the selected group (A–Z): ";
    cin >> letter;

    cout << "\nPattern for " << letter << ":\n\n";

    int n = 5; // pattern size

    // ==============================
    // GROUP 1: A, V, W
    // ==============================
    if (group == 1) {
        if (letter == 'A' || letter == 'a') {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j <= n; j++) {
                    if (j == 0 || j == n || (i == n / 2 && j > 0 && j < n))
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'V' || letter == 'v') {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j <= n; j++) {
                    if (j == i && i <= n / 2 || j == n - i && i <= n)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'W' || letter == 'w') {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j <= n; j++) {
                    if (j == 0 || j == n || (i == j && i >= n / 2) || (i + j == n && i >= n / 2))
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }
    }

    // ==============================
    // GROUP 2: B, D, P, R
    // ==============================
    else if (group == 2) {
        if (letter == 'B' || letter == 'b') {
            for (int i = 0; i < n; i++) {
                cout << "*";
                for (int j = 0; j < n; j++) {
                    if ((i == 0 || i == n / 2 || i == n - 1) && j < n - 1)
                        cout << "*";
                    else if (j == n - 1 && !(i == 0 || i == n / 2 || i == n - 1))
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'D' || letter == 'd') {
            for (int i = 0; i < n; i++) {
                cout << "*";
                for (int j = 0; j < n; j++) {
                    if ((i == 0 || i == n - 1) && j < n - 1)
                        cout << "*";
                    else if (j == n - 1 && i > 0 && i < n - 1)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'P' || letter == 'p') {
            for (int i = 0; i < n; i++) {
                cout << "*";
                for (int j = 0; j < n; j++) {
                    if ((i == 0 || i == n / 2) && j < n - 1)
                        cout << "*";
                    else if (j == n - 1 && i < n / 2 && i != 0)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'R' || letter == 'r') {
            for (int i = 0; i < n; i++) {
                cout << "*";
                for (int j = 0; j < n; j++) {
                    if ((i == 0 || i == n / 2) && j < n - 1)
                        cout << "*";
                    else if (j == n - 1 && i < n / 2 && i != 0)
                        cout << "*";
                    else if (i > n / 2 && j == i - n / 2)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }
    }

    // ==============================
    // GROUP 3: C, G, O, Q
    // ==============================
    else if (group == 3) {
        if (letter == 'C' || letter == 'c') {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == 0 || i == n - 1 || j == 0)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'O' || letter == 'o') {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if ((i == 0 || i == n - 1) && j > 0 && j < n - 1)
                        cout << "*";
                    else if ((j == 0 || j == n - 1) && i > 0 && i < n - 1)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'Q' || letter == 'q') {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if ((i == 0 || i == n - 2) && j > 0 && j < n - 1)
                        cout << "*";
                    else if ((j == 0 || j == n - 1) && i > 0 && i < n - 2)
                        cout << "*";
                    else if (i == j && i > n / 2)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }
    }

    // ==============================
    // GROUP 4: E, F, H, I, L, T
    // ==============================
    else if (group == 4) {
        if (letter == 'E' || letter == 'e') {
            for (int i = 0; i < n; i++) {
                cout << "*";
                for (int j = 0; j < n; j++) {
                    if (i == 0 || i == n / 2 || i == n - 1)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'F' || letter == 'f') {
            for (int i = 0; i < n; i++) {
                cout << "*";
                for (int j = 0; j < n; j++) {
                    if (i == 0 || i == n / 2)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'H' || letter == 'h') {
            for (int i = 0; i < n; i++) {
                cout << "*";
                for (int j = 0; j < n; j++) {
                    if (j == n - 1 || i == n / 2)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'I' || letter == 'i') {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == 0 || i == n - 1 || j == n / 2)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'L' || letter == 'l') {
            for (int i = 0; i < n; i++) {
                cout << "*";
                if (i == n - 1) {
                    for (int j = 0; j < n - 1; j++)
                        cout << "*";
                }
                cout << endl;
            }
        }

        else if (letter == 'T' || letter == 't') {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == 0 || j == n / 2)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }
    }

    // ==============================
    // GROUP 5: J, K, M, N, U, Y, Z, S, X
    // ==============================
    else if (group == 5) {
        if (letter == 'J' || letter == 'j') {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == 0 || j == n / 2 || (i == n - 1 && j < n / 2))
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'K' || letter == 'k') {
            for (int i = 0; i < n; i++) {
                cout << "*";
                for (int j = 0; j < n; j++) {
                    if (j == n - i - 1 || j == i - 1)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'M' || letter == 'm') {
            for (int i = 0; i < n; i++) {
                cout << "*";
                for (int j = 0; j < n; j++) {
                    if (j == n - 1 || (i == j && i <= n / 2) || (i + j == n - 1 && i <= n / 2))
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'N' || letter == 'n') {
            for (int i = 0; i < n; i++) {
                cout << "*";
                for (int j = 0; j < n; j++) {
                    if (j == n - 1 || i == j)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'U' || letter == 'u') {
            for (int i = 0; i < n; i++) {
                if (i != n - 1) {
                    cout << "*";
                    for (int j = 0; j < n - 1; j++)
                        if (j == n - 2)
                            cout << "*";
                        else
                            cout << " ";
                } else {
                    for (int j = 0; j < n; j++)
                        cout << "*";
                }
                cout << endl;
            }
        }

        else if (letter == 'Y' || letter == 'y') {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if ((i == j && i < n / 2) || (i + j == n - 1 && i < n / 2) || (j == n / 2 && i >= n / 2))
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'Z' || letter == 'z') {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == 0 || i == n - 1 || i + j == n - 1)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'S' || letter == 's') {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == 0 || i == n / 2 || i == n - 1 || (j == 0 && i < n / 2) || (j == n - 1 && i > n / 2))
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }

        else if (letter == 'X' || letter == 'x') {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == j || i + j == n - 1)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
        }
    }

    cout << "\nThanks for using Alphabet Pattern Generator.\n";
    return 0;
}
