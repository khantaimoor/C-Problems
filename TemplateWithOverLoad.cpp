
#include<iostream>
using namespace std;
template< class T>
void Test( T a)
{
    cout<<a;
}
template< class T>
void Test (T a,T b)
{
    cout<<a<<" "<<b<<endl;
}
template< class T>
void Test (T a,T b,T c){
    cout<<a<<" "<<b<<" "<<c<<endl;
}
int main(){
    Test(10);
    Test(10,20);
    Test(10,20,30);
    return 0;
}