#include<iostream>
#include<vector>
#include<stack> // added this header file for stack
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

vector<int> Preorder(Node* root) {
    if (root == nullptr) { // added this check to handle empty tree
        return {};
    }

    stack<Node*> s;
    s.push(root);
    vector<int> ans;

    while (!s.empty()) {
        Node* temp = s.top();
        s.pop();
        ans.push_back(temp->data);
        if (temp->right)
            s.push(temp->right);

        if (temp->left)
            s.push(temp->left);
    }
    return ans;
}