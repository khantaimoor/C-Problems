#include<iostream>
using namespace std;
struct Node {
     int data;
     Node *left;
     Node *right;

     Node (int value )
     {
        data = value;
        left = right = nullptr;

     }
};
   //Function to find LCA b/w Nodes

 Node *findLCA(Node *root , int n1 , int n2)
 {
    if (root == nullptr || root->data == n1 || root->data == n2)
    {
        return root;

    } 
    Node *leftLCA = findLCA(root->left ,n1, n2);
    Node *rightLCA = findLCA(root->right ,n1, n2);

    if (leftLCA && rightLCA)
    {
        return root;

    }
     return (leftLCA != nullptr) ? leftLCA : rightLCA;
 }
 int main()
 {
   Node *root = new Node (1);
   root->left = new Node (2);
   root->right = new Node (3);
   root->left->left = new Node (4);
   root->left->right = new Node (5);
   root->right->left = new Node (6);
  root->right->right= new Node (7);

   int n1=5 , n2= 4;

   Node *lca= findLCA (root ,n1,n2);

   if (lca != nullptr)
   {
    cout << " LCA of "<<n1 << "And " <<n2 << " is "<<lca->data<<endl;
   }
   else {
    cout << "No One Least Common Ancestor "<<endl;
   }
   
 }

 