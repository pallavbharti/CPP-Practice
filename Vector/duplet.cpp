#include<iostream>
using namespace std;
#include <vector>

int main(){
    int n,x;
    cout<<"enter size : ";
    cin >> n;
    cout<<"enter finding number : ";
    cin >> x;

    vector <int> v(n);

    cout<< "enter element";
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    } 

    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x){
                cout<<"[" << i<<" "<< j<< "]" ;
            }
            
        }

    }
}