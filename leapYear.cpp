// This is a program to check whether a year entered by a user is Leap year or not.

#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter the value of year: ";
    cin >> year;

    if (!(year % 4)) cout << year << " is a leap year";
    else cout << year << " is not a leap year";

    return 0;
}