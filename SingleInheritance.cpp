#include<iostream>
using namespace std;
class Human {

    protected:
    string name ;
    int age ;
     public:
     Human (string name, int age ){
        this->name=name;
        this->age=age;
     }

};

class Student : public Human {
    int rollNum;
    int fees;

    public:
    Student( string name,int age, int rollNum,int fess ) : Human(name,age)
    {
        this->name=name;
        this->age=age;
        this->rollNum=rollNum;
        this->fees=fees;

    }
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        cout<<"Roll number : "<<rollNum<<endl;
        cout<<"Fees :"<<fees<<endl;

    }

};

int main()
{
    Student A1={"Sherry",20,987,90000};
    A1.display();
}
