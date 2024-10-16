#include<iostream>
using namespace std;

template<class T>
void Test(T a)
{
    cout << "The value is: " << a << endl;
}

int main(){
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    Test(num);
    return 0;
}