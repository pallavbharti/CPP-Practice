#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter rows m and column n";
    cin>>m>>n;
    int arr[m][n];
    cout<<"enter elements: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout << endl;
    }
    
}