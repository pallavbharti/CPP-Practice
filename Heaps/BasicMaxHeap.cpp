#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    pq.push(1);
    cout<<"Size of maxHeap: "<<pq.size()<<endl;
    cout<<"Top element of maxHeap: "<<pq.top()<<endl;
    cout<<"Elements of maxHeap in descending order: ";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}