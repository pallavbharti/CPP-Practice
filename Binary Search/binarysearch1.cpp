#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n , x;
    cout<<"Enter size of array: ";
    cin>>n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr + n);
    cout<<"Array element is in sorted order: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;
    cout<<"Enter target element: ";
    cin>>x;  cout << endl;
    int low=0 , high=n-1;
    bool flag = false;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
            cout<<x <<" is at idx in [sorted array] is: "<<mid;
            flag=true;     break;
        }
        else if(arr[mid]<x) low=mid+1;
        else high = mid-1;
    }
    if (flag==false) cout<<-1;
    
}
