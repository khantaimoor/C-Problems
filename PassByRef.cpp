//PASS BY REFERENCE
#include<iostream>
using namespace std;
int main(){
    int a=98;
    cout<<a<<endl;
    int &ref=a;
    cout<<ref<<endl;
    cout<<++ref;
    cout<<a<<endl;
}