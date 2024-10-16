// #include<iostream>
// using namespace std;

// int main() {
//     int dataArray[10], arraySize, insertPosition, newValue;
//     cout << "Enter the size of the array: ";
//     cin >> arraySize;
//     cout << "Enter array elements: ";
//     for (int i = 0; i < arraySize; i++) {
//         cin >> dataArray[i];
//     }
//     cout << "Enter the insertion location: ";
//     cin >> insertPosition;
//     cout << "Enter the value to be inserted: ";
//     cin >> newValue;
//     for (int i = arraySize - 1; i >= insertPosition - 1; i--) {
//         dataArray[i + 1] = dataArray[i];
//     }
//     dataArray[insertPosition - 1] = newValue;
//     arraySize++;

//     cout << "Array elements are: ";
//     for (int i = 0; i < arraySize; i++) {
//         cout << dataArray[i] << endl;
//     }
//     return 0;
// // }

