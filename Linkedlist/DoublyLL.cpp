#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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

    void insertAtBeginning(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

    void insertAtEnd(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void insertAtIndex(int idx, int val) {
        if (idx == 0) insertAtBeginning(val);
        else if (idx == size) insertAtEnd(val);
        else if (idx < 0 || idx > size) cout << "Invalid index";
        else {
            Node* temp = head;
            Node* t = new Node(val);
            for (int i = 0; i < idx - 1; i++) {
                temp = temp->next;
            }
            t->next = temp->next;
            t->prev = temp;
            temp->next->prev = t;
            temp->next = t;
            size++;
        }
    }

    void deleteAtHead() {
        if (size == 0) return;
        Node* temp = head;
        if (size == 1) {
            head = tail = NULL;
        } else {
            head = head->next;
            head->prev = NULL;
        }
        delete temp;
        size--;
    }

    void deleteAtTail() {
        if (size == 0) return;
        Node* temp = tail;
        if (size == 1) {
            head = tail = NULL;
        } else {
            tail = tail->prev;
            tail->next = NULL;
        }
        delete temp;
        size--;
    }

    void deleteAtIndex(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Invalid index";
            return;
        }
        if (idx == 0) deleteAtHead();
        else if (idx == size - 1) deleteAtTail();
        else {
            Node* temp = head;
            for (int i = 0; i < idx; i++) {
                temp = temp->next;
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
            size--;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
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
    ll.display();

    ll.insertAtBeginning(50);
    ll.display();

    ll.insertAtIndex(3, 80);
    ll.display();

    ll.deleteAtHead();
    ll.display();

    ll.deleteAtTail();
    ll.display();

    ll.deleteAtIndex(2);
    ll.display();
}
