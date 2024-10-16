#include<iostream>
using namespace std;
class owner {
    string name,company;
    int age;
    public :

    owner (string n,string c,int a){
       name=n;
       company=c;
       age=a;

    }
    void display(){

        cout << "Name :" << name << endl;
        cout << "Company : " << company << endl;
        cout << "Age : "<< age<< endl;
    }

    
};
int main(){
    owner o1("Taimoor","Amazon",19);
    o1.display();
    owner o2("Sherry","Google",20);
    o2.display();
    owner o3("Afaq","Microsoft",21);
    o3.display();
    

}

