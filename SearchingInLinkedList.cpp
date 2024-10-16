#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
Node *head=NULL;
void insert(int n)
{
  Node *newNode= new Node;
  newNode ->data=n;
  newNode ->next=head;
  head=newNode;

}
int search (int key )  // Change return type to int
{
    Node *temp=head;
    int pos =1;
    while (temp!=NULL)
    {
        if (temp ->data == key)  // Use comparison operator (==)
        {
            return pos;

        }
        temp =temp->next;
        pos++;

    }
    return -1;

}
int main()
{
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    int position =search(4);
    if (position ==-1)
    {
        cout<<"Element not found in the list : ";

    }
    else {
        cout<<"Element found at postion "<<position<<endl;


    }
    return 0;
}