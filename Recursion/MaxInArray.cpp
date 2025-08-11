#include<iostream>
using namespace std;

void Max(int arr[],int n ,int idx,int maxim){
    if(idx==n) cout<< maxim;

    if (maxim<arr[idx]) maxim=arr[idx];
    Max(arr,n,idx+1,maxim);
}


int main(){
    int arr[] ={2,4,3,63,8,9,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    Max(arr,n,0,INT16_MIN);
    
}