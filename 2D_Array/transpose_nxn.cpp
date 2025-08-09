#include <iostream>
using namespace std;

int main(){
    int m, n;
    cout<<"Enter m and n : ";
    cin>>m>>n;
    int arr[m][n];
    int t[n][m];
    cout<<"enter elements: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }   
    }

    cout<<"Before Transpose : "<< endl;;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j]<<"  ";
        }  
        cout << endl; 
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            t[i][j]=arr[j][i];
        }   
    }
    
    
    
    cout<<"After Transpose :  "<< endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<t[i][j]<<"  ";
        }
        cout << endl;   
    }
}