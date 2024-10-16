#include<iostream>
using namespace std;
int main()
{

int counter,number,multimax;
cout << "Please enter the table you want to print the table: ";
cin>>number;

cout << "Please enter the max player from which you reach the table :";
cin >> multimax;


for(counter=1 ; counter <= multimax ; counter = counter+1)
{
    cout << number << " x" << counter << "=" << number*counter << endl;
}
}
