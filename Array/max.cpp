# include <iostream>
using namespace std;
int main(){
    int max=0;
    int arr[5];
    for(int i = 0 ; i <5 ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i <5 ; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<max;
}