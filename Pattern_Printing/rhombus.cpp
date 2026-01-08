#include<iostream>
using namespace std;
int main(){
    cout<<"enter n : ";
    int n;
    cin>>n ;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"_ ";
        }
        for (int k = 1; k <= n; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    
}