#include<iostream>
using namespace std;

int square(int number);
int cube(int number);

int main() {
    int first, second, total;

    cout << "Enter the number : ";
    cin >> first;

    cout << "Enter the second number : ";
    cin >>  second;

    total = square(first) + cube(second);
    cout << "The sum of sqr and cube is "<< total << endl;
}
int square(int number) {
    return number * number;
}

int cube (int number){
    return number*number*number;
}


//BAD CODE FOR LIMIT THE SCOPE OF VARIABLE 
// int x = 0;
// for (int i = 0; i < 10; ++i) {
//     x += i;
// }



//GOOD CODE FOR LIMIT THE SCOPE OF VARIABLE 
// int sum = 0;
// for (int i = 0; i < 10; ++i) {
//     sum += i;
// }
