#include<iostream>
using namespace std;

int main()
{
    int size; 
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size]; 

    cout << "Enter the elements of the array: ";
    for(int index = 0; index < size; index++)
    {
        cin >> array[index];
    }

    int check; 
    cout << "Enter the number to be searched: ";
    cin >> check;

    int found = 0; 

    for(int index = 0; index < size; index++) 
    {
        if(array[index] == check) 
        {
            cout << "Element found at position " << index + 1 << endl;
            found = 1;
            break;
        }
    }

    if (!found) 
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}