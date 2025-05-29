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

    int i=0;
    int j=v.size()-1;

    while(i<j){
        int temp =v[i];
        v[i]=v[j];
        v[j]=temp;
        i++; j--;
    }
    cout<<"after reverse : ";
   for(int i=0 ; i<n ; i++){
        cout<<v[i] << "  ";
    } 
     

}