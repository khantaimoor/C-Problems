#include<iostream>
using namespace std;

void swap(int *ptr1,int *ptr2)
{
    int temporary = *ptr1;
    *ptr1=*ptr2;
    *ptr2=temporary;

}
int main(){
    int number1 =10 ,number2 =20;
    cout << "Before swapping " << number1 <<"and" <<number2<<endl;

    swap(&number1,&number2);

    cout << "After swapping" <<number1 << "And" << number2<<endl;

}