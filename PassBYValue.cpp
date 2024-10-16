// function Pass by value
#include<iostream>
using namespace std;

void ChangeValue (int number){
    number = number +10;
    cout << number<<endl;
}
int main(){
    int digit = 10;
    cout << digit<<endl;
    ChangeValue(digit);
    cout << digit<<endl;

}

//BAD CODE FOR Use Type Annotations
// void add(int a, int b) {
//     // Add a and b
// }


//GOOD  CODE FOR Use Type Annotations
// int add(int a, int b) {
//     return a + b;
// }
