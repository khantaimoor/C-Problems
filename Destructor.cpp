#include<iostream>
using namespace std;
 class test {
     public :
      test (){
       int  n=10;
       cout<<n<<endl;
      }

      //DESTRUCTOR INITIALIZE 
      ~test ()
      {
        cout<<"Destructor called  ";
      }
 };
 int main(){
    test t1;
 }