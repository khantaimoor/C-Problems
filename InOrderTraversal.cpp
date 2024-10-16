#include<iostream>
#include<vector>
#include<stack> // added this header file for stack
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

class Solution {
public:
    vector<int> inOrder(Node* root) {
        if (root == nullptr) { // added this check to handle empty tree
            return {};
        }

        stack<Node*> s;
        stack<bool> visited;
        s.push(root);
        visited.push(0);
        vector<int> ans;

        while (!s.empty()) {
            Node* temp = s.top();
            s.pop();
            bool flag = visited.top();
            visited.pop();

            // FIRST TIME VISIT
            if (flag == 0) {
                // right
                if (temp->right) {
                    s.push(temp->right);
                    visited.push(0);
                }

                // Node
                s.push(temp);
                visited.push(1);

                // Left
                if (temp->left) {
                    s.push(temp->left);
                    visited.push(0);
                }
            } else {
                ans.push_back(temp->data);
            }
        }
        return ans;
    }
};