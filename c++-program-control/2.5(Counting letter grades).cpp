#include <iostream>
using namespace std;

// Counting letter grades
int main() {
    int grade;
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int eCount = 0;
    int fCount = 0;

    cout << "Enter the letter grades" << endl;
    cout << "Enter the EOF character to end input:" << endl;

    while ((grade = getchar()) != EOF) {
        switch (grade) {
            case 'a':
            case 'A':
                ++aCount;
                break;

            case 'b':
            case 'B':
                ++bCount;
                break;

            case 'c':
            case 'C':
                ++cCount;
                break;

            case 'd':
            case 'D':
                ++dCount;
                break;

            case 'e':
            case 'E':
                ++eCount;
                break;

            case 'f':
            case 'F':
                ++fCount;
                break;

            case '\n': // Skip newline character
                break;

            default:
                cout << "Incorrect letter grade entered." << endl;
                cout << "Enter a new grade." << endl;

                // Consume remaining characters in the line
                while (getchar() != '\n') {
                }

                break;
        }
    }

    cout << "\nTotals for each letter grade are:" << endl;
    cout << "A: " << aCount << endl;
    cout << "B: " << bCount << endl;
    cout << "C: " << cCount << endl;
    cout << "D: " << dCount << endl;
    cout << "E: " << eCount << endl;
    cout << "F: " << fCount << endl;

    return 0;
}
