#include<iostream>
using namespace std;
int main(){
    int n,m,nsp;
    cout<<"enter n: ";
    cin>>n;
    // print first pattern : 2*n -1 :
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    
    m=n-1;
    nsp = 1;
    for(int i=1;i<=n;i++){

        // stars:
        for(int j = 1; j<=m+1-i; j++){
            cout<<j;
        }

        // spaces:
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }nsp+=2;
        // stars:
        for(int j = 1; j<=m+1-i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}