#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of rows and columns : ";
    cin>>m>>n;
    int arr[m][n];
    
    cout<<"Enter elements : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Before Transpose : " <<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<"After Transpose : " <<endl;
    
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i][j]<<"  ";
        }
        cout<<endl;
    }

}