

#include<iostream>
using namespace std;
int main(){
    int maximum,minimum,iterator;
    
    int array[5];
    for( iterator=0;iterator<5;iterator++){
        cout <<  "Enter the "<<iterator+1<<" "<<"element "<<endl;
        cin >> array[iterator];
    }
    maximum=minimum=array[iterator];

    for(iterator=0;iterator<5;iterator++){
        if(maximum<array[iterator])
        {
            maximum=array[iterator];
        }
        if(minimum>array[iterator]){
            minimum=array[iterator];
        }
    }
    cout<<"The maximum number in the array is :"<<maximum<<endl;
    cout<<"The minimum number in the array is :"<<minimum<<endl;
}