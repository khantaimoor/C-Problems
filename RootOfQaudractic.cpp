#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,d,r1,r2;
    cout<<"Enter the Value Of A ,B, C "<<endl;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d<0){
        cout<<"Roots are Equal and Unreal : ";
        r1=(-b+sqrt(d)) /(2*a);
        r2=(-b-sqrt(d)) /(2*a);
        cout<<r1<<" "<<r2;
    }
    else if (d==0){
        cout<<"Roots are Real And Equal : ";
        r1=-b/2*a;
         r2=-b/2*a;
         cout<<r1<<" "<<r2;

    }
    else {
        cout<<"Roots are imaginary ";
    }
}
