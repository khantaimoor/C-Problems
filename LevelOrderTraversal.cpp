#include<iostream>
#include<queue>
#include<vector> // added this header file for vector
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
};

class Solution {
public:
    vector<int> levelOrder(Node* root) {
        if (root == nullptr) { // added this check to handle empty tree
            return {};
        }

        queue<Node*> q;
        q.push(root);
        vector<int> ans;

        while (!q.empty()) {
            Node* temp = q.front();
            q.pop();

            ans.push_back(temp->data);
            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }

        return ans;
    }
};