#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Linkedlist{
    public:
    Node * head;
    Node * tail;
    int size;
    Linkedlist(){
        head = tail=NULL;
        size=0;
    }


 void insertAtBeginning(int val){
    Node* temp =new Node(val);
    if(size==0) head = tail=temp;
    else{
        temp->next=head;
        head=temp;
    }
    size++;
 }
 void insertAtIndex(int idx,int val){
    if (idx==0) insertAtBeginning(val);
    else if(idx==size) insertAtEnd(val);
    else if(idx < 0 || idx > size) cout<<"Invalid index";

    else{
        Node *temp =head;
        Node *t =new Node(val);
        for (int i = 0; i < idx-1; i++)
        {
            temp=temp->next;
        }
       t->next=temp->next;
       temp->next=t;
       size++;
    }
    
 }

 void insertAtEnd(int val){
        Node * temp=new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next =temp;
            tail=temp;
        }
        size++;

    }
void display(){
    Node* temp= head;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
};
int main(){
    Linkedlist ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.display();
    
    ll.insertAtBeginning(50);
    ll.display();

    ll.insertAtIndex(3,80);
    ll.display();

}