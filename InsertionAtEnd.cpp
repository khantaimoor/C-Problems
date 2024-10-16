#include<iostream>
using namespace std;

int main() {
    int dataArray[10], arraySize, newValue, index;
    cout << "Enter the size of the array: ";
    cin >> arraySize;
    cout << "Enter array elements: ";
    for (index = 0; index < arraySize; index++) {
        cin >> dataArray[index];
    }
    cout << "Enter the number to insert at the End: ";
    cin >> newValue;
    dataArray[arraySize] = newValue;
    arraySize++;

    cout << "Array elements are: ";
    for (index = 0; index < arraySize; index++) {
        cout << dataArray[index] << endl;
    }
    return 0;
}