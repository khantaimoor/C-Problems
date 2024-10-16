
#include<iostream>
using namespace std;

class base {
    public :
  virtual ~base (){         //Virtual Function
        cout<<"Base class destructor is called "<<endl;

    }

};
class derived : public base{
    public :
    ~derived (){
        cout<<"Derived class destructor is called "<<endl;

    }

};
int main(){
    base *ptr= new derived();
    delete ptr;
    return 0;
}
