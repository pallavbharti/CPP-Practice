#include<iostream>
using namespace std;
int main(){
    cout<<"enter n : ";
    int n;
    cin>>n ;
    int nst = 1;
    int nsp = n-1;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<"_";
        } nsp--;
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }nst+=2;
        cout<<endl;
    }
}