#include<iostream>
using namespace std;
int Queues [5], y,number=5 ,element , rear=-1, front=-1;
void insert ()
{
    if (rear== number-1)
    {
        cout<<"Queue is Full - ";

    }
    else {
        if (front ==-1)
        {
            front=0;
        }
        cout << "Enter the element in the Queue : ";
        cin>> element;
        rear++;
        Queues [rear] = element;
    }

}