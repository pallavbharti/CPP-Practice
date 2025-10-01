#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int low = 1;
        int high = n-2;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1] ) return mid;
            else if(arr[mid]>arr[mid+1]) high =mid-1;
            else low = mid+1;
        }

    return 100;  //garbage value
    }
int main(){
    int n;
    cout<< "Enter size :";
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    
    cout<<"At idx: "<< peakIndexInMountainArray(arr);
}
