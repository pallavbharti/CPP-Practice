//              [ LEETCODE : 113 ]
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void helper(Node* root, vector<int> v, vector<vector<int>>& ans, int sum) {
    // base case
    if (root == NULL) return;

    // if leaf and sum matched, push path
    if (root->left == NULL && root->right == NULL) {
        if (root->val == sum) {
            v.push_back(root->val);
            ans.push_back(v);
        }
        return;
    }

    // otherwise, add current node value and recurse
    v.push_back(root->val);
    helper(root->left, v, ans, sum - root->val);
    helper(root->right, v, ans, sum - root->val);
}

vector<vector<int>> pathSum(Node* root, int targetSum) {
    vector<vector<int>> ans;
    vector<int> v;
    helper(root, v, ans, targetSum);
    return ans;
}

void display(Node* root) {
    if (root == NULL) return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}

int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    // Display tree nodes
    cout << "Tree (Preorder): ";
    display(a);
    cout << "\n";

    vector<vector<int>> paths = pathSum(a, 7);

    if(paths.empty())
    cout << "No paths found with the given sum.\n";
    
else {
    cout << "Root-to-leaf paths with sum=23:\n";
    for (auto &path : paths) {
        for (int val : path) {
            cout << val << " ";
        }
        cout << endl;
    }
    }
}
