#include<iostream>
using namespace std;
int sum(int number1 ,int number2)
{
    cout<<"Function with 2 arguments : ";
    return number1 + number2;
}
int sum(int number1 , int number2 , int number3){
    cout<<"Fnction with 3 arguments : ";
    return number1 + number2 + number3;
}
int main(){
    cout << "The summ of 3 and 6 is " <<sum (3,6)<< endl;
    cout << "The sum of 4,5 and 12 is " <<sum (4,5,12)<< endl;
}

//USE EXCEPTION RATHER THAN RETURN A CODE 

//ITS A BAD CODE
// int findItem(int itemId) {
//     if (itemIdNotFound) {
//         return -1;
//     }
// }


//GOOD CODE BY USING EXCEPTION
// int findItem(int itemId) {
//     if (itemIdNotFound) {
//         throw std::runtime_error("Item not found");
//     }
// }

