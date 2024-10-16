
#include<iostream>
using namespace std;
class Student{
     public:
    int age ;
    string name;
    string address;

       void input(){
        cout << "Enter your Age :";
        cin >> age;
        cout << "Enter your Name : ";
        cin >> name;
        cout << "Enter your Address :";
        cin >> address;
    }
    void show (){
        cout << "Your Age is :" << age << endl;
        cout << "Your Name is :" << name << endl;
        cout << "Your address is :" << address << endl;
    }

};
int main(){
    Student Taimoor,Mubeen,Afaq;
    Taimoor.input();
    Taimoor.show();

         Mubeen.input();
         Mubeen.show();

Afaq.input();
Afaq.show();

}


// BAD WAY TO ORGANIZE CODE LOGICALY
// class User {
// public:
//     void save();
//     void load();
// };



// RIGHT WAY TO ORGANIZE CODE LOGICALY
// class User {
// public:
//     void save();
// };

// class UserRepository {
// public:
//     void load();
// };
