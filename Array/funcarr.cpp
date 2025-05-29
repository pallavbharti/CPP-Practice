# include <iostream>
using namespace std;

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i] << " ";
    }
}

int main(){
    int arr[]={22,43,56,32,11};
    int size = sizeof(arr)/sizeof(arr[0]);

    display(arr,size);
}