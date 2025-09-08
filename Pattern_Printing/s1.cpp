#include<iostream>
using namespace std;
int main(){
    cout<<"enter n : ";
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}