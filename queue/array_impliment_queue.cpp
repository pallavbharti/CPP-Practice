/* PROBLEM in Array implementation of Queue : 
Once elements are dequeued from the front, 
those positions are wasted and cannot be reused unless 
we shift the entire array, which is inefficient (O(n) time).
*/
#include <iostream>
#include<vector>
using namespace std;

class Queue {
public:
    int f;
    int b;
    int s;
    vector <int> arr;

    Queue(int val) {
        f = 0;
        b = 0;
        vector<int>v(val);
        arr=v;
    }

    int size() {
        return s;
    }

    bool empty() {
        if(s== 0) return true;
        else return false;
    }

    void push(int val) {
        if (b == arr.size()) {
            cout << "overflow" << endl;
            return;
        }
        arr[b] = val;
        b++;
        s++;
    }

    void pop() {
        if (s==0) return;
        else {
            f++; s--;
        
    }

    int front() {
        if (s == 0) {
            cout << "stack is EMPTY" << endl;
            return -1;
        }
        return arr[f];
    }

    int back() {
        if (s == 0) {
            cout << "stack is EMPTY" << endl;
            return -1;
        }
        return arr[b - 1];
    }

    void display() {
        for (int i = f; i < b; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);
    q.empty();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();

    q.push(50);

    cout << "Size: " << q.size() << endl;
    cout << "Front: " << q.front() << endl;

    q.push(60); // should show overflow

    q.pop();
    q.push(70);
    q.display();

    cout << "Back: " << q.back() << endl;
}
