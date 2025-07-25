#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, count = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
        count--;
    }

    if (sum == num) {
        cout << num << " is a Disarium Number." << endl;
    } else {
        cout << num << " is not a Disarium Number." << endl;
    }

    return 0;
}

