
#include<iostream>
using namespace std;
int main(){
    const int size=5;
    int arr[size]={1,1,1,1,1},i;
    int sum=0;
    for(i=0;i<size;++i){
            sum+=arr[i];

    }
    cout<<"The sum of array is :"<<sum;

}