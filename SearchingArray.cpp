#include<iostream>
using namespace std;

int main() {
    int dataArray[10], arraySize, searchElement, index;
    cout << "Enter the size of the array: ";
    cin >> arraySize;
    cout << "Enter array elements: ";
    for (index = 0; index < arraySize; index++) {
        cin >> dataArray[index];
    }
    cout << "Enter a number to search in array: ";
    cin >> searchElement;
    for (index = 0; index < arraySize; index++) {
        if (dataArray[index] == searchElement) {
            cout << "Element found at index: " << index;
            break;
        }
    }
    if (index == arraySize) {
        cout << "Element not found in array.";
    }
    return 0;
}