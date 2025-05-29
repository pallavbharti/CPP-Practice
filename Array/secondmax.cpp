# include <iostream>
using namespace std;
int main(){
    int max=INT8_MIN;
    int arr[5];
    cout<<"enter element: ";

    for(int i = 0 ; i <5 ; i++){
        cin>>arr[i];
    }

    for(int i = 0 ; i <5 ; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<"max is : "<<max;

    int secmax=0;
    for (int i = 0; i < 5; i++)
    {
        if(secmax<arr[i] && arr[i]!=max){
            secmax=arr[i];
        }
    }
    
    cout<<" second max element is " << secmax;
}