#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue< int, vector<int> , greater<int> > pq;
    int arr[] = {3,2,1,5,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx=0; 
    int k =3;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k){
            arr[idx++]=pq.top();    
            pq.pop();
        }
    }
    
    while(!pq.empty()){
        arr[idx++]=pq.top();
        pq.pop();
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}