// This is a program to Swap to two numbers

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    a = 5; b = 10;

    cout << "The current value of a is " << a << "\n";
    cout << "The current value of b is " << b << "\n";

    temp = a;
    a = b;
    b = temp;

    cout << "\n";
    cout << "The swaped value of a is " << a << "\n";
    cout << "The swaped value of b is " << b << "\n";

    return 0;
}