#include<iostream>
using namespace std;
char grade(int value );
int main(){
    int  marks;
    int number;
    cout << "Plese enter the marks : ";
    cin >> marks;
    number =grade (marks);
    cout << "Your Grades is : "<< number<< endl;

}
char grade(int marks){
    if (marks>80)
    return 'A Grade';
    else if(marks>60)
    return 'B Grade';
    else if(marks>50)
    return 'C Grade';
    else {
        return 'F Grade';
    }
}