#include<iostream>
using namespace std;

int main(){
    int num1, num2, lcm, hcf, temp;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Find the maximum of num1 and num2
    temp = (num1 > num2) ? num1 : num2;

    while (true) {
        if (temp % num1 == 0 && temp % num2 == 0) {
            lcm = temp;
            break;
        }
        temp++;
    }

    
    hcf = (num1 * num2) / lcm;

    cout << "The LCM is: " << lcm << endl;
    cout << "The HCF is: " << hcf << endl;

    return 0;
}