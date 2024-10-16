#include<iostream>
using namespace std;

class BaseEntity {
    int baseValue;
    public :
    void inputData(){
        cout << "Enter the value of BaseEntity: ";
        cin >> baseValue;

    }
    void display(){
        cout << "The value of BaseEntity is : " << baseValue << endl;
    }

};

class DerivedEntity1 : public BaseEntity {
    int derivedValue1;
    public :
    void inputDerived1(){
        cout << "Enter the value of DerivedEntity1: ";
        cin >> derivedValue1;

    }
    void displayDerived1(){
        cout << "The value of DerivedEntity1 is : " << derivedValue1 << endl;
    }

};

class DerivedEntity2 : public BaseEntity {

};

class DerivedEntity3 : public BaseEntity {
    int derivedValue3;
    public :
    void inputDerived3(){
        cout << "Enter the value of DerivedEntity3: ";
        cin >> derivedValue3;

    }
    void displayDerived3(){
        cout << "The value of DerivedEntity3 is : " << derivedValue3 << endl;
    }

};

int main(){
    BaseEntity baseEntityObj;
    DerivedEntity1 derivedEntity1Obj;
    DerivedEntity2 derivedEntity2Obj;
    DerivedEntity3 derivedEntity3Obj;
    baseEntityObj.inputData();
    baseEntityObj.display();
    derivedEntity1Obj.inputData();
    derivedEntity1Obj.display();
    derivedEntity1Obj.inputDerived1();
    derivedEntity1Obj.displayDerived1();
    derivedEntity2Obj.inputData();
    derivedEntity2Obj.display();
    derivedEntity3Obj.inputData();
    derivedEntity3Obj.display();
    derivedEntity3Obj.inputDerived3();
    derivedEntity3Obj.displayDerived3();
}