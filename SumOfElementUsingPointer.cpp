// // SUM OF ELEMENTS IN ARRAY USING POINTERS
#include<iostream>
using namespace std;
int SumOfElements(int array[],int size){
    int index,sum=0;
    for(index=0;index<5;index++)
    {
        sum+=array[index];
    }
    return sum;
}
int main(){
    int array[5]={1,2,3,4,5};
    
    int size=sizeof(array)/sizeof(array[0]);
    
    int total=SumOfElements(array,size);
    cout<<"Sum of elements is "<<total;
}
