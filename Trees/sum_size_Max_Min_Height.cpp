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

void display(Node * root){
    if (root==0)return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int sum(Node* root){
    if (root==0) return 0;
    return root->val+sum(root->left)+sum(root->right);
}
int size(Node* root){
    if (root==0) return 0;
    return 1+size(root->left)+size(root->right);
}
int MaxInTree(Node* root){
    if (root==0) return INT16_MIN;
    int lmax=MaxInTree(root->left);
    int rmax=MaxInTree(root->right);
    return max(root->val,max(lmax,rmax));
}
int MinInTree(Node* root){
    if (root==0) return INT16_MAX;
    int lmin=MinInTree(root->left);
    int rmin=MinInTree(root->right);
    return min(root->val,min(lmin,rmin));
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
    cout<<endl;
    cout<<"sum is : " << sum(a)<< endl;
    cout<<"size is : " << size(a)<< endl;
    cout<<"MaxInTree is : " << MaxInTree(a)<< endl;
    cout<<"MinInTree is : " << MinInTree(a)<< endl;
}