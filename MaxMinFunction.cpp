#include<iostream>
using namespace std;
//FUNCTUION DECLARATION
int maximum(int first ,int second);

//FUNCTION DEFINITION
int maximum (int first ,int second){
    if (first > second) {
    return first;
} else {
    return second;
}
}
int main(){
    int number1,number2;
    cout << "Enter the first number : ";
    cin >> number1;
    cout << "Enter the Second number : ";
    cin >> number2;
    int maximum= maximum (number1,number2);
    cout << "The Maximum of " << number1 << "And " << number2 << " Is "<< maximum;

}