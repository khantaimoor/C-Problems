
#include<iostream>
using namespace std;
int stack [5],number=5,top=-1;

// PUSH OPERATION
void push(int x)
{
    if (top==number-1)
    cout<<"Stack is Full : ";
    else {
        top++;
        stack[top]=x;
    }

}
void pop ()
{
    if (top==-1)
    cout<<"Stack is empty ";
    else {
        cout<<"Popped Element Is : "<<stack[top]<<endl;
        top--;
    }
}
void display ()
{
    if (top>=0)
    {
        cout<<"Stack elements are "<<endl;
        for (int i=top;i>=0;i--)
        {
            cout<<stack[i]<<endl;
        }
        
    }
    else {
        cout<<"Stack is empty.";

    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    display();
    
    pop();
     pop();
      pop();
       pop();
        pop();
         pop();
}
