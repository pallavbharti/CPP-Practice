#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue< int, vector<int> , greater<int> > pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    pq.push(1);
    cout<<"Size of minHeap: "<<pq.size()<<endl;
    cout<<"Top element of minHeap: "<<pq.top()<<endl;
    cout<<"Elements of minHeap: ";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}