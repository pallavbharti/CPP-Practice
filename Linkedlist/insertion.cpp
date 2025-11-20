#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Linkedlist {
public:
    Node* head;
    Node* tail;
    int size;

    Linkedlist() {
        head = tail = NULL;
        size = 0;
    }
    void insertAtBeginning(int val){
        Node * temp = new Node(val);
        temp->next=head;
        head= temp;
        size++;
    }
    void insertAtIndex(int val, int idx){
        Node* t = new Node(val);
        Node* temp = head;
        int i=0;
        while(i<idx-1){
            temp=temp->next;
            i++;
        }
        t->next = temp->next;
        temp->next = t;
        size++;
    }
    void insertAtEnd(int val) {
        Node* temp = new Node(val);
        if(size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void deleteAtHead(){
        if(size==0) cout<<"Empty linkedList";
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0) cout<<"Empty linkedList";
        Node* temp =head;
        while (temp->next!=tail)
        {
            temp=temp->next;
        }
        size--;
    }
    void deleteAtIndex(int idx){
        if (size==0) deleteAtHead();
        else if (idx==size-1) deleteAtTail();
        else if (idx<0 || idx>size-1) cout<<"Invalid index ";
        else{
        Node* temp = head;
        int i=0;
        while(i<idx-1){
            temp=temp->next;
            i++;
        }
        temp->next= temp->next->next;
        size--;
    }
    }
    void display() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Linkedlist ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    cout<< ll.size;
    cout<<endl;
    ll.insertAtBeginning(100);
    ll.display();
    cout<< ll.size;
    ll.insertAtIndex(1111,0);
    cout<<endl;
    ll.display();
    cout<<endl;
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtIndex(2);
    ll.display();
}
