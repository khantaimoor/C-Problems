#include<iostream>
using namespace std;

class Result {
    int RollNum, marks[3];
    char name[50];
    public:

    void input(){
        cout << "Enter the roll number :"<< endl;
        cin >> RollNum;
        cout << "Enter the name :" << endl;
        cin >> name;
        for (int index=0;index<3;index++) 
        {
            cout << "Enter the marks of subject " <<index+1 << endl;
            cin>>marks[index];

        }
        
    }
    void show(){
        cout << "The roll number is :" <<RollNum << endl;
        cout <<"The name is :" << name << endl;

        for (int index=0;index<3;index++)
            cout << "The marks of subject " <<index+1<< "is " << marks[index] << endl;


    }
    int  total ()
    {
        int sum = 0;
        for (int index=0;index<3;index++)
        {
            sum=sum+marks[index];
            return sum;
        }
    }
    float average(){
        int average;
        for(int index=0;index<3;index++)
        {
            average=average+marks[index];
            return average/3;
        }
    }

};
int main(){
    Result r;
    r.input();
    r.show();
    cout << "The total marks is "<< r.total() << endl;
    cout << "The average marks is " << r.average() <<endl;

}