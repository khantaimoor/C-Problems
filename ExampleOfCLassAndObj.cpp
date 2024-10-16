
#include<iostream>
using namespace std;

class Test {
    int n;
     public:
     void in (){
        cout<<"Enter the number :"<<endl;
        cin>>n;
     }
     void out (){
        cout<<"The number is : "<<n<<endl;
     }

};
int main(){
    Test t1;
    t1.in();
    t1.out();

}