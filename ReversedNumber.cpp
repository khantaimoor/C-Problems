// // REVERSED NUMBER PROG
#include<iostream>
using namespace std;
int main(){
    int number,total,sum=0;

    cout << "Enter numbers to be reversed :";
    cin >> number;
    while(number!= 0) 
    {
        total=number%10;
        sum=sum*10+total;
        number=number/10;
    }
    cout << "The reversed number is :" << sum <<endl;
}
