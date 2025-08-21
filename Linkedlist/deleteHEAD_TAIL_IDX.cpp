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
void insertAtEnd(int val){
        Node * temp=new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next =temp;
            tail=temp;
        }
        size++;

    }

void deletehead(){
    head=head->next;
    size--;
}

void deleteTail(){
    if(size==0) cout<<"empty list";
    Node * temp= head;
    while(temp->next !=tail){
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    size--;
}

void deleteAtIdx(int idx){

if(size==0){
     cout<<" Empty List ";
     return;
    }
else if(idx<0 || idx>size-1) cout<<"invalid index";
else if (idx==0) deletehead();
else if (idx==size-1) deleteTail();

else{
    Node * temp = head;
    for(int i=1;i<=idx-1;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    size--;

}


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
    ll.insertAtEnd(50);
    ll.insertAtEnd(60);
    ll.insertAtEnd(70);
    ll.display();

    ll.deletehead();
    ll.display();

    ll.deleteTail();
    ll.display();

    ll.deleteAtIdx(3);
    ll.display();
}