
// FOR OPERATOR OVERLOADING EXAMPLE IN EXAM
#include<iostream>
using namespace std;
class A {
    int num;
    public:

    A(){
        num=5;

    }
    void operator ++ (){
        ++num;
        cout<<num;
    }

};
int main(){
    A a;
    ++a;

}