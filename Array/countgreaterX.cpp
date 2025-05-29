#include <iostream>
using namespace std;
int main(){
    int x,count=0;
    cout<<"enter x : ";
    cin>>x;
    cout<<"enter array elements: ";
    int arr[5];
    for(int i = 0 ; i <5 ; i++){
        cin>>arr[i];
    }
    for(int i=0; i<5;i++){
        if(arr[i]>x){
        count++;
        }
    }
    cout<<"count greater than " << x << "  is  :  " <<count;
}