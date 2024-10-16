
#include<iostream>
using namespace std;
int GreatestCommonDivisor(int number1,int number2);
int main(){

    int digit1,digit2;
    cout << "Enter the first number : ";
    cin >> digit1;
    cout << "Enter the second number : ";
    cin >> digit2;
    cout << "Greatest common divisor is "<<GreatestCommonDivisor(digit1,digit2)<<endl;

}
int GreatestCommonDivisor(int number1,int number2)
{
    int greatestCommonDivisor,iterator,smallerNumber;
    if (number1 < number2)
   smallerNumber = number1;

   else 
   smallerNumber =number2;
   for (iterator =1 ;iterator <= smallerNumber ;iterator++)
   {
   if (number1 % iterator ==0 && number2%iterator == 0)

    greatestCommonDivisor = iterator ;
    return greatestCommonDivisor;
  
   }

}