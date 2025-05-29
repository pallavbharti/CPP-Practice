#include<iostream>
using namespace std;
#include <vector>
int main(){
    int n;
    cout<<"enter size : ";
    cin >> n;
    vector <int> v(n);
    cout<< "enter element";
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    } 

    for(int i=0 ; i<n ; i++){
        cout<<v[i] << "  ";
    } 
}