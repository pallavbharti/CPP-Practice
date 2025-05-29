#include<iostream>
using namespace std;
#include <vector>

void display(vector<int> v){
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i];
    } 

}

void reversepart(int i, int j , vector <int> &v){
    while (i<j){
    int temp = v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
    }
   
}

int main(){
    int n,k;
    
    cout<<"enter size of array : ";
    cin >> n;
    cout<<"enter K element : ";
    cin >> k;

    vector <int> v(n);
    cout<< "enter element";
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    } 

    
    if(k>n){
        k=k%n;
    }
    
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    display(v);

}