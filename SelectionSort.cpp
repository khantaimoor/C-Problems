#include<iostream>
using namespace std;

int array [5] = {5,8,4,1,6}, n=5;

void selectionSort()
{
    for (int i=0 ; i<n-1; i++)
    {
        int min =i;
        for (int j=i+1; j<n; j++)
        {
            if (array[j] < array[min])
            {
                min = j;

            }
        }
        int temp = array [min];
        array[min] = array[i];
        array[i] = temp;

    }
}

void print ()
{
    for (int i=0 ; i<n; i++)
    {
        cout << array[i] <<endl;

    }
}

int main ()
{
    cout << "Before sorting array Elements are" <<endl;
    print();
    selectionSort();

    cout << "After Sorting array elements are :"<< endl;
    print();
    return 0;

}