#include<iostream>
using namespace std;
int main(){
    int a;
    int *p;
    a=10;
    p=&a;
    cout<<"The Value of a is "<<a;
    *p=12;
    cout<<"The Value of a is "<<a;
    
}
