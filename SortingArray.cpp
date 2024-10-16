#include<iostream>
using namespace std;

int main(){
    int array[5] = {5, 4, 3, 2, 1};
    int outerIndex, innerIndex, minIndex, temp;

    for (outerIndex = 0; outerIndex < 4; outerIndex++)
    {
        minIndex = outerIndex;
        for (innerIndex = outerIndex + 1; innerIndex < 5; innerIndex++)
        {
            if (array[innerIndex] < array[minIndex])
                minIndex = innerIndex;
        }
        temp = array[minIndex];
        array[minIndex] = array[outerIndex];
        array[outerIndex] = temp;
    }

    cout << "The sorted array is: ";
    for (outerIndex = 0; outerIndex < 5; outerIndex++)
    {
        cout << array[outerIndex] << " ";
    }

    return 0;
}
