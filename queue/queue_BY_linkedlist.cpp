# include <iostream>
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
class Queue{
    public:
    Node * head;
    Node * tail;
    int size;
    Queue(){
        head = tail=NULL;
        size=0;
    }
    void push(int val){   // InsertAtEnd linkedlist
        Node * temp=new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next =temp;
            tail=temp;
        }
        size++;

    }
    void pop(){  //Delete At Head 
        if(size==0){
            cout<<"Queue is empty."<<endl;
            return ;
        }
        head = head->next;
        size--;
    }
    int front(){
        if(size==0){
            cout<<"Queue is empty."<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"Queue is empty."<<endl;
            return -1;
        }
        return tail->val;
    }

    bool empty() {
        if(size == 0) return true;
        else return false;
    }

    int getSize() {
    return size;
}

    void display(){
        Node * temp = head;
        while (temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl; 
    }
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    cout << "Size: " << q.getSize() << endl;
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    q.pop();
    q.push(50);
    q.push(70);
    q.display();

}