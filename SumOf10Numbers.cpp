#include<iostream>
using namespace std;
int main()
{
  int a[10];
  int sumOfSquare=0;
  int i=0;
  cout<<"Please enter the ten number one by one";
   for(i=0;i<10;i++)
   {
    cin>>a[i];
   }
   for(i=0;i<10;i++)
   {
    sumOfSquare=sumOfSquare+a[i]*a[i];

   }
   cout<<"the sum of square is "<<sumOfSquare<<endl;
   return 0;
}