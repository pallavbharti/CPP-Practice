# include <iostream>
using namespace std;
#include<vector>

void display(vector<int> v){
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i];
    } 

}


void sort(vector<int>&v){
    int i=0;
    int j = v.size()-1;
    while(i<j){
        if (v[i]>v[j])
        {
            
        }
    }
}

int main(){
     int n;
    
    cout<<"enter size of array : ";
    cin >> n;
    vector <int> v(n);
    cout<< "enter element";
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    } 

    sort(v);
    display(v);

}