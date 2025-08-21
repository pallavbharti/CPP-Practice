# include <iostream>
using namespace std;
class Node{
    public:

    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next= NULL;
    }
};

void display(Node* head){
    while (head!=NULL)
{
   cout<<head->val << "->";
   head=head->next;
}
cout<<" NULL "<<endl;

}

int main(){
    Node *a =new Node(10);
    Node *b= new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
// Print d's value using a :
cout<< (((a->next)->next)->next)->val<<endl;
// Traversal 
display(a);
reverse(a);
}