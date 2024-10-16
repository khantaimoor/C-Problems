#include<iostream>
using namespace std;
void increment(int *p){
   *p=*p+2;

}
int main(){
    int a=10;
    cout<<"Before incrementing a is "<<a<<endl;
    increment(&a);
    cout<<"After incrementing a is "<<a<<endl;
    increment(&a);

}