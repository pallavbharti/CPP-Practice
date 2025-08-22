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

class Deque {
public:
    Node* head;
    Node* tail;
    int size;

    Deque() {
        head = tail = NULL;
        size = 0;
    }

    void pushFront(int val) {
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

    void pushBack(int val) {
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

    void popfront() {
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

    void popBack() {
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
    Deque q;
    q.pushBack(10);
    q.pushBack(20);
    q.pushBack(30);
    q.pushBack(40);
    q.display();

    q.pushFront(50);
    q.display();

    cout<< "deletion at Back: "<< endl;
    q.popBack();
    q.display();
}
