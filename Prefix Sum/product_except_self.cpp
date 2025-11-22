#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pre[n];
    int product=1;
    for (int i = 0; i < n; i++)
    {
        product *=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = product/arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] << " ";
    }
    // DIVIDE BY ZERO ERROR CAN COME.
}