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
    int n,i,j;
    
    cout<<"enter size of array : ";
    cin >> n;

    vector <int> v(n);
    cout<< "enter element";
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    } 


    cout<<"enter i index: ";
    cin >> i;
    cout<<"enter j index : ";
    cin >> j;

    if(i < 0 || j >= v.size()) {
    cout << "Invalid indices.";
    return 1;
}

    
    
    reversepart(i,j,v);
    display(v);

}