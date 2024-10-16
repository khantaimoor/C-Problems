#include <iostream>
using namespace std;

int main() {
    int first = 0, second = 1, third, number, index = 1; 

    cout << "Enter the number of terms: ";
    cin >> number;

    cout << first << "\t" << second << "\n"; // Print the first two terms

    while (index <= number - 2) { 
        third = first + second; // Calculate the next term
        cout << third << "\t"; 
        first = second; 
        second = third;
        index++; 
    }

    return 0;
}
