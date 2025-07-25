#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }
    if (number % 5 == 0) {
        cout << "The number is divisible by 5." << endl;
    } else {
        cout << "The number is not divisible by 5." << endl;
    }

    return 0;
}
