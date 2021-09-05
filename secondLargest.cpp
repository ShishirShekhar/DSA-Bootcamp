// This is a program that takes n elements from the user and displays the second largest element of an array

#include <iostream>
using namespace std;

void sort(int *arr, int n);
void swap(int *arr, int i, int j);

int main() {
    int n;

    cout << "Enter the total count of numbers: ";
    cin >> n;

    int arr[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    sort(arr, n);

    cout << "The second largetest number is ";
    for (int i=0; i<n; i++) {
        if (arr[i+1] < arr[i]) {
            cout << arr[i+1];
            break;
        }
    }
    
    return 0;
}

void sort(int *arr, int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=i; j<n; j++) {
            if (arr[j] > arr[i]) {
                swap(arr, i, j);
            }
        }
    }
    return;
}

void swap(int *arr, int i, int j) {
    int temp;

    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    return;
}