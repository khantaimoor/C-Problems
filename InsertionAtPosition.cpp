#include<iostream>
using namespace std;

int main() {
    int dataArray[10], arraySize, insertLocation, newValue;
    cout << "Enter the size of the array: ";
    cin >> arraySize;
    cout << "Enter array elements: ";
    for (int i = 0; i < arraySize; i++) {
        cin >> dataArray[i];
    }
    cout << "Enter the insertion location: ";
    cin >> insertLocation;
    cout << "Enter the value to be inserted: ";
    cin >> newValue;
    for (int i = arraySize - 1; i >= insertLocation - 1; i--) {
        dataArray[i + 1] = dataArray[i];
    }
    dataArray[insertLocation - 1] = newValue;
    arraySize++;

    cout << "Array elements are: ";
    for (int i = 0; i < arraySize; i++) {
        cout << dataArray[i] << endl;
    }
    return 0;
}