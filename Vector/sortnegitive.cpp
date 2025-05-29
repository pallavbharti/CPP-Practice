#include<iostream>
using namespace std;
#include <vector>

void display(vector<int> v){
    for(int i=0 ; i<v.size() ; i++){
        cout<<v[i];
    } 

}


void sortnegetive(vector<int> &v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]<0) i++ ;

        else if(v[j]>0) j--;

        else{
            int temp = v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
}
int main(){
    int n;
    cout<<"enter size : ";
    cin >> n;
    vector <int> v(n);
    cout<< "enter element";
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
    } 

sortnegetive(v);

display(v);

}