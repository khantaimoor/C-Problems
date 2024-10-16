
// PROGRAM FOR MEMORY ALLOCATION
#include<iostream>
using namespace std;

int main(){
    int number_of_students, total_ages=0;
    cout << "Enter the number of students: ";
    cin >> number_of_students;


    int* ptr1 = (int*)malloc(number_of_students * sizeof(int));
    int* ptr2 = (int*)malloc(number_of_students * sizeof(int));

    
    if (ptr1 == NULL || ptr2 == NULL) {
        cout << "Memory allocation failed!" << endl;
        return 1; 
    }

    // Use the allocated memory
    for(int i=0; i<number_of_students; i++){
        cout << "Enter age of student " << i+1 << ": ";
        cin >> *(ptr1 + i);
        *(ptr2 + i) = *(ptr1 + i); // Copy the age to the second array
        total_ages += *(ptr1 + i);
    }

    // Print the total ages
    cout << "Total ages: " << total_ages << endl;

    // Free the allocated memory
    free(ptr1);
    free(ptr2);

    return 0;