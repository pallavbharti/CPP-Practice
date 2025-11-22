#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int ,  vector<int> , greater<int >> pq;
    int arr[] = {10,20,-4,6,18,2,105,118};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if(pq.size() >k) pq.pop();
    }
    cout<<"Kth largest element is: "<<pq.top()<<endl;
}