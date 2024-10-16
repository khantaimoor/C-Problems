 
// // STRUCTUTRR AS A CLASS MEMEBER EXAMPLE IN EXAM

#include<iostream>
using namespace std;
struct Student {
    int id;
    string name;
};
class A{
    private:
    Student s;
    public:
    A(){
        s.id=10;
        s.name="Taymur";

    }
    void display (){
        cout << "Student id :" << s.id << endl;
        cout << "Student name :" << s.name << endl;
    }
};
int main(){
    A obj;
    obj.display();

}