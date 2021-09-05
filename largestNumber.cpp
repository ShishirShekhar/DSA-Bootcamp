// This is a program to find the largest number 
// among three numbers entered by the user.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Enter the third number: ";
    cin >> c;

    cout << "\n" << "The largest number is: ";

    if (a > b) {

        if (a > c) cout << a;
        else cout << c;
    }
    else {

        if (b > c) cout << b;
        else cout << c;
    }

    return 0;
}