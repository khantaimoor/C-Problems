#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int s=sqrt(number);
    if(s*s==number){
        cout<<"NUmber is a perfect sqr : ";

    }else {
        cout<<"NUmber is not perfect sqr : ";
    }
}
