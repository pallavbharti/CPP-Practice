#include<iostream>
using namespace std;
void display(int arr[],int size){
    cout<<"array is : ";
    for(int i=0 ; i<size ; i++){
        cout<< arr[i] << "  ";
    }
}

void reverse(int arr[],int i,int j){
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;j--;
    }
}

void nextPermutation(int arr[],int n){
    // Step 1 : Finding pivot element (agar n-2(i)<n-1(i+1) se to idx =i
    int idx=-1;
    for (int i = n-2; i >=0; i--)
    {
        if(arr[i]<arr[i+1]){
            idx=i;
            break;
        }
    }

    // Step 2 : If array is already sorted then only reverse from 0 to n-1.
    if(idx==-1){
        reverse(arr,0,n-1);
        return;
    }

    // now reverse after idx
    reverse(arr,idx+1,n-1);

    // Step 3: Finding just greater number's index  than idxthen swap.
    int j=-1;
    for (int i = idx+1 ; i < n; i++)
    {
        if(arr[i] > arr[idx]){
            j=i; 
            break; // We got index of just Greater .
        }
    }

    // Now Swap idx with j.
    int temp=arr[idx];
    arr[idx]=arr[j];
    arr[j]=temp;
    

}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter array element: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    display(arr,n);
    nextPermutation(arr,n);
cout<<"next permutation: "<<endl;
    display(arr,n);
}