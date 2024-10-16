#include<iostream>
using namespace std;

int array[5] = {9,3,1,6,8} , n=5;

void insertionSort ()
 {
   for (int i=1; i<n; i++)
   {
     int key = array[i];
     int j = i-1;
     while (key < array[j] && j>=0 )
     {
        array[j+1] = array [j];
        j--;
     }
     array [j+1] = key;

   }
 }
 void print ()
 {
    for (int i=0; i<n; i++)
    {
        cout << array[i] <<endl;

    }
 }
 int main ()
 {
    cout << "Before Sorting Array Elements are :";
    print ();
    insertionSort ();

    cout << "After Sorting Array Elements Are " <<endl;

    print ();
 }

 