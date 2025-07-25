#include <iostream>
using namespace std;

int main() {
    char startChar, endChar;

    cout << "Enter the starting character: ";
    cin >> startChar;
    cout << "Enter the ending character: ";
    cin >> endChar;

    if (!isalpha(startChar) || !isalpha(endChar)) {
        cout << "Please enter valid alphabet characters only." << endl;
        return 1;
    }

    if (startChar > endChar) {
        char temp = startChar;
        startChar = endChar;
        endChar = temp;
    }

    char ch = startChar;

    do {
        cout << ch << " ";
        ch++;
    } while (ch <= endChar);

    cout << endl;
    return 0;
}
