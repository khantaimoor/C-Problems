// HOW TO FIND FACTORIAL
#include<iostream>
using namespace std;
int factorial (int number ){
    if (number == 0){
        return 1;
    }
    else {
        return number*factorial (number-1);
    }
}
int main(){
    int value ;
    cout << "Enter the number : ";
    cin >> value;
    int variable = factorial (value);
    cout << "The factorial of "<< value <<" !" <<"Is  "<<variable<<endl;
}
