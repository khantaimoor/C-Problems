#include<iostream>
using namespace std;

int main(){
    int firstNumber, secondNumber, leastCommonMultiple, temporaryValue;
    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    temporaryValue = (firstNumber > secondNumber) ? firstNumber : secondNumber;

    
    while (true) {
        if (temporaryValue % firstNumber == 0 && temporaryValue % secondNumber == 0) {
            leastCommonMultiple = temporaryValue;
            break;
        }
        temporaryValue++;
    }

    cout << "The LCM is: " << leastCommonMultiple << endl;

    return 0;
}