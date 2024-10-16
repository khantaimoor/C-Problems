
#include<iostream>
using namespace std;
class Student{

    public: 
    string name;
    int age ,rollNumber;
    string cgpa;
};
int main(){
    Student *S = new Student ;
    (*S).name= "Taimoor KHan ";
       (*S).age = 20;
         (*S).rollNumber = 45;
            (*S).cgpa = 3.9;

    cout << "THe Name is : "<< S->name << endl;
    
         cout << "THe age  is : "<< S->age << endl;

               cout << "THe roll number is : " << S->rollNumber << endl;

                       cout << "THe cgpa is : "<< S->cgpa << endl;

}