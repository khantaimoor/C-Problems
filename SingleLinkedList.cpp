#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};

Node *head=NULL;
void insert (int number)
{
    Node *newNode= new Node;
    newNode->data=number;
    head=newNode;

}
void print ()
{
    cout << "Data element in single linked list are ";
    Node *temp = head;
    while (temp!= NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    insert (1);
    insert(3);
    insert(5);
    print();
}