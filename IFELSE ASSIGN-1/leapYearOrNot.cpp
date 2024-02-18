#include <iostream>
using namespace std;

int main() {
    int year;

    // Input the year from the user
    cout << "Enter a year: ";
    cin >> year;

    // Check if it's a leap year or not
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
