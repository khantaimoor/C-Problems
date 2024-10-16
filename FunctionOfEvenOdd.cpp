#include<iostream>
using namespace std;
bool isPrime(int number);

bool isPrime(int number){
    if (number<=1){
        return false;
    }
   for (int i=2; i*i<=number;i++)
   {
    if (number%i==0){
        return false ;
    }
   }return true;
}
int main(){
    int digit;
    cout<<"Enter a Digit ";
    cin>>digit;
    if (isPrime(digit)){
        cout<<"The number you entered is Prime : "<<digit;
    }
    else {
        cout<<"The number is Not Prime : "<<digit<<endl;
    }
}



// BEST CLEAN CODE PARACTICE FOR FUNCTION

// int incrementValue(int value) {
//     return value + 10;
// }


//BAD CODE 
// void updateValue(int& value) {
//     value += 10;
// }
