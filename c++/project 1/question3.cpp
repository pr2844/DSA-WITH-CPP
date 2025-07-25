#include <iostream>
using namespace std;

int main() {
    float units, amount = 0.0, surcharge = 0.0, total = 0.0;

    cout << "Enter the number of electricity units consumed: ";
    cin >> units;
    if (units <= 50) {
        amount = units * 0.50;
    } else if (units <= 150) {
        amount = (50 * 0.50) + (units - 50) * 0.75;
    } else if (units <= 250) {
        amount = (50 * 0.50) + (100 * 0.75) + (units - 150) * 1.20;
    } else {
        amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (units - 250) * 1.50;
    }

    surcharge = amount * 0.20;

    total = amount + surcharge;

    cout << "\n------ Electricity Bill ------" << endl;
    cout << "Units Consumed     : " << units << endl;
    cout << "Base Amount        : Rs. " << amount << endl;
    cout << "Surcharge (20%)    : Rs. " << surcharge << endl;
    cout << "Total Bill Amount  : Rs. " << total << endl;
    cout << "------------------------------" << endl;

    return 0;
}
