#include<iostream>
using namespace std;

class A{
    public: 
       A(){
        cout << "Constructor of A" << endl;
    }
    void display(){
        cout << "Class A as a object member :" << endl;
    }
    ~A(){
        cout << "Destructor of A" << endl;
    }
};

class B{
    private:
     A obj;
     public: 
    B(){
        cout << "Constructor of B" << endl;
    }
    void display(){
        obj.display();
        cout << "\n\nClass B function " << endl;
    }
    ~B(){
        cout << "Destructor of B" << endl;
    }
};

int main(){
    B obj;
    obj.display();
    return 0;
}