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
bool issame(Node * a,Node * h){
    // base case: 
    if(a==NULL && h==NULL) return true;
    if(a==NULL || h==NULL) return false;
    // Code : 
    if(a->val!=h->val) return false;
    bool lans = issame(a->left ,h->left);
    if (lans==false) return false;
    bool rans = issame(a->right ,h->right);
    if (rans==false) return false;
    return true;
    
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
    Node* d=new Node();
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
    Node* h=new Node(1);
    Node* i=new Node(2);
    Node* j=new Node(3);
    Node* k=new Node(4);
    Node* l=new Node(5);
    Node* m=new Node(6);
    Node* n=new Node(7);
    h->left=i;
    h->right=j;
    i->left=k;
    i->right=l;
    j->left=m;
    j->right=n;
    display(h);
    cout<<endl;
    cout<< issame(a,h)<<endl;

}