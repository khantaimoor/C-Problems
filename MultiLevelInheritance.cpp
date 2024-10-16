#include<iostream>
using namespace std;

class BaseEntity {
    public:
    int id;
    void inputData()
    {
        cout << "Enter the ID: " << endl;
        cin >> id;
    }
    void display()
    {
        cout << "The ID is: " << endl;
        cout << id << endl;
    }
};

class Employee : public BaseEntity {
    int employeeNumber;
    public:
    void inputData()
    {
        cout << "Enter the employee number: " << endl;
        cin >> employeeNumber;
    }
    void display()
    {
        cout << "The employee number is: " << endl;
        cout << employeeNumber << endl;
    }
};

class Customer : public BaseEntity {

    public :
    int customerNumber;
    void inputData(){
        cout << "Enter the customer number: " << endl;
        cin >> customerNumber;
    }
    void display (){
        cout << "The customer number is: " << endl;
        cout << customerNumber << endl;
    }
    
};

int main(){

    // OBJECTS
    BaseEntity baseEntity;
    baseEntity.inputData();
    baseEntity.display();

    Employee employee;
    employee.inputData();
    employee.display();

    Customer customer;
    customer.inputData();
    customer.display();
    
}
