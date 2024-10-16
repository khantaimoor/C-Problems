#include<iostream>
using namespace std;

class Base {
    int value1, value2, sum;
    public:
    void inputData(){
        cout << "Enter the first value: ";
        cin >> value1;
        cout << "Enter the second value: ";
        cin >> value2;
    }
    void displaySum (){
        sum = value1 + value2;
        cout << "The sum is " << sum << endl;

    }

 };

class DerivedClass1 : public Base {
    int derivedValue1;
    public:
    void inputDerived1(){
        cout << "Enter value for derived class 1: " << endl;
        cin >> derivedValue1;

    }
    void displayDerived1 (){
        cout << "The value of derived class 1 is :" << derivedValue1 << endl;

    }

 };

class DerivedClass2 : public Base {
    int derivedValue2;
    public:
    void inputDerived2(){
        cout << "Enter value for derived class 2: ";
        cin >> derivedValue2;

    }
    void displayDerived2(){
        cout << "The value of derived class 2 is :" << derivedValue2 << endl;
    }

 };

int main(){
    DerivedClass1 obj1;
    DerivedClass2 obj2;
    obj1.inputData();
    obj1.displaySum();

    obj1.inputDerived1();
    obj1.displayDerived1();
    obj2.inputDerived2();
    obj2.displayDerived2();


 }