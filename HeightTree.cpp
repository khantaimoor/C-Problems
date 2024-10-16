#include<iostream>
using namespace std;
 struct Node {
       int data;
       Node *left;
       Node *right;

    //CONSTRUCTOR TO INITIALIZE VALUE
      Node (int value)
      {
        data=value;
        left = right = nullptr;

      }
 };

 //FUNCTION TO FIND HEIGHT OF TREE
 int findHeight(Node *root)
 {
    if (root == nullptr)
    {
        return -1;

    }
    int leftHeight = findHeight (root->left);
    int rightHeight = findHeight (root->right);

    return maximum (leftHeight , rightHeight) + 1;
    
 }

 int main ()
 {
    Node*root = new Node (1);
    root->left = new Node (2);
    root->right = new Node (3);
    root->left->left = new Node (4);
    root->left->right = new Node (5);
    
    cout << "Height of tree is "<<findHeight(root)<<endl;
 }
 