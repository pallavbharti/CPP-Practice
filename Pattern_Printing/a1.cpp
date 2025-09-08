#include<iostream>
using namespace std;
int main(){
    cout<<"enter n : ";
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            cout<< char(j+64);
        }
        cout<<endl;
    }
  
    


for (int i = 1; i <= n; i++)
    {
        
        for (int j = i; j <= n; j++)
        {
            cout<< char(j+64);
        }
        cout<<endl;
    }
}