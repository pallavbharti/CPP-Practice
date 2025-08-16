#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val =val;
        this->left=NULL;
        this->right=NULL;
    }

};

    int levels(Node* root){
        if(root == NULL) return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    void helper(Node* root,int & maxdia){
        if(root==NULL) return;
        int dia = levels(root->left)+levels(root->right);
        maxdia=max(maxdia,dia);
        helper(root->left,maxdia);
        helper(root->right,maxdia);
    }
    int diameterOfBinaryTree(Node* root) {
        int maxdia =0;
        helper(root,maxdia);
        return maxdia;
    }

void display(Node * root){
    if (root==0)return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
    
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    display(a);
     cout << "\nMax Diameter : " << diameterOfBinaryTree(a) << endl;

}